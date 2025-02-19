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

open Project_skeleton.Output

(* ************************************************************************* *)
(** {3 Signatures} *)
(* ************************************************************************* *)

module type Info = sig
  val name: string
  val dependencies : State.t list
  val kind: State.kind
end

module type Info_with_size = sig
  include Info
  val size: int
end

module type S = sig
  val self: State.t
  val name: string
  val kind: State.kind
  val mark_as_computed: ?project:Project.t -> unit -> unit
  val is_computed: ?project:Project.t -> unit -> bool
  module Datatype: Datatype.S
  val add_hook_on_update: (Datatype.t -> unit) -> unit
  val howto_marshal: (Datatype.t -> 'a) -> ('a -> Datatype.t) -> unit
end

(* ************************************************************************* *)
(** {3 Proxies} *)
(* ************************************************************************* *)

module Proxy = struct

  type kind = Backward | Forward | Both
  type t = { state: State.t; kind: kind }

  let get p = p.state

  let extend_state states k s =
    let add_deps () =
      State_dependency_graph.Dynamic.add_dependencies ~from:s states
    in
    let add_codeps () =
      State_dependency_graph.Dynamic.add_codependencies ~onto:s states
    in
    match k with
    | Backward -> add_deps ()
    | Forward -> add_codeps ()
    | Both -> add_deps (); add_codeps ()

  let extend states p = extend_state states p.kind p.state

  let do_nothing _ = ()
  let do_nothing_2 _ _ = ()

  open State

  let create name kind correctness states =
    let s =
      State.create
        ~descr:Structural_descr.p_abstract
        ~create:do_nothing
        ~remove:do_nothing
        ~clear:do_nothing
        ~clean:do_nothing
        ~clear_some_projects:(fun _ _ -> false)
        ~copy:do_nothing_2
        ~commit:do_nothing
        ~update:do_nothing
	~on_update:do_nothing
        ~serialize:
        (fun _ ->
          { on_disk_value = Obj.repr ();
            on_disk_computed = false;
            on_disk_saved = false;
            on_disk_digest = Type.digest Datatype.unit })
        ~unserialize:do_nothing_2
        ~unique_name:(State.unique_name_from_name name)
        ~name
        (`Proxy correctness)
    in
    State_dependency_graph.add_state_like_the_others states s;
    extend_state states kind s;
    { state = s; kind = kind }

end

(* ************************************************************************* *)
(** {3 Register} *)
(* ************************************************************************* *)

module Register
  (D: Datatype.S)
  (Local_state: State.Local with type t = D.t)
  (Info: sig include Info val unique_name: string end)
  : S with module Datatype = D
  =
struct

  let internal_name = ref ""

  module Datatype = D
  module Tbl = Hashtbl.Make(Project)
  include Info

  type t = { mutable state: Local_state.t; mutable computed: bool }

  (* Project --> plugin state. *)
  let tbl : t Tbl.t = Tbl.create 7

  let find p = Tbl.find tbl p
  let mem p = Tbl.mem tbl p

  let add p s = Tbl.replace tbl p { state = s; computed = false }

  let remove p =
    assert (mem p);
    Tbl.remove tbl p

  let commit p =
    if Project.is_current p then
      try
        let v = find p in
        v.state <- Local_state.get ()
      with Not_found ->
        fatal
          "state %S not associated with project %S; program will fail"
          name
          (Project.get_unique_name p)

  module Update_hook = Hook.Build(Datatype)
  let add_hook_on_update = Update_hook.extend

  let update_with ~force p s =
    if Project.is_current p || force then begin
      debug ~level:4 "update state %S of project %S"
        !internal_name (Project.get_unique_name p);
      Update_hook.apply s;
      Local_state.set s
    end

  let update p = update_with ~force:false p (find p).state

  let change ~force p x =
    let v = find p in
    v.state <- x.state;
    v.computed <- x.computed;
    update_with ~force p v.state

  let clean () =
      (*      Format.printf "cleaning %s@." !internal_name;*)
    Local_state.set (Local_state.create ());
    Tbl.clear tbl

  let create =
    let first = ref true in
    fun p ->
      assert (not (mem p));
      (* For efficiency purpose, do not create the initial project twice:
         directly get it *)
      let mk () =
        if !first then begin
          first := false;
          Local_state.get ()
        end else begin
          debug ~level:4 "creating state %S for project %S"
            !internal_name (Project.get_unique_name p);
          let s = Local_state.create () in
          update_with ~force:false p s;
          s
        end
      in
      let s = mk () in
      add p s

  let clear p =
    debug ~level:4 "clearing state %S for project %S"
      !internal_name (Project.get_unique_name p);
    let v = find p in
    Local_state.clear v.state;
    v.computed <- false;
    update_with ~force:false p v.state

  let clear_some_projects f p =
    debug ~level:4
      "clearing dangling project pointers in state %S for project %S"
      !internal_name (Project.get_unique_name p);
    assert (not (f p));
    Local_state.clear_some_projects f (find p).state

  let copy src dst =
    debug ~level:4 "copying state %S from %S to %S"
      !internal_name (Project.get_unique_name src) (Project.get_unique_name dst);
    let v = find src in
    change ~force:false dst { v with state = Datatype.copy v.state }

  (* ******* TOUCH THE FOLLOWING AT YOUR OWN RISK: DANGEROUS CODE ******** *)

  let must_save = ref (not (Descr.is_unmarshable Datatype.descr))

  let marshal : (Datatype.t -> Obj.t) ref = ref Obj.repr
  let unmarshal : (Obj.t -> Datatype.t) ref = ref Obj.obj

  let howto_marshal (go_in:Datatype.t -> 'a) (go_out:'a -> Datatype.t) =
    must_save := true;
    marshal := (fun x -> Obj.repr (go_in x));
    unmarshal := fun x -> go_out (Obj.obj x)

  let serialize p =
    assert Cmdline.use_obj;
    debug ~level:4 "serializing state %S for project %S: %b"
      !internal_name (Project.get_unique_name p) !must_save;
    commit p;
    let v = find p in
    let obj = if !must_save then !marshal v.state else Obj.repr () in
    { State.on_disk_value = obj;
      on_disk_computed = v.computed;
      on_disk_saved = !must_save;
      on_disk_digest = Type.digest Datatype.ty }

  let unserialize p new_s =
    assert Cmdline.use_obj;
    if Type.digest Datatype.ty = new_s.State.on_disk_digest then begin
      debug ~level:4 "unserializing state %S for project %S"
        !internal_name (Project.get_unique_name p);
(*      Format.printf "UNSERIALIZING %s / %s: %b@." !internal_name Datatype.name !must_save;*)
      let s, computed =
        if !must_save && new_s.State.on_disk_saved then
          !unmarshal new_s.State.on_disk_value, new_s.State.on_disk_computed
        else
          (* invariant: the found state is equal to the default one since it
             has been just created.
             Do not call Local_state.create to don't break sharing *)
          (find p).state, false
      in
      change ~force:true p { state = s; computed = computed };
    end else
      raise
        (Project.IOError
           ("project saved with incompatibles datatypes for state "
            ^ !internal_name))
  (* ********************************************************************* *)

  let mark_as_computed ?(project=(Project.current ())) () =
    (find project).computed <- true

  let is_computed ?(project=(Project.current ())) () = (find project).computed

  let self =
    let descr =
      if !must_save then Descr.pack Datatype.descr
      else Structural_descr.p_unit
    in
    State.create
      (* we will marshal the value [()] if the state is unmarshable *)
      ~descr ~create ~remove ~clear ~clear_some_projects ~copy
      ~commit ~update ~on_update:(fun f -> Update_hook.extend (fun _ -> f ()))
      ~serialize ~unserialize ~clean
      ~unique_name ~name:Info.name Info.kind

  let name = State.get_name self
  let kind = State.kind self

  let () =
    internal_name := State.get_unique_name self;
    (* register this state in the static graph and in projects *)
    State_dependency_graph.Static.add_state self dependencies;
    Project.iter_on_projects create

end

(* ************************************************************************* *)
(** {3 Prebuilt states} *)
(* ************************************************************************* *)

module Prebuild
  (D:Datatype.S)
  (S:State.Local with type t = D.t)
  (I:sig val name: string end) =
  Register
    (D)
    (S)
    (struct
      let unique_name = I.name
      let name = I.name
      let dependencies = []
      let kind = `Internal
      let descr _ = Descr.unmarshable
     end)

module States =
  Prebuild(State.States_datatype)(State.States)(struct let name = "States" end)

module Vertices =
  Prebuild
    (State_dependency_graph.Vertices_datatype)
    (State_dependency_graph.Vertices)
    (struct let name = "Vertices" end)

module Static =
  Prebuild
    (State_dependency_graph.Static_datatype)
    (State_dependency_graph.Static)
    (struct let name = "Static Dependency Graph" end)

(* This proxy collapses all meta states (in particular states for states
   dependency graphs).

   That is required when setting project: all these states have to be
   consistent while it potentially refers to each others.

   It would be an issue with clearing which would clear to many graphs. That is
   not the case since each registered function  `clear' does nothing actually:
   dashtables do the job :). *)
let states_graph_proxy =
  Proxy.create
    "Graph Proxy"
    Proxy.Both
    `Internal
    [ States.self; Vertices.self; Static.self ]

(* ************************************************************************* *)
(** {3 Dynamic} *)
(* ************************************************************************* *)

module Dynamic(Info: sig include Info val internal_kind: State.kind end) =
struct

  let new_kind ~name unique_name clear =
    let clear p =
      debug ~level:4 "clearing dynamic state %S for project %S"
        name (Project.get_unique_name p);
      clear p
    in
    let s = State.unusable ~name unique_name in
    State.update_unusable s Info.internal_kind clear;
    s

  module G = State_dependency_graph.Make_dynamic(Info)

  module Graph_state =
    Register
      (G.Datatype)
      (G)
      (struct
        include Info
        let unique_name = name
        let descr _ = Descr.unmarshable
       end)

  let () = Proxy.extend [ Graph_state.self ] states_graph_proxy

  let self_ref = ref Graph_state.self

  let remove_state ~reset s =
(*    Format.printf "REMOVING state %S of %S@." (State.get_unique_name s)
      Info.name; *)
    if reset then
      Project.clear ~selection:(State_selection.Dynamic.only_dependencies s) ();
    G.remove_state s

  module Register
    (S: sig val clear: Project.t -> unit end)
    (Info: sig
      val name: string
      val unique_name: string
      val dependencies: State.t list
    end ) =
  struct
    let self = new_kind ~name:Info.name Info.unique_name S.clear
    let name = State.get_name self
    let kind = State.kind self
    let () =
      let deps =
        !self_ref
        :: List.filter (fun s -> not (State.is_dummy s)) Info.dependencies
      in
      G.add_state self deps
  end

  let add_state s = G.add_state s []

end

(* ************************************************************************* *)
(** {3 References} *)
(* ************************************************************************* *)

module type Ref = sig
  include S
  type data
  val set: data -> unit
  val get: unit -> data
  val clear: unit -> unit
end

module Ref
  (Data: Datatype.S)
  (Info: sig include Info val default: unit -> Data.t end) =
struct

  type data = Data.t

  let create () = ref (Info.default ())
  let state = ref (create ())

  include Register
  (Datatype.Ref(Data))
  (struct
     type t = data ref
     let create = create
     let clear tbl = tbl := Info.default ()
     let get () = !state
     let set x = state := x
     let clear_some_projects f x =
       if Data.mem_project f !x then begin clear x; true end else false
   end)
  (struct include Info let unique_name = name end)

  let set v = !state := v
  let get () = !(!state)
  let clear () = !state := Info.default ()

end

module type Option_ref = sig
  include Ref
  val memo: ?change:(data -> data) -> (unit -> data) -> data
  val map: (data -> data) -> data option
  val may: (data -> unit) -> unit
  val get_option : unit -> data option
end

module Option_ref(Data:Datatype.S)(Info: Info) = struct

  type data = Data.t

  let create () = ref None
  let state = ref (create ())

  module D = Datatype.Ref(Datatype.Option(Data))

  include Register
  (D)
  (struct
     type t = data option ref
     let create = create
     let clear tbl = tbl := None
     let get () = !state
     let set x = state := x
     let clear_some_projects f x =
       if D.mem_project f x then begin clear x; true end else false
   end)
  (struct include Info let unique_name = name end)

  let set v = !state := Some v
  let get () = match !(!state) with None -> raise Not_found | Some v -> v
  let get_option () = !(!state)
  let clear () = !state := None

  let memo ?change f =
    try
      let old = get () in
      Extlib.may_map
        ~dft:old (fun f -> let v = f old in set v; v) change
    with Not_found ->
      let data = f () in
      set data;
      data

  let map f = Extlib.opt_map f !(!state)
  let may f = Extlib.may f !(!state)

end

module type List_ref = sig
  type data_in_list
  include Ref
  val add: data_in_list -> unit
  val iter: (data_in_list -> unit) -> unit
  val fold_left: ('a -> data_in_list -> 'a) -> 'a -> 'a
end

module List_ref(Data:Datatype.S)(Info:Info) = struct
  type data_in_list = Data.t
  include Ref(Datatype.List(Data))(struct include Info let default () = [] end)
  let add d = set (d::get())
  let iter f = List.iter f (get ())
  let fold_left f acc = List.fold_left f acc (get ())
end

module Int_ref(Info: sig include Info val default: unit -> int end) =
  Ref(Datatype.Int)(Info)

module Zero_ref(Info: Info ) =
  Int_ref(struct include Info let default () = 0 end)

module Bool_ref(Info: sig include Info val default: bool end) =
  Ref(Datatype.Bool)(struct include Info let default () = default end)

module False_ref(Info:Info) =
  Bool_ref(struct include Info let default = false end)

module True_ref(Info:Info) =
  Bool_ref(struct include Info let default = true end)

(* ************************************************************************* *)
(** {3 References on a set} *)
(* ************************************************************************* *)

module type Set_ref = sig
  include Ref
  type elt
  val add: elt -> unit
  val is_empty: unit -> bool
  val mem: elt -> bool
  val fold: (elt -> 'a -> 'a) -> 'a -> 'a
  val iter: (elt -> unit) -> unit
end

module Set_ref(S: Datatype.Set)(Info: Info) = struct
  include Ref(S)(struct include Info let default () = S.empty end)
  type elt = S.elt
  let apply f = f (get ())
  let is_empty () = apply S.is_empty
  let add x = set (apply (S.add x))
  let mem x = apply (S.mem x)
  let fold f = apply (S.fold f)
  let iter f = apply (S.iter f)
end

(* ************************************************************************* *)
(** {3 Hashtbl} *)
(* ************************************************************************* *)

module type Hashtbl = sig
  include S
  type key
  type data
  val replace: key -> data -> unit
  val add: key -> data -> unit
  val clear: unit -> unit
  val length: unit -> int
  val iter: (key -> data -> unit) -> unit
  val fold: (key -> data -> 'a -> 'a) -> 'a -> 'a
  val memo: ?change:(data -> data) -> (key -> data) -> key -> data
  val find: key -> data
  val find_all: key -> data list
  val mem: key -> bool
  val remove: key -> unit
end

module Initial_caml_hashtbl = Hashtbl

module Hashtbl
  (H: Datatype.Hashtbl)
  (Data: Datatype.S)
  (Info: Info_with_size) =
struct

  type key = H.key
  type data = Data.t

  let create () = H.create Info.size

  let state = ref (create ())

  module D = H.Make(Data)

  include Register
  (D)
  (struct
     type t = data H.t
     let create = create
     let clear = H.clear
     let get () = !state
     let set x = state := x
     let clear_some_projects f h =
(*       Format.printf "%S: %S %S@." Info.name H.Key.name Data.name;*)
       let x =
       if D.mem_project == Datatype.never_any_project then
         false
       else
         (* [TODO] BUG: if [Data.mem_project f v] returns [true] and there are
            several bindings for the key [k] of [v] (and [v] is not the last
            added binding) *)
         let found =
           H.fold
             (fun k v l ->
               if H.Key.mem_project f k || Data.mem_project f v then k :: l
               else l)
             h
             []
         in
         List.iter (H.remove h) found;
         found <> []
       in
(*       Format.printf "DONE@.";*)
       x
   end)
  (struct include Info let unique_name = name end)

  let clear () = H.clear !state
  let length () = H.length !state
  let replace key v = H.replace !state key v
  let add key v = H.add !state key v
  let find key = H.find !state key
  let find_all key = H.find_all !state key
  let mem key = H.mem !state key
  let remove key = H.remove !state key
  let iter f = H.iter f !state
  let fold f acc = H.fold f !state acc

  let memo ?change f key =
    try
      let old = find key in
      Extlib.may_map
        ~dft:old (fun f -> let v = f old in replace key v; v) change
    with Not_found ->
      let data = f key in
      replace key data;
      data

end

(* ************************************************************************* *)
(** {3 Weak Hashtbl} *)
(* ************************************************************************* *)

module type Weak_hashtbl = sig
  include S
  type data
  val merge: data -> data
  val add: data -> unit
  val clear: unit -> unit
  val count: unit -> int
  val iter: (data -> unit) -> unit
  val fold: (data -> 'a -> 'a) -> 'a -> 'a
  val find: data -> data
  val find_all: data -> data list
  val mem: data -> bool
  val remove: data -> unit
end

module Weak_hashtbl
  (W: Weak.S)
  (Data: Datatype.S with type t = W.data)
  (Info: Info_with_size) =
struct

  type data = W.data

  let create () = W.create Info.size

  let state = ref (create ())

  include Register
  (Datatype.Weak(W)(Data))
  (struct
     type t = W.t
     let create = create
     let clear = W.clear
     let get () = !state
     let set x = state := x
     let clear_some_projects f h =
       if Data.mem_project == Datatype.never_any_project then
         false
       else
         let found =
           W.fold
             (fun k l -> if Data.mem_project f k then k :: l else l) h []
         in
         List.iter (W.remove h) found;
         found <> []
   end)
  (struct include Info let unique_name = name end)

  let merge k = W.merge !state k
  let add k = W.add !state k
  let clear () = W.clear !state
  let count () = W.count !state
  let iter f = W.iter f !state
  let fold f acc = W.fold f !state acc
  let find k = W.find !state k
  let find_all k = W.find_all !state k
  let mem k = W.mem !state k
  let remove k = W.remove !state k

end

module Caml_weak_hashtbl(Data: Datatype.S) =
  Weak_hashtbl(Weak.Make(Data))(Data)

module Hashconsing_tbl
  (Data: sig
    include Datatype.S
    val equal_internal: t -> t -> bool
    val hash_internal: t -> int
    val initial_values: t list
  end)
  (Info: Info_with_size)
  =
struct

  (* OCaml module typing requires to name this module. Too bad :-( *)
  module W = struct

    include Weak.Make
      (struct
        include Data
        let equal = Data.equal_internal
        let hash = Data.hash_internal
       end)

    let add_initial_values h =
(*      Format.printf "adding initial values for %s@." Info.name;*)
      List.iter
        (fun vi ->
           let _r = merge h vi in
           (*  (* Check that we do not add the value twice, which is probably a
               bug in the calling interface *)
           assert (r == vi) *) ())
        Data.initial_values

    let create size =
      let h = create size in
      add_initial_values h;
      h

    let clear t =
      clear t;
      add_initial_values t

(*
    let merge =
      let c = ref 0 in
      fun h x ->
        incr c;
        if (!c land 4095 = 0)
        then begin
            Gc.full_major ();
          let length, n, sum, small, med, large = stats h in
          Format.printf "%s length %d, n %d, sum %d, small %d, med %d, large %d@."
            Info.name
            length n sum small med large
          end;
        merge h x
*)
  end

  include Weak_hashtbl(W)(Data)(Info)

end

(* ************************************************************************* *)
(** {3 Dashtbl} *)
(* ************************************************************************* *)

module type Dashtbl = sig
  include S
  type key
  type data
  val add: string -> key -> State.t list -> data -> unit
  val replace: reset:bool -> string -> key -> State.t list -> data -> unit
  val memo:
    reset:bool -> (data list -> data) -> string -> key -> State.t list -> data
  val clear: reset:bool -> unit -> unit
  val remove: reset:bool -> key -> State.t -> unit
  val remove_all: reset:bool -> key -> unit
  val filter:
    reset:bool -> (key -> State.t option -> data -> bool) -> key -> unit
  val mem: key -> bool
  val is_local: State.t -> bool
  val find: ?who:State.t list -> key -> State.t -> data * State.t
  val find_key: State.t -> (key * State.t) list
  val find_data: ?who:State.t list -> key -> State.t -> data
  val find_state: ?who:State.t list -> key -> State.t -> State.t
  val find_all_local:
    ?who:State.t list -> key -> State.t -> (data * State.t) list
  val find_all_local_data: ?who:State.t list -> key -> State.t -> data list
  val find_all_local_states: ?who:State.t list -> key -> State.t -> State.t list
  val find_all: ?who:State.t list -> key -> (data * State.t) list
  val find_all_data: ?who:State.t list -> key -> data list
  val find_all_states: ?who:State.t list -> key -> State.t list
  val iter: (key -> State.t option -> data * State.t -> unit) -> unit
  val iter_key: (State.t option -> data * State.t -> unit) -> key -> unit
  val fold:
    (key -> State.t option -> data * State.t -> 'a -> 'a) -> 'a -> 'a
  val fold_key:
    (State.t option -> data * State.t -> 'a -> 'a) -> key -> 'a -> 'a
  val length: unit -> int
  module Graph: Dashtbl.Graph
end


(* Create a fresh, shared reference among projects.
   The projectification is only required for correct marshalling. *)
module SharedCounter(Info : sig val name : string end) = struct

  let cpt = ref 0
  module Cpt =
    Register
      (struct
         include Datatype.Int
         let default () = 0
         let descr =
           Descr.transform
             Descr.t_int
             (fun n ->
                cpt := Extlib.max_cpt n !cpt;
                !cpt)
       end)
      (struct
         type t = int
         let create () = !cpt
         let clear _ = ()
         let get () = !cpt
         let set _ = ()
         let clear_some_projects _ _ = false
       end)
      (struct
         let name = Info.name
         let unique_name = Info.name
         let dependencies = []
         let kind = `Internal
       end)

  let next () = incr cpt ; !cpt
  let self = Cpt.self

end

module Cpt = SharedCounter(struct let name = "State_builder.Cpt" end)


module Counter(Info : sig val name : string end) = struct

  let create () = ref 0
  let cpt = ref (create ())

  module Cpt =
    Register
      (struct
         include Datatype.Ref(Datatype.Int)
         let default () = 0
         let descr =
           Descr.transform
             (Descr.t_ref Descr.t_int)
             (fun n ->
                let r = !cpt in
                r := Extlib.max_cpt !n !r;
                r)
       end)
      (struct
         type t = int ref
         let create = create
         let clear x = x := 0
         let get () = !cpt
         let set x = cpt := x
         let clear_some_projects _ _ = false
       end)
      (struct
         let name = Info.name
         let unique_name = Info.name
         let dependencies = []
         let kind = `Internal
       end)

  let next () = incr !cpt ; !(!cpt)
  let self = Cpt.self

end


module Dashtbl
  (Key: Dashtbl.Key)
  (Data: Dashtbl.Data)
  (Info: sig include Info_with_size val internal_kind: State.kind end)
  =
struct

  module Graph = struct

    module D =
      Dynamic
        (struct
          let name = Info.name ^ " Dependency Graph"
          let dependencies = []
          let kind = `Internal
          let internal_kind = Info.internal_kind
         end)

    let create_and_add_state ~clear ~name ~deps =
      let module S =
            D.Register
              (struct let clear = clear end)
              (struct
                let name = name
                let unique_name =
                  let n = Cpt.next () in
                  Info.name ^ "; binding " ^ string_of_int n
                let dependencies = deps
               end)
      in
      S.self

    let add_state = D.add_state
    let remove_state = D.remove_state
    let internal_kind = Info.internal_kind
    let self = D.self_ref

  end

  module Dash = Dashtbl.Make(Graph)(Key)(Data)(Info)

  let create () = Dash.create Info.size

  let state = ref (create ())

  include Register
  (Dash)
  (struct
    type t = Dash.t
    let create = create
    let clear tbl =
      Dash.clear ~reset:false tbl;
      Graph.D.G.real_clear ()
    let get () = !state
    let set x = state := x
    let clear_some_projects _ _ =
      (* TODO: not able to handle project in dashtbl yet *)
      assert (Data.mem_project == Datatype.never_any_project
              || Data.mem_project == Datatype.undefined);
      false
   end)
  (struct include Info let unique_name = name end)

  let () =
    Graph.self := self;
    State_dependency_graph.Static.add_dependencies
      ~from:self [ Graph.D.Graph_state.self ]

  let () =
    let marshal, unmarshal = Dash.marshaler in
    howto_marshal marshal unmarshal

  let () =
    Project.register_after_load_hook
      (fun () ->
        Dash.iter
          (fun _ s (_, s') ->
            assert (not (State.is_dummy s'));
            let from =
              match s with
              | None -> [ self ]
              | Some s -> [ s; self ]
            in
            State_dependency_graph.Dynamic.add_codependencies ~onto:s' from)
          !state)

  type key = Dash.key
  type data = Dash.data
  open Dash
  let add s k l d = add !state s k l d
  let replace ~reset s k l d = replace ~reset !state s k l d
  let memo ~reset f s k l = memo ~reset f !state s k l
  let clear ~reset () = clear ~reset !state
  let remove ~reset k s = remove ~reset !state k s
  let remove_all ~reset k = remove_all ~reset !state k
  let filter ~reset f k = filter ~reset f !state k
  let mem k = mem !state k
  let is_local s = is_local !state s
  let find ?who k s = find ?who !state k s
  let find_key s = find_key !state s
  let find_data ?who k s = find_data ?who !state k s
  let find_state ?who k s = find_state ?who !state k s
  let find_all_local ?who k s = find_all_local ?who !state k s
  let find_all_local_data ?who k s = find_all_local_data ?who !state k s
  let find_all_local_states ?who k s = find_all_local_states ?who !state k s
  let find_all ?who k = find_all ?who !state k
  let find_all_data ?who k = find_all_data ?who !state k
  let find_all_states ?who k = find_all_states ?who !state k
  let iter f = iter f !state
  let iter_key f k = iter_key f !state k
  let fold f acc = fold f !state acc
  let fold_key f k acc = fold_key f !state k acc
  let length () = length !state

end

(* ************************************************************************* *)
(** {3 Queue} *)
(* ************************************************************************* *)

module type Queue = sig
  type elt
  val add: elt -> unit
  val iter: (elt -> unit) -> unit
  val is_empty: unit -> bool
end

module Queue(Data: Datatype.S)(Info: Info) = struct

  type elt = Data.t

  let state = ref (Queue.create ())

  include Register
  (Datatype.Queue(Data))
  (struct
     type t = elt Queue.t
     let create = Queue.create
     let clear = Queue.clear
     let get () = !state
     let set x = state := x
     let clear_some_projects f q =
       if Data.mem_project == Datatype.never_any_project then
         false
       else
         (* cannot remove a single element from a queue *)
         try
           Queue.iter (fun x -> if Data.mem_project f x then raise Exit) q;
           false
         with Exit ->
           clear q;
           true
   end)
  (struct include Info let unique_name = name end)

  let add x = Queue.add x !state
  let iter f = Queue.iter f !state
  let is_empty () = Queue.is_empty !state

end

(* ************************************************************************* *)
(** {3 Apply Once} *)
(* ************************************************************************* *)

let apply_once name dep f =
  let module First =
    True_ref
      (struct
        let dependencies = dep
        let name = name
        let kind = `Internal
       end)
  in
  (fun () ->
     if First.get () then begin
       First.set false;
       try
         f ();
         assert (First.get () = false)
       with exn ->
         First.set true;
         raise exn
     end),
  First.self

(*
Local Variables:
compile-command: "make -C ../.."
End:
*)
