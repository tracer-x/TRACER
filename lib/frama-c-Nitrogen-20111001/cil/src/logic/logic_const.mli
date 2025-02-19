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

(** Smart contructors for logic annotations. 
    @plugin development guide *)

open Cil_types
open Cil_datatype

(* ************************************************************************** *)
(** {2 Nodes with a unique ID} *)
(* ************************************************************************** *)

(** creates a code annotation with a fresh id. *)
val new_code_annotation :
  (term, predicate named, identified_predicate, identified_term) code_annot -> 
  code_annotation

(** @return a fresh id for a code annotation. *)
val fresh_code_annotation: unit -> int

(** set a fresh id to an existing code annotation*)
val refresh_code_annotation: code_annotation -> code_annotation

(** creates a new identified predicate with a fresh id. *)
val new_predicate: predicate named -> identified_predicate

(** @return a fresh id for predicates *)
val fresh_predicate_id: unit -> int

(** extract a named predicate for an identified predicate. *)
val pred_of_id_pred: identified_predicate -> predicate named

(** creates a new identified term with a fresh id*)
val new_identified_term: term -> identified_term

(** @return a fresh id from an identified term*)
val fresh_term_id: unit -> int

(* ************************************************************************** *)
(** {2 Logic labels} *)
(* ************************************************************************** *)

val pre_label: logic_label
val post_label: logic_label
val here_label: logic_label
val old_label: logic_label

(* ************************************************************************** *)
(** {2 Predicates} *)
(* ************************************************************************** *)

(** makes a predicate with no name. Default location is unknown.*)
val unamed: ?loc:location -> 'a -> 'a named

(** \true *)
val ptrue: predicate named

(** \false *)
val pfalse: predicate named

(** \old *)
val pold: ?loc:location -> predicate named -> predicate named

(** application of predicate*)
val papp:
  ?loc:location ->
  logic_info * (logic_label * logic_label) list * term list -> 
  predicate named

(** && *)
val pand: ?loc:location -> predicate named * predicate named -> predicate named

(** || *)
val por: ?loc:location -> predicate named * predicate named -> predicate named

(** ^^ *)
val pxor: ?loc:location -> predicate named * predicate named -> predicate named
(** ! *)
val pnot: ?loc:location -> predicate named -> predicate named

(** Folds && over a list of predicates. *)
val pands: predicate named list -> predicate named

(** Folds || over a list of predicates. *)
val pors: predicate named list -> predicate named

(** local binding *)
val plet: 
  ?loc:location -> (logic_info * predicate named) named -> predicate named

(** ==> *)
val pimplies : 
  ?loc:location -> predicate named * predicate named -> predicate named

(** ? : *)
val pif: 
  ?loc:location -> term * predicate named * predicate named -> predicate named

(** <==> *)
val piff: ?loc:location -> predicate named * predicate named -> predicate named

(** binary relation*)
val prel: ?loc:location -> relation * term * term -> predicate named

(** \forall *)
val pforall: ?loc:location -> quantifiers * predicate named -> predicate named

(** \exists *)
val pexists: ?loc:location -> quantifiers * predicate named -> predicate named

(** \fresh *)
val pfresh: ?loc:location -> term -> predicate named

(** \valid *)
val pvalid: ?loc:location -> term -> predicate named

(** \initialized *)
val pinitialized: ?loc:location -> term -> predicate named

(** \at *)
val pat: ?loc:location -> predicate named * logic_label -> predicate named

(** \valid_index *)
val pvalid_index: ?loc:location -> term * term -> predicate named

(** \valid_range *)
val pvalid_range: ?loc:location -> term * term * term -> predicate named

(** subtype relation *)
val psubtype: ?loc:location -> term * term -> predicate named

(** \separated *)
val pseparated: ?loc:location -> term list -> predicate named

(* ************************************************************************** *)
(** {2 Logic types} *)
(* ************************************************************************** *)

(** [set_conversion ty1 ty2] returns a set type as soon as [ty1] and/or [ty2]
    is a set. Elements have type [ty1], or the type of the elements of [ty1] if
    it is itself a set-type ({i.e.} we do not build set of sets that way). *)
val set_conversion: logic_type -> logic_type -> logic_type

(** converts a type into the corresponding set type if needed. Does nothing
    if the argument is already a set type. *)
val make_set_type: logic_type -> logic_type

(** returns the type of elements of a set type.
    @raise Failure if the input type is not a set type. *)
val type_of_element: logic_type -> logic_type

(** [plain_or_set f t] applies [f] to [t] or to the type of elements of [t]
    if it is a set type *)
val plain_or_set: (logic_type -> 'a) -> logic_type -> 'a

(** [transform_element f t] is the same as 
    [set_conversion (plain_or_set f t) t] 
    @since Nitrogen-20111001
*)
val transform_element: (logic_type -> logic_type) -> logic_type -> logic_type

(** [true] if the argument is not a set type *)
val is_plain_type: logic_type -> bool

val is_boolean_type: logic_type -> bool
(** @return true if the argument is the boolean type *)

(* ************************************************************************** *)
(** {1 Logic Terms} *)
(* ************************************************************************** *)

(** returns a anonymous term of the given type. 
    @plugin development guide *)
val term : ?loc:Location.t -> term_node -> logic_type -> term

(** & *)
val taddrof: ?loc:Location.t -> term_lval -> logic_type -> term

(** [..] *)
val trange: ?loc:Location.t -> term option * term option -> term

(** integer constant *)
val tinteger: ?loc:Location.t -> ?ikind:ikind -> int -> term

(** integer constant *)
val tinteger_s64: ?loc:Location.t -> ?ikind:ikind -> int64 -> term

(** \at *)
val tat: ?loc:Location.t -> term * logic_label -> term

(** \old 
    @since Nitrogen-20111001
*)
val told: ?loc:Location.t -> term -> term

(** variable *)
val tvar: ?loc:Location.t -> logic_var -> term

(** \result *)
val tresult: ?loc:Location.t -> typ -> term

(** [true] if the term is \result (potentially enclosed in \at)*)
val is_result: term -> bool

(** [true] if the term is \exit_status (potentially enclosed in \at) 
    @since Nitrogen-20111001
*)
val is_exit_status: term -> bool

(*
Local Variables:
compile-command: "make -C ../../.."
End:
*)
