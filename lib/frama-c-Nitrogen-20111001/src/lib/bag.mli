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

(** List with constant-time concat operation.
    @since Carbon-20101201
*)

type 'a t

val empty : 'a t
val elt : 'a -> 'a t
val add : 'a -> 'a t -> 'a t
val list : 'a list -> 'a t
val ulist : 'a t list -> 'a t
val concat : 'a t -> 'a t -> 'a t

val map : ('a -> 'b) -> 'a t -> 'b t
val umap : ('a -> 'b t) -> 'a t -> 'b t

val iter : ('a -> unit) -> 'a t -> unit
val fold_left : ('b -> 'a -> 'b) -> 'b -> 'a t -> 'b
val fold_right : ('a -> 'b -> 'b) -> 'a t -> 'b -> 'b

val filter : ('a -> bool) -> 'a t -> 'a t
val partition : ('a -> bool) -> 'a t -> 'a t * 'a t

val length : 'a t -> int

val is_empty : 'a t -> bool
val singleton : 'a t -> 'a option
