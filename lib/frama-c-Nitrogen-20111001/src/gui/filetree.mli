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

(** The tree containing the list of modules and functions together with dynamic columns *)

type filetree_node =
    File of string * Cil_types.global list | Global of Cil_types.global
(** Caml type for the infos on a node of the tree
    @since Nitrogen-20111001 *)

class type t =  object
  method model : GTree.model

  method flat_mode: bool
    (** Return [true] if the filetree currently displays all globals in
        flat mode (all children of the same node), [false] otherwise
        (children of the file they are declared in). If [true], the methods
        [set_file_attribute] and [get_files_globals] must not be used

        @since Nitrogen-20111001  *)

  method set_file_attribute:
    ?strikethrough:bool -> ?text:string -> string -> unit
    (** Manually set some attributes of the given filename. *)

  method set_global_attribute:
    ?strikethrough:bool -> ?text:string -> Cil_types.varinfo -> unit
    (** Manually set some attributes of the given variable. *)

  method add_global_filter:
    text:string -> key:string -> (Cil_types.varinfo -> bool) -> (unit -> bool)
    (** [add_global_filter text key f] adds a filter for the visibility of
        the globals, according to [f]. If any of the filters registered
        through this method returns true, the global is not displayed in the
        filetree. [text] is used in the filetree menu, to label the entry
        permitting to activate or deactivate the filter. [key] is used to
        store the current state of the filter internally. The returned
        function can be used to query the current state of the filter.

        @since Nitrogen-20111001 *)

  method get_file_globals:
    string -> (string * bool) list
    (** Return the names and the attributes (currently only the strikethrough
        property) of the globals in the file passed as argument *)

  method add_select_function :
    (was_activated:bool -> activating:bool -> filetree_node -> unit) -> unit
    (** Register a callback that is called whenever an element of the file tree
        is selected or unselected.

        @modify Nitrogen-20111001 Changed argument from a list
        of globals to [filetree_node] *)

  method append_pixbuf_column:
    title:string ->
    (Cil_types.global list -> GTree.cell_properties_pixbuf list) ->
    (unit -> bool) ->
    (unit -> unit)
  (** [append_pixbuf_column title f visible] appends a new column with name
      [title] to the file tree and register [f] as a callback computing the
      list of properties for this column. Do not forget that properties need
      to be set and unset. The argument [visible] is used by the column
      to decide whether it shoudl appear. The returned function
      (of type [unit -> unit] can be used to update the visibility of the
      column. Alternatively, the method [refresh_columns] does this on
      all the columns.

      @modify Nitrogen-20111001 Add third argument, and change return type
  *)

  method select_global : Cil_types.global -> bool
  (** Selects the given global in the tree view and run the associated
      callbacks. Return a boolean indicating whether the selection
      succeeded. (Currently, only variables and functions can be selected,
      provided they are not filtered out.) Unless you known what your
      are doing, prefer calling [main_ui#select_or_display_global],
      which is more resilient to globals not displayed in the filetree.

      @modify Nitrogen-20111001 Takes a [global] as argument, instead of
      a [varinfo]. Returns a boolean to indicate success or failure. *)

  method selected_globals : Cil_types.global list
    (** @since Carbon-20101201
        @return the list of selected globals in the treeview. *)

  method view : GTree.view
    (** The tree view associated in which the file tree is packed. *)

  method reset : unit -> unit
    (** Resynchronize the tree view with the current project state.
        This is called in particular by the generic reset extension of
        {!Design} *)

  method register_reset_extension : (t -> unit) -> unit
  (** Register a function to be called whenever the reset method of the
      filetree is called. *)

  method refresh_columns : unit -> unit
    (** Refresh the state of all the non-source columns of the filetree,
        by hiding those that should be hidden, and displaying the
        others. Called by [reset]

        @since Nitrogen-20111001 *)
end

val make : GTree.view -> t
(** Create a file tree packed in the given tree_view. *)

(*
Local Variables:
compile-command: "make -C ../.."
End:
*)
