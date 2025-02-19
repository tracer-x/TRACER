(**************************************************************************)
(*                                                                        *)
(*  This file is part of WP plug-in of Frama-C.                           *)
(*                                                                        *)
(*  Copyright (C) 2007-2011                                               *)
(*    CEA (Commissariat a l'�nergie atomique et aux �nergies              *)
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

(* -------------------------------------------------------------------------- *)
(** Proof Script Database                                                     *)
(* -------------------------------------------------------------------------- *)

(** {2 Database} *)

val add_script : string -> string list -> string -> unit
  (** [new_script goal keys proof] registers the script [proof] for goal [goal]
      and keywords [keys] *)

val find_script_for_goal : string -> string option
  (** Retrieve script file for one specific goal.  The file specified
      by [-wp-script f] is loaded if necessary. *)

val find_script_for_keywords : string list -> (int * string) list
  (** Retrieve matchable script files for w.r.t provided keywords.
      Most suitable scripts comes first. *)

val clear : unit -> unit

val loadscripts : unit -> unit
  (** Load scripts from [-wp-script f]. Automatically invoked by [find_xxx] unless
      [loadscripts] flags is unset. *)

val savescripts : unit -> unit
  (** If necessary, dump the scripts database into the file
      specified by [-wp-script f]. *)

(** {2 Low-level Parsers and Printers} *)

val parse_coqproof : string -> string option
  (** [parse_coqproof f] parses a coq-file [f] and fetch the first proof. *)

val parse_scripts : string -> unit
  (** [parse_scripts f] parses all scripts from file [f] and put them in the database. *)

val dump_scripts : string -> unit
  (** [dump_scripts f] saves all scripts from the database into file [f]. *)
