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

(** Functors making map indexed by zone.
    @plugin development guide *)

open Abstract_interp
open Abstract_value
open Locations

exception Bitwise_cannot_copy

module type Location_map_bitwise = sig

  type y

  include Datatype.S

  module LOffset : sig
    include Datatype.S
    val find_intervs : (Int.t -> Int.t -> y) ->
      Int_Intervals.t -> t -> y
    val map: ((bool * y) -> (bool * y)) -> t -> t
    val fold :
      (Int_Intervals.t -> bool * y -> 'a -> 'a) -> t -> 'a -> 'a
    val join: t -> t -> t
    val pretty_with_type:
      Cil_types.typ option-> Format.formatter -> t -> unit
    val collapse : t -> y
    val empty : t
    val is_empty: t->bool
    val add_iset : exact:bool -> Int_Intervals.t -> y -> t -> t
    val tag : t -> int
  end

  val empty : t
  val join : t -> t -> t
  val is_included : t -> t -> bool
  val add_binding : exact:bool -> t -> Zone.t -> y -> t

  val map_and_merge : (y -> y) -> t -> t -> t
    (** [map_and_merge f m1 m2] maps [f] on values in [m1] and [add_exact]
        all elements of the mapped [m1] to [m2] *)

  val filter_base : (Base.t -> bool) -> t -> t
  val find : t -> Zone.t -> y
  val find_base: t -> Zone.t -> LOffset.t

  exception Cannot_fold

  val uninitialize_locals: Cil_types.varinfo list -> t -> t
    (** binds the given variables to bottom, keeps the other unchanged. *)

  val fold : (Zone.t -> bool * y -> 'a -> 'a) -> t -> 'a -> 'a
    (** [fold f m] folds a function [f] on bindings in [m].  Each binding
        associates to a zone a boolean representing the possibility that the
        zone was not modified, and a value of type y. May raise
        [Cannot_fold]. *)
  val fold_base : (Base.t -> LOffset.t -> 'a -> 'a) -> t -> 'a -> 'a

  val map2 : ((bool * y) option -> (bool * y) option -> bool * y)
    -> t -> t -> t
    (** like for [fold], the boolean in [bool * y] indicates if it is possible
        that the zone was not modified *)

  val copy_paste :
    with_alarms:CilE.warn_mode ->
    f:(bool * y -> bool * y) ->
    location -> location -> t -> t
  (** This function takes a function [f] to be applied to each bit of
      the read slice. Otherwise, it has the same specification as
      [copy_paste] for [Location_map.copy_paste]. It may raise
      [Bitwise_cannot_copy].
      Precondition : the two locations must have the same size *)

  exception Zone_unchanged
  val find_or_unchanged : t -> Zone.t -> y

end

module type With_default = sig
  include Abstract_interp.Lattice
  val default : Base.t -> Int.t -> Int.t -> t
  val defaultall : Base.t -> t
end

module Make_bitwise(V : With_default) : Location_map_bitwise with type y = V.t

module From_Model : Location_map_bitwise with type y = Locations.Zone.t

(*
Local Variables:
compile-command: "make -C ../.."
End:
*)
