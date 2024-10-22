(**************************************************************************)
(*                                                                        *)
(*  This file is part of Frama-C.                                         *)
(*                                                                        *)
(*  Copyright (C) 2007-2011                                               *)
(*    CEA (Commissariat � l'�nergie atomique et aux �nergies              *)
(*         alternatives)                                                  *)
(*                                                                        *)
(*  you can redistribute it and/or modify it under the terms of the GNU   *)
(*  Lesser General Public License as published by the Free Software       *)
(*  Foundation, version 2.1.                                              *)
(*                                                                        *)
(*  It is distributed in the hope that it will be useful,                 *)
(*  but WITHOUT ANY WARRANTY; without even the implied warranty of        *)
(*  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *)
(*  GNU Lesser General Public License for more details.                   *)
(*                                                                        *)
(*  See the GNU Lesser General Public License version 2.1                 *)
(*  for more details (enclosed in the file licenses/LGPLv2.1).            *)
(*                                                                        *)
(**************************************************************************)

open Cil_types
open Cil_datatype
open Cil
open Ast_info

(* ************************************************************************* *)
(** {2 Global variables} *)
(* ************************************************************************* *)

(* redefinition from Kernel_function.ml *)
let get_formals f = match f.fundec with
  | Definition(d, _) -> d.sformals
  | Declaration(_, _, None, _) -> []
  | Declaration(_,_,Some args,_) -> args

let get_locals f = match f.fundec with
  | Definition(d, _) -> d.slocals
  | Declaration(_, _, _, _) -> []

let find_first_stmt = Extlib.mk_fun "Globals.find_first_stmt"

let find_enclosing_block = Extlib.mk_fun "Globals.find_enclosing_block"

module Vars = struct

  include Cil_state_builder.Varinfo_hashtbl
    (Initinfo)
    (struct
       let name = "Globals.Vars"
       let dependencies = [ Ast.self ]
       let size = 17
       let kind = `Internal
     end)

  exception AlreadyExists of varinfo * initinfo

  let add vi info =
    ignore
      (memo
         ~change:(fun info -> raise (AlreadyExists(vi, info)))
         (fun _ -> info)
         vi)

  let add_decl vi = add vi { init = None }

  let get_astinfo_ref : (Cil_types.varinfo -> string * localisation) ref =
    Extlib.mk_fun "get_astinfo_ref"

  exception Found of varinfo
  let find_from_astinfo name = function
    | VGlobal ->
        (try
           iter (fun v _ -> if v.vname = name then raise (Found v));
           raise Not_found
         with Found v ->
           v)
    | VLocal kf ->
        List.find (fun v -> v.vname = name) (get_locals kf)
    | VFormal kf ->
        List.find (fun v -> v.vname = name) (get_formals kf)

  let get_astinfo vi = !get_astinfo_ref vi

  let pp_varinfo p fmt v =
    let name, loc = get_astinfo v in
    let pp fmt =
      Format.fprintf fmt "@[<hv 2>Globals.Vars.find_from_astinfo@;%S@;%a@]"
        name
        (Cil_datatype.Localisation.internal_pretty_code Type.Call) loc
    in
    Type.par p Type.Call fmt pp

  let () = Varinfo.internal_pretty_code_ref := pp_varinfo

  let iter_in_file_order f = 
    let treat_global = function
      | GVar(vi,init,_) -> f vi init
      | GVarDecl (_,vi,_) when not (Cil.isFunctionType vi.vtype) ->
        f vi { init = None }
      | GType _ | GCompTag _ | GCompTagDecl _ | GEnumTag _ | GEnumTagDecl _
      | GVarDecl _ | GFun _ | GAsm _ | GPragma _ | GText _ | GAnnot _ -> ()
    in
    List.iter treat_global (Ast.get ()).globals

end

(* ************************************************************************* *)
(** {2 Functions} *)
(* ************************************************************************* *)

module Functions = struct

  module State =
    Cil_state_builder.Varinfo_hashtbl
      (Cil_datatype.Kf)
      (struct
         let name = "Functions"
         let dependencies = [ Ast.self ]
         let size = 17
         let kind = `Internal
       end)

  let self = State.self

  (* Maintain an alphabetical ordering of the functions, so that
     iteration stays independent from vid numerotation scheme.
     NB: Might be possible to have a map from string to vi in order
     to use the structure for find_by_name *)
  module VarinfoAlphaOrderSet = struct
    let compare x y =
      let res = String.compare x.vname y.vname in
      if res = 0 then Datatype.Int.compare x.vid y.vid
      else res

    module Data =
      Set.Make
        (struct
           type t = varinfo
           let compare = compare
         end)

    module Elts = struct
      include Cil_datatype.Varinfo
      let compare = compare
    end

    include
      Datatype.Set
      (Data)(Elts)(struct let module_name = "VarinfoAlphaOrderSet" end)
  end

  module Iterator =
    State_builder.Set_ref
      (VarinfoAlphaOrderSet)
      (struct
         let name = "FunctionsOrder"
         let dependencies = [ State.self ]
         let kind = `Internal
       end)

  let set_spec = Extlib.mk_fun "Globals.Functions.set_spec"

  let init_kernel_function f spec =
    let default_spec = Cil.empty_funspec () in
    let kf = { fundec = f; return_stmt = None; spec = default_spec } in
    !set_spec kf (fun _ -> spec);
    kf

  let fundec_of_decl spec v l =
    let args =
      try Some (getFormalsDecl v)
      with Not_found ->
        try
          setFormalsDecl v v.vtype;
          Some (getFormalsDecl v)
        with Not_found ->
          None (* function with 0 arg. See setFormalsDecl code for details *)
    in Declaration(spec, v, args, l)

  let register_declaration action spec v l =
    action (fun v -> init_kernel_function (fundec_of_decl spec v l) spec) v

  let add_declaration =
    register_declaration (fun f v -> Iterator.add v; State.memo f v)

  let update_kf kf fundec spec =
    kf.fundec <- fundec;
    (*Kernel.feedback "Spec of function %a is registered as %a" 
      Cil_datatype.Kf.pretty kf !Ast_printer.d_funspec spec; *)
    !set_spec kf (fun old -> Logic_utils.merge_funspec spec old; spec);
    kf.return_stmt <- None

  let replace_by_declaration s v l=
    (* Kernel.feedback "replacing %a by decl" Cil_datatype.Varinfo.pretty v; *)
    if State.mem v then begin
      let fundec = fundec_of_decl s v l in
      let kf = State.find v in
      update_kf kf fundec s
    end else
      register_declaration
        (fun f v -> Iterator.add v; State.replace v (f v)) s v l

  let replace_by_definition spec f l =
    (* Kernel.feedback "replacing %a" Cil_datatype.Varinfo.pretty f.svar; *)
    Iterator.add f.svar;
    if State.mem f.svar then
      update_kf (State.find f.svar) (Definition (f,l)) spec
    else
      State.replace f.svar (init_kernel_function (Definition (f, l)) spec)

  let add f =
    match f with
    | Definition (n, l) ->
      Kernel.debug
	"Register definition %a with specification \"%a\"@\n"
        Varinfo.pretty_vname n.svar !Ast_printer.d_funspec n.sspec ;
      replace_by_definition n.sspec n l;
      Kernel.MainFunction.set_possible_values
        (n.svar.vname :: Kernel.MainFunction.get_possible_values ())
    | Declaration (spec, v,_,l) ->
      Kernel.debug
	"Register declaration %a with specification \"%a\"@\n"
        Varinfo.pretty_vname v !Ast_printer.d_funspec spec;
      replace_by_declaration spec v l

  let iter f = Iterator.iter (fun v -> f (State.find v))
  let fold f = Iterator.fold (fun v acc -> f (State.find v) acc)

  let iter_on_fundecs f =
    iter
      (fun kf -> match kf.fundec with
       | Definition (fundec,_) -> f fundec
       | Declaration _ -> ())

  let get vi =
    (*Kernel.feedback "get %a in %a" Cil_datatype.Varinfo.pretty vi
    Project.pretty (Project.current()); *)
    if not (is_function_type vi) then raise Not_found;
    let add v = 
      (*Kernel.feedback "adding empty fun for %a" 
        Cil_datatype.Varinfo.pretty vi; *)
      add_declaration (empty_funspec ()) v v.vdecl 
    in
    State.memo add vi

  let get_params kf =
    match kf.fundec with
      | Definition(f,_loc) -> f.sformals
      | Declaration(_spec,_v,params,_loc) ->
          match params with None -> [] | Some ls -> ls

  let get_vi kf =
    match kf.fundec with
      | Definition(f,_loc) -> f.svar
      | Declaration(_spec,v,_params,_loc) -> v

  let register kf =
    let vi = get_vi kf in
    let add _ = kf in
    let change old_kf =
      if old_kf != kf then
        Kernel.fatal
          "Trying to associate two distinct \
           kernel functions with same varinfo %a"
          Cil_datatype.Varinfo.pretty vi
      else old_kf
    in
    ignore (State.memo ~change add vi);
    Iterator.add vi

  exception Found_kf of kernel_function

  let find_by_name fct_name =
    let f kf =
      if Function.get_name kf.fundec = fct_name then raise (Found_kf kf)
    in
    try
      iter f;
      raise Not_found
    with Found_kf kf ->
      kf

  let find_def_by_name fct_name =
    let f kf =
      if Function.is_definition kf.fundec
        && Function.get_name kf.fundec = fct_name
      then
        raise (Found_kf kf)
    in
    try
      iter f;
      raise Not_found
    with Found_kf kf -> kf

  let find_englobing_kf ki =
    match ki with
    | Kglobal -> None
    | Kstmt s ->
        try
          iter
            (fun kf ->
               match kf.fundec with
               | Definition (fundec,_) ->
                   if List.exists
                     (fun sa -> sa.sid = s.sid)
                     fundec.sallstmts
                   then
                     raise (Found_kf kf)
               | Declaration _ -> ());
          None
        with Found_kf kf ->
          Some kf

  let find_englobing_kf =
    Kernel.deprecated "Globals.Functions.find_englobing_kf"
      ~now:"Kernel_function.find_englobing_kf" find_englobing_kf


  exception Found of kernel_function
  let get_astinfo vi =
    vi.vname,
    if vi.vglob then VGlobal
    else begin
      if vi.vformal then begin
        try
          iter
            (fun kf ->
               if List.exists (fun v -> v.vname = vi.vname) (get_formals kf)
               then raise (Found kf));
          assert false
        with Found kf ->
          VFormal kf
      end else begin
        try
          iter
            (fun kf ->
               if List.exists (fun v -> v.vname = vi.vname) (get_locals kf)
               then raise (Found kf));
          assert false
        with Found kf ->
          VLocal kf
      end
    end

  let () = Vars.get_astinfo_ref := get_astinfo

end

(* ************************************************************************* *)
(** {2 Global annotations} *)
(* ************************************************************************* *)

module Annotations = struct

  let name = "GlobalAnnotations"

  module State =
    State_builder.List_ref
      (Datatype.Pair(Global_annotation)(Datatype.Bool))
      (struct
         let name = name
         let dependencies = [ Ast.self ]
         let kind = `Internal
       end)

  let self = State.self

  let () = 
    State_dependency_graph.Static.add_dependencies
      ~from:self 
      [ Property_status.self ]

  let get_all = State.get

  let add b annot =
    let l = State.get () in
    State.set ((annot, b) :: l);
    List.iter Property_status.register (Property.ip_of_global_annotation annot)

  let add_user = add false
  let add_generated = add true

  let iter f = List.iter (fun (a, b) -> f a b) (State.get ())

end

(* ************************************************************************* *)
(** {2 Globals associated to filename} *)
(* ************************************************************************* *)

module FileIndex = struct

  let name = "FileIndex"

  module S =
    State_builder.Hashtbl
      (Datatype.String.Hashtbl)
      (Datatype.Pair(Datatype.String)(Datatype.List(Global)))
      (struct
         let name = name
         let dependencies = [ Ast.self ]
         let size = 7
         let kind = `Internal
       end)

  let compute, self =
    let compute () =
      iterGlobals
        (Ast.get ())
        (fun glob ->
          let f = (fst (Global.loc glob)).Lexing.pos_fname in
           if Kernel.debug_atleast 1 then
             Kernel.debug "Indexing global in file %s@." f;
           ignore
             (S.memo
                ~change:(fun (f,l) -> f, glob:: l) (fun _ -> f,[ glob ]) f))
    in
    State_builder.apply_once "FileIndex.compute" [ S.self ] compute

  let get_files () =
    compute ();
    S.fold (fun key _ keys ->  key :: keys) []

  let get_symbols ~filename =
    compute ();
    try S.find filename
    with Not_found ->
      (* ??? *)
      S.find (Filename.basename filename)

  let find ~filename =
    let f,l = get_symbols ~filename in
    f, List.rev l

  let get_symbols ~filename = snd (get_symbols ~filename)

 (** get all global variables as (varinfo, initinfo) list with only one
      occurence of a varinfo *)
  let get_globals ~filename =
    compute ();
    let varinfo_set =
      let l =  try snd (S.find filename) with Not_found -> [] in
      List.fold_right
        (fun glob acc ->
           let is_glob_varinfo x =
             if x.vglob then
               match x.vtype with
                 | TFun _ -> None
                 | _ -> Some x
             else
               None
           in
           let is_glob_var v = match v with
             | Cil_types.GVar (vi, _, _) ->
                 is_glob_varinfo vi
             | Cil_types.GVarDecl(_,vi, _) ->
                 is_glob_varinfo vi
             | _ -> None
           in
           match is_glob_var glob with
           | None -> acc
           | Some vi -> Varinfo.Set.add vi acc)
        l
        Varinfo.Set.empty
    in
    Varinfo.Set.fold (fun vi acc -> (vi, Vars.find vi) :: acc) varinfo_set []

  let get_global_annotations ~filename =
    compute ();
    let l = try snd (S.find filename) with Not_found -> [] in
    List.fold_right
      (fun glob acc -> match glob with
      | Cil_types.GAnnot(g, _) -> g :: acc
      | _ -> acc)
      l
      []

  let get_functions ?(declarations=false) ~filename =
    compute ();
    let varinfo_set =
      let l = try snd (S.find filename) with Not_found -> [] in
      List.fold_right
        (fun glob acc ->
           let is_func v = match v with
             | Cil_types.GFun(fundec, _) ->
                 Some (fundec.svar)
             | Cil_types.GVarDecl(_,x, _) ->
                 if x.vglob then
                   match x.vtype with
                     | TFun _ ->
                         if declarations ||
                           (match (Functions.get x).fundec with
                                Definition _ -> false | Declaration _ -> true)
                         then Some x
                         else None
                     | _ -> None
                 else
                   None
             | _ -> None
           in match is_func glob with
             | None -> acc
             | Some vi -> Varinfo.Set.add vi acc)
        l
        Varinfo.Set.empty
    in
    Varinfo.Set.fold
      (fun vi acc -> Functions.get vi :: acc)
      varinfo_set
      []

  let kernel_function_of_local_var_or_param_varinfo x =
    compute ();
    let is_param = ref false in
    let pred vi =
      let pred symb = (x.Cil_types.vid = symb.Cil_types.vid)
      in match vi with
        | Cil_types.GFun (fundec, _) ->
            if List.exists pred fundec.Cil_types.slocals then true
            else if List.exists pred fundec.Cil_types.sformals then
              (is_param := true; true)
            else false
        | _ -> false
    in
    let file = (fst x.Cil_types.vdecl).Lexing.pos_fname in
    match List.find pred (snd (S.find file)) with
    | Cil_types.GFun (fundec, _) ->
        Functions.get fundec.Cil_types.svar, !is_param
    | _ -> assert (false)

end

(* ************************************************************************* *)
(** {2 Entry point} *)
(* ************************************************************************* *)

exception No_such_entry_point of string

let entry_point () =
  Ast.compute ();
  let kf_name, lib =
    Kernel.MainFunction.get (), Kernel.LibEntry.get ()
  in
  try Functions.find_by_name kf_name, lib
  with Not_found ->
    raise
      (No_such_entry_point
         (Format.sprintf
            "cannot find entry point `%s'.@;\
Please use option `-main' for specifying a valid entry point."
            kf_name))

let set_entry_point name lib =
  let clear_from_entry_point () =
    let selection =
      State_selection.Dynamic.union
        (State_selection.Dynamic.only_dependencies Kernel.MainFunction.self)
        (State_selection.Dynamic.only_dependencies Kernel.LibEntry.self)
    in
    Project.clear ~selection ()
  in
  let has_changed =
    lib <> Kernel.LibEntry.get () || name <> Kernel.MainFunction.get ()
  in
  if has_changed then begin
    Kernel.MainFunction.unsafe_set name;
    Kernel.LibEntry.unsafe_set lib;
    clear_from_entry_point ()
  end

module Comments_global_cache =
  State_builder.Hashtbl
    (Cil_datatype.Global.Hashtbl)
    (Datatype.List(Datatype.String))
    (struct
      let name = "Comments_global_cache"
      let dependencies = [ Cabshelper.Comments.self; FileIndex.self ]
      let kind = `Internal
      let size = 17
     end)

module Comments_stmt_cache =
  State_builder.Hashtbl
    (Cil_datatype.Stmt.Hashtbl)
    (Datatype.List(Datatype.String))
    (struct
      let name = "Comments_stmt_cache"
      let dependencies = [ Cabshelper.Comments.self; FileIndex.self ]
      let kind = `Internal
      let size = 17
     end)

let get_comments_global g =
  let last_pos f =
    { Lexing.pos_fname = f;
      Lexing.pos_lnum = max_int;
      Lexing.pos_cnum = max_int;
      Lexing.pos_bol = max_int
    }
  in
  let add g =
    let my_loc = Cil_datatype.Global.loc g in
    let file = (fst my_loc).Lexing.pos_fname in
    let globs = FileIndex.get_symbols file in
    let globs = List.sort 
      (fun g1 g2 -> 
        Cil_datatype.Location.compare 
          (Cil_datatype.Global.loc g1)
          (Cil_datatype.Global.loc g2))
      globs
    in
    let rec find_prev l =
      match l with
        | [] -> 
          Kernel.fatal "Cannot find global %a in file %s"
            !Ast_printer.d_global g file
        | g' :: l when Cil_datatype.Global.equal g g' ->
            { Lexing.pos_fname = file;
              Lexing.pos_lnum = 1;
              Lexing.pos_cnum = 0;
              Lexing.pos_bol = 0; }, l = []
        | g' :: g'' :: [] when Cil_datatype.Global.equal g'' g ->
          snd (Cil_datatype.Global.loc g'), l = []
        | _ :: l -> find_prev l
    in 
    let first, is_last = find_prev globs in
    match g with
        GFun (f,_) -> 
          let kf = Functions.get f.svar in
          let s = !find_first_stmt kf in
          let last = fst (Cil_datatype.Stmt.loc s) in
          let comments = Cabshelper.Comments.get (first,last) in
          if is_last then begin
            let first = snd my_loc in
            let last = last_pos file in
            comments @ (Cabshelper.Comments.get (first, last))
          end else comments
      | _ -> 
        let last = if is_last then last_pos file else snd my_loc in
        Cabshelper.Comments.get (first,last)
  in Comments_global_cache.memo add g

let get_comments_stmt s =
  let add s =
    let b = !find_enclosing_block s in
    let rec find_prev l =
      match l with
        | [] ->
          Kernel.fatal "Cannot find statement %d in its enclosing block" s.sid
        | s' :: _ when Cil_datatype.Stmt.equal s s' ->
          fst (Cil_datatype.Stmt.loc s')
        | s' :: s'' :: _ when Cil_datatype.Stmt.equal s'' s ->
          snd (Cil_datatype.Stmt.loc s')
        | { skind = UnspecifiedSequence l1} :: l2 ->
          find_prev ((List.map (fun (x,_,_,_,_) -> x) l1) @ l2)
        | _::l -> find_prev l
    in
    let first = find_prev b.bstmts in
    let last = snd (Cil_datatype.Stmt.loc s) in
    Cabshelper.Comments.get (first,last)
  in Comments_stmt_cache.memo add s

(*
Local Variables:
compile-command: "make -C ../.."
End:
*)
