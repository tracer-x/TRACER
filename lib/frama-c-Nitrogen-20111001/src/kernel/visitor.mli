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

(** Frama-C visitors dealing with projects.
    @plugin development guide *)

(** Class type for a Db-aware visitor.
    This is done by defining auxiliary methods that can be
    redefined in inherited classes, while the corresponding ones from
    {!Cil.cilVisitor} {b must} retain their values as defined here. Otherwise,
    annotations may not be visited properly. The replaced functions are
    - [vstmt] (use [vstmt_aux] instead)
    - [vglob] (use [vglob_aux] instead)

    {b A few hints on how to use correctly this visitor}

    - when initializing a new project with it
    (see {!File.init_project_from_visitor}), use a visitor with copy behavior

    - [SkipChildren] and [ChangeTo] must be used with extreme care in a visitor
    with copy behavior, or some nodes may be shared between the original and
    the copy.

    - Do not erase a statement during the visit, as there might be
    annotations attached to it. Change it to Skip instead, the
    [generic_frama_c_visitor] will know what to do.

    - Be careful if you change the [vid] or [sid]: this must be done before
    anything has been attached to the corresponding variable or
    statement in the new project, which means
       - for statements, in [vstmt], for the current statement only
       - for variables, at their declaration point. *)
class type frama_c_visitor = object

  inherit Cil.cilVisitor

  method frama_c_plain_copy: frama_c_visitor
    (** same as plain_copy_visitor but for frama-c specific methods *)

  method vstmt_aux: stmt -> stmt Cil.visitAction
    (** Replacement of vstmt.
        @plugin development guide*)

  method vglob_aux: global -> global list Cil.visitAction
    (** Replacement of vglob.
        @plugin development guide*)

  method vrooted_code_annotation:
    rooted_code_annotation ->
    rooted_code_annotation list Cil.visitAction
      (** visiting a rooted code annotation. *)

  method is_annot_before: bool
    (** Used to tell if we're visiting an annotation placed
        before current statement.
        @raise Error if not called while visiting a statement. *)

  method current_kf: kernel_function option
    (** link to the kernel function currently being visited.
        {b NB:} for copy visitors, the link is to the original kf (anyway,
        the new kf is created only after the visit is over) *)

  method set_current_kf: kernel_function -> unit
    (** Internal use only. *)

  method reset_current_kf: unit -> unit
    (** Internal use only. *)
end

class generic_frama_c_visitor:
  Project.t -> Cil.visitor_behavior ->  frama_c_visitor
  (** Generic visitor. The tables are filled on the project given in argument.
      See also {!File.init_project_from_visitor}.
      @plugin development guide *)

class frama_c_copy: Project.t -> frama_c_visitor
  (** Copying visitor *)

class frama_c_inplace: frama_c_visitor
  (** in-place visit. Always in the current project. *)

(** Visit a file. This will will re-cons all globals TWICE (so that it is
 * tail-recursive). Use {!Cil.visitCilFileSameGlobals} if your visitor will
 * not change the list of globals.
    @plugin development guide *)
val visitFramacFileCopy: frama_c_visitor -> file -> file

(** Same thing, but the result is ignored. The given visitor must thus be
    an inplace visitor. Nothing is done if the visitor is a copy visitor.
    @plugin development guide *)
val visitFramacFile: frama_c_visitor -> file -> unit

(** A visitor for the whole file that does not change the globals (but maybe
 * changes things inside the globals). Use this function instead of
 * {!Visitor.visitFramacFile} whenever appropriate because it is more
    efficient for long files.
    @plugin development guide *)
val visitFramacFileSameGlobals: frama_c_visitor -> file -> unit

(** Visit a global *)
val visitFramacGlobal: frama_c_visitor -> global -> global list

(** Visit a function definition *)
val visitFramacFunction: frama_c_visitor -> fundec -> fundec

(** Visit an expression *)
val visitFramacExpr: frama_c_visitor -> exp -> exp

(** Visit an lvalue *)
val visitFramacLval: frama_c_visitor -> lval -> lval

(** Visit an lvalue or recursive offset *)
val visitFramacOffset: frama_c_visitor -> offset -> offset

(** Visit an initializer offset *)
val visitFramacInitOffset: frama_c_visitor -> offset -> offset

(** Visit an instruction *)
val visitFramacInstr: frama_c_visitor -> instr -> instr list

(** Visit a statement *)
val visitFramacStmt: frama_c_visitor -> stmt -> stmt

(** Visit a block *)
val visitFramacBlock: frama_c_visitor -> block -> block

(** Visit a type *)
val visitFramacType: frama_c_visitor -> typ -> typ

(** Visit a variable declaration *)
val visitFramacVarDecl: frama_c_visitor -> varinfo -> varinfo

(** Visit an initializer, pass also the global to which this belongs and the
 * offset. *)
val visitFramacInit: frama_c_visitor -> varinfo -> offset -> init -> init

(** Visit a list of attributes *)
val visitFramacAttributes: frama_c_visitor -> attribute list -> attribute list

val visitFramacAnnotation:
  frama_c_visitor -> global_annotation -> global_annotation

val visitFramacCodeAnnotation:
  frama_c_visitor -> code_annotation -> code_annotation

val visitFramacAssigns:
  frama_c_visitor -> identified_term assigns -> identified_term assigns

val visitFramacFrom:
  frama_c_visitor -> identified_term from -> identified_term from

val visitFramacDeps:
  frama_c_visitor -> identified_term deps -> identified_term deps

val visitFramacFunspec: frama_c_visitor -> funspec -> funspec

val visitFramacLogicType: frama_c_visitor -> logic_type -> logic_type

val visitFramacPredicate: frama_c_visitor -> predicate -> predicate

val visitFramacPredicateNamed:
  frama_c_visitor -> predicate named -> predicate named

val visitFramacIdPredicate:
  frama_c_visitor -> identified_predicate -> identified_predicate

val visitFramacPredicates: frama_c_visitor -> identified_predicate list
  -> identified_predicate list

val visitFramacTerm: frama_c_visitor -> term -> term

val visitFramacTermLval: frama_c_visitor -> term_lval -> term_lval

val visitFramacTermLhost: frama_c_visitor -> term_lhost -> term_lhost

val visitFramacTermOffset: frama_c_visitor -> term_offset -> term_offset

val visitFramacLogicInfo: frama_c_visitor -> logic_info -> logic_info

val visitFramacBehavior: frama_c_visitor -> funbehavior -> funbehavior

val visitFramacBehaviors:
  frama_c_visitor -> funbehavior list -> funbehavior list

(*
Local Variables:
compile-command: "make -C ../.."
End:
*)
