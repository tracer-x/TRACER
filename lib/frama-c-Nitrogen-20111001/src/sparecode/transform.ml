(**************************************************************************)
(*                                                                        *)
(*  This file is part of Frama-C.                                         *)
(*                                                                        *)
(*  Copyright (C) 2007-2011                                               *)
(*    CEA   (Commissariat � l'�nergie atomique et aux �nergies            *)
(*           alternatives)                                                *)
(*    INRIA (Institut National de Recherche en Informatique et en         *)
(*           Automatique)                                                 *)
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
(*  See the GNU Lesser General Public License version v2.1                *)
(*  for more details (enclosed in the file licenses/LGPLv2.1).            *)
(*                                                                        *)
(**************************************************************************)

open Cil_types
open Cil

module BoolInfo = struct
  type t_proj = Marks.t_proj
  type t_fct = Marks.t_fct option * Kernel_function.t

  exception EraseAssigns

  let fct_info project kf =
    match Marks.get_marks project kf with
      | None -> 
          if Marks.kf_visible project kf then [None, kf] else []
      | Some fm -> [Some fm, kf]

  let key_visible txt fm key =
    let visible = match fm with None -> true
      | Some fm -> Marks.key_visible fm key 
    in
    Sparecode_params.debug ~level:3 "%s : %a -> %b" 
      txt !Db.Pdg.pretty_key key visible;
    visible

  let param_visible (fm,_) n =
    let key = PdgIndex.Key.param_key n in
      key_visible "param_visible" fm key

  let loc_var_visible (fm,_) var =
    let key = PdgIndex.Key.decl_var_key var in
      key_visible "loc_var_visible" fm key

  let term_visible (fm,kf) t =
    let module M = struct exception Invisible end in
    let visitor = object inherit Visitor.frama_c_inplace
      method vlogic_var_use v =
        match v.lv_origin with
          | None -> DoChildren
          | Some v when v.vformal ->
              let n_param = Kernel_function.get_formal_position v kf + 1 in
                if not (param_visible (fm,kf) n_param)
                then raise M.Invisible
                else DoChildren
          | Some v when not v.vglob ->
              if not (loc_var_visible (fm, kf) v)
              then raise M.Invisible
              else DoChildren
          | Some _ -> DoChildren
    end
    in
      try ignore (Visitor.visitFramacTerm visitor t); true
      with M.Invisible -> false

  let body_visible _fm = true

  let label_visible (fm,_) stmt label =
    let lab_key = PdgIndex.Key.label_key stmt label in
      key_visible "label_visible" fm lab_key

  let annotation_visible _ _stmt _annot =
    (* all the annotation should have been selected by the analysis *)
    true

  let fun_precond_visible _ _p =
    (* TODO : we say that they are removed in order to get correct results,
    * but in fact, we should select them ! *)
    false

  let fun_postcond_visible _ _p =
    (* TODO : we say that they are removed in order to get correct results,
    * but in fact, we should select them ! *)
    false

  let fun_variant_visible _ _p =
    (* TODO : we say that they are removed in order to get correct results,
    * but in fact, we should select them ! *)
    false

  let fun_assign_visible fm_kf (b,_) =
    (* [VP 2011-02-01] Removing all assigns is incorrect! this would lead
       to say assigns \nothing for all functions. *)
    term_visible fm_kf b.it_content

  let fun_deps_visible fm_kf t = term_visible fm_kf t.it_content

  let res_call_visible (fm,_) call_stmt =
    let key = PdgIndex.Key.call_outret_key call_stmt in
      key_visible "res_call_visible" fm key


  let called_info (project, _fm) call_stmt = 
    match call_stmt.skind with
      | Instr (Call (_, _fexp, _, _)) ->
          let called_functions = Db.Value.call_to_kernel_function call_stmt in
          let call_info =
            match 
              Kernel_function.Hptset.contains_single_elt called_functions 
            with
              | None -> None
              | Some kf ->
                   match Marks.get_marks project kf with
                      | None -> 
                          if Marks.kf_visible project kf 
                          then Some (kf, (None,kf))
                          else None
                      | Some fm -> Some (kf, (Some fm,kf))
          in call_info
      | _ -> Sparecode_params.fatal "this call is not a call"

  let inst_visible (fm,_) stmt =
    match stmt.Cil_types.skind with
    | Cil_types.Block _ -> (* block are always visible for syntactic reasons *)
        true
     | _ ->
         let stmt_key = PdgIndex.Key.stmt_key stmt in
           key_visible "inst_visible" fm stmt_key

  let fct_name v _fm = v.Cil_types.vname

  let result_visible kf fm_kf =
    try inst_visible fm_kf (Kernel_function.find_return kf)
    with Kernel_function.No_Statement -> true
end

module Info = Filter.F (BoolInfo)


(*
Local Variables:
compile-command: "make -C ../.."
End:
*)
