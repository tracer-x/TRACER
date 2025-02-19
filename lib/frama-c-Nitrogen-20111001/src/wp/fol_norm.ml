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

open Fol

type normalized =
  | Pred of pred
  | Conv of Fol_cc.f_let list * pred

let compile p =
  match Wp_parameters.get_norm () with
    | Wp_parameters.Let -> Pred p
    | Wp_parameters.Exp -> Pred (Fol_eval.plet_expansion p)
    | Wp_parameters.Cc -> let defs,p = Fol_cc.unlet p in Conv (defs,p)
    | Wp_parameters.Eqs -> Pred (Fol_eqs.compile p)
