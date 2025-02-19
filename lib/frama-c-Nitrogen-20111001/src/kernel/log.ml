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

type kind = Result | Feedback | Debug | Warning | Error | Failure

type event = {
  evt_kind : kind ;
  evt_plugin : string ;
  evt_source : Lexing.position option ;
  evt_message : string ;
}

let kernel_channel_name = "kernel"
let kernel_label_name = "kernel"

(* -------------------------------------------------------------------------- *)
(* --- Exception Management                                               --- *)
(* -------------------------------------------------------------------------- *)

exception FeatureRequest of string * string
exception AbortError of string (* plug-in *)
exception AbortFatal of string (* plug-in *)

(* -------------------------------------------------------------------------- *)
(* --- Terminal Management                                                --- *)
(* -------------------------------------------------------------------------- *)

open Format

let null = Format.make_formatter (fun _ _ _ -> ()) (fun _ -> ())
let with_null k msg = Format.kfprintf (fun _ -> k ()) null msg
let nullprintf msg = Format.ifprintf null msg

let min_buffer = 123     (* initial size of buffer *)
let max_buffer = 4096    (* buffer resized after useage if larger than max *)

type lock =
  | Ready
  | Locked
  | DelayedLock

type terminal = {
  mutable lock : lock ;
  mutable delayed : (terminal -> unit) list ;
  mutable output : string -> int -> int -> unit ; (* Same as Format.make_formatter *)
  mutable flush : unit -> unit ;  (* Same as Format.make_formatter *)
}

let delayed_echo t =
  match t.lock with
    | Locked -> true
    | Ready | DelayedLock -> false

let is_locked t =
  match t.lock with
    | Locked | DelayedLock -> true
    | Ready -> false

let is_ready t =
  match t.lock with
    | Locked | DelayedLock -> false
    | Ready -> true

let set_terminal t output flush =
  begin
    assert (is_ready t) ;
    t.output <- output ;
    t.flush <- flush ;
  end

let stdout = {
  lock = Ready ;
  delayed = [] ;
  output = Pervasives.output Pervasives.stdout ;
  flush =  (fun () -> Pervasives.flush Pervasives.stdout);
}

let set_output = set_terminal stdout

(* -------------------------------------------------------------------------- *)
(* --- Locked Formatter                                                   --- *)
(* -------------------------------------------------------------------------- *)

type delayed =
  | Delayed of terminal
  | Formatter of (string -> int -> int -> unit) * (unit -> unit)

let lock_terminal t =
  begin
    if is_locked t then
      failwith "Console is already locked" ;
    t.lock <- Locked ;
    Format.make_formatter t.output t.flush ;
  end

let unlock_terminal t fmt =
  if is_ready t then
    failwith "Console can not be unlocked" ;
  begin
    Format.pp_print_flush fmt () ;
    t.lock <- Ready ;
    List.iter
      (fun job -> job t)
      (List.rev t.delayed) ;
    t.delayed <- [] ;
  end

let print_on_output job =
  let fmt = lock_terminal stdout in
  try job fmt ; unlock_terminal stdout fmt
  with error -> unlock_terminal stdout fmt ; raise error
    
(* -------------------------------------------------------------------------- *)
(* --- Delayed Lock until first write                                     --- *)
(* -------------------------------------------------------------------------- *)

let delayed_terminal terminal =
  if is_locked terminal then
    failwith "Console is already locked" ;
  terminal.lock <- DelayedLock ;
  let d = ref (Delayed terminal) in
  let d_output d text k n =
    match !d with
      | Delayed t ->
          t.lock <- Locked ;
          d := Formatter( t.output , t.flush ) ;
          t.output text k n
      | Formatter(out,_) ->
          out text k n
  in
  let d_flush d () =
    match !d with
      | Delayed _ -> () (* nothing to flush yet ! *)
      | Formatter(_,flush) -> flush ()
  in
  Format.make_formatter (d_output d) (d_flush d)

let print_delayed job =
  let fmt = delayed_terminal stdout in
  try job fmt ; unlock_terminal stdout fmt
  with error -> unlock_terminal stdout fmt ; raise error

(* -------------------------------------------------------------------------- *)
(* --- Buffering Output                                                   --- *)
(* -------------------------------------------------------------------------- *)

type buffer = {
  mutable formatter : Format.formatter ; (* formatter on self (recursive) *)
  mutable text : string ;
  mutable pos : int ; (* end of material *)
}

let rec size_up required size =
  let s = 2*size+1 in
  if required <= s then s else size_up required s

let is_blank = function
  | ' ' | '\t' | '\r' | '\n' -> true
  | _ -> false

let trim_begin buffer =
  let rec lookup_fwd text k n =
    if k < n && is_blank text.[k] then lookup_fwd text (succ k) n else k
  in lookup_fwd buffer.text 0 buffer.pos

let trim_end buffer =
  let rec lookup_bwd text k =
    if k >= 0 && is_blank text.[k] then lookup_bwd text (pred k) else k
  in lookup_bwd buffer.text (pred buffer.pos)

let append_text buffer text k n =
  begin
    let req = buffer.pos + n in
    let avail = String.length buffer.text in
    if req > avail then
      begin
        let s = size_up req avail in
        let t = String.create s in
        String.blit buffer.text 0 t 0 buffer.pos ;
        buffer.text <- t ;
      end ;
    String.blit text k buffer.text buffer.pos n ;
    buffer.pos <- buffer.pos + n ;
  end

let rec count_lines n t p q =
  if p < q then
    let k = try String.index_from t p '\n' with Not_found -> -1 in
    if k < 0 then n else count_lines (succ n) t (succ k) q
  else n

let append buffer text k n =
  if n > 0 then
    append_text buffer text k n

let new_buffer () =
  let buffer = {
    formatter = null ;
    text = String.create min_buffer ;
    pos = 0 ;
  } in
  let fmt = Format.make_formatter (append buffer) (fun () -> ()) in
  buffer.formatter <- fmt ; buffer

let reduce_buffer buffer =
  if String.length buffer.text > min_buffer then
    buffer.text <- String.create min_buffer

let bprintf buffer fmt = Format.fprintf buffer.formatter fmt

let contents buffer =
  let p = trim_begin buffer in
  let q = trim_end buffer in
  if p <= q then String.sub buffer.text p (q+1-p) else ""

(* -------------------------------------------------------------------------- *)
(* --- Echo Buffer                                                        --- *)
(* -------------------------------------------------------------------------- *)

type prefix =
  | Label of string
  | Prefix of string
  | Indent of int

let next_line = function
  | Label t -> Indent (String.length t)
  | Prefix _ | Indent _ as p -> p

let blank32 = String.make 32 ' '
let rec echo_indent output k =
  if k > 0 then
    if k <= 32 then output blank32 0 k
    else ( output blank32 0 32 ; echo_indent output (k-32) )

let echo_line output prefix text k n =
  match prefix with
    | Prefix t | Label t -> output t 0 (String.length t) ; output text k n
    | Indent m -> echo_indent output m ; output text k n

let rec echo_lines output text prefix p q =
  if p <= q then
    let t = try String.index_from text p '\n' with Not_found -> (-1) in
    if t < 0 || t > q then
      begin
        (* incomplete, last line *)
        echo_line output prefix text p (q+1-p) ;
        output "\n" 0 1 ;
      end
    else
      begin
        (* complete line *)
        echo_line output prefix text p (t+1-p) ;
        echo_lines output text (next_line prefix) (t+1) q ;
      end

let echo_source output = function
  | None -> ()
  | Some src ->
    let s =
      Printf.sprintf "%s:%d:" src.Lexing.pos_fname src.Lexing.pos_lnum
    in
    output s 0 (String.length s)

let do_echo terminal source prefix text p q =
  if p <= q then
    if delayed_echo terminal then
      begin
	let s = String.sub text p (q+1-p) in
	let job t =
          echo_source t.output source ;
          echo_lines t.output s prefix 0 (String.length s - 1) ;
          t.flush ()
	in
	terminal.delayed <- job :: terminal.delayed
      end
    else
      begin
        echo_source terminal.output source ;
        echo_lines terminal.output text prefix p q ;
        terminal.flush ()
      end

(* -------------------------------------------------------------------------- *)
(* --- Channels                                                           --- *)
(* -------------------------------------------------------------------------- *)

let current_loc = ref (fun () -> raise Not_found)

let set_current_source fpos = current_loc := fpos

let get_current_source () = !current_loc ()

type emitter = {
  mutable listeners : (event -> unit) list ;
  mutable echo : bool ;
}

type channel = {
  locked_buffer : buffer ; (* already allocated top-level buffer *)
  mutable stack : int ;   (* number of 'stacked' buffers *)
  plugin : string ;
  emitters : emitter array ;
  terminal : terminal ;
}

type channelstate =
  | NotCreatedYet of emitter array
  | Created of channel

let nth_kind = function
  | Result   -> 0
  | Feedback -> 1
  | Debug    -> 2
  | Error    -> 3
  | Warning  -> 4
  | Failure  -> 5

let all_kinds = [| Result ; Feedback ; Debug ; Error ; Warning ; Failure |]

let () = Array.iteri
  (fun i k -> assert (i == nth_kind k))
  all_kinds

(* -------------------------------------------------------------------------- *)
(* --- Channels                                                           --- *)
(* -------------------------------------------------------------------------- *)

let all_channels : (string,channelstate) Hashtbl.t = Hashtbl.create 31
let default_emitters = Array.map (fun _ -> { listeners=[] ; echo=true }) all_kinds

let new_emitters () =
  Array.map (fun e -> { listeners = e.listeners ; echo = e.echo }) default_emitters

let get_emitters plugin =
  try
    match Hashtbl.find all_channels plugin with
      | NotCreatedYet e -> e
      | Created c -> c.emitters
  with Not_found ->
    let e = new_emitters () in
    Hashtbl.replace all_channels plugin (NotCreatedYet e) ; e


let new_channel plugin =
  let create_with_emitters plugin emitters =
    let c = {
      plugin = plugin ;
      stack = 0 ;
      locked_buffer = new_buffer () ;
      emitters = emitters ;
      terminal = stdout ;
    } in
    Hashtbl.replace all_channels plugin (Created c) ; c
  in
  try
    match Hashtbl.find all_channels plugin with
      | Created c -> c
      | NotCreatedYet ems -> create_with_emitters plugin ems
  with Not_found ->
    let ems = new_emitters () in
    create_with_emitters plugin ems

(* -------------------------------------------------------------------------- *)
(* --- Once Table                                                         --- *)
(* -------------------------------------------------------------------------- *)

let oncetable = Hashtbl.create 371
let check_not_yet evt =
  if Hashtbl.mem oncetable evt then false
  else ( Hashtbl.add oncetable evt () ; true )

let reset_once_flag () = Hashtbl.clear oncetable

(* -------------------------------------------------------------------------- *)
(* --- Listeners                                                          --- *)
(* -------------------------------------------------------------------------- *)

let do_fire e f = f e

let iter_kind ?kind f ems =
  match kind with
    | None -> Array.iter f ems
    | Some ks -> List.iter (fun k -> f ems.(nth_kind k)) ks

let iter_plugin ?plugin ?kind f =
  match plugin with
    | None ->
        Hashtbl.iter
          (fun _ s ->
             match s with
               | Created c -> iter_kind ?kind f c.emitters
               | NotCreatedYet ems -> iter_kind ?kind f ems)
          all_channels ;
        iter_kind ?kind f default_emitters
    | Some p ->
        iter_kind ?kind f (get_emitters p)

let add_listener ?plugin ?kind demon =
  iter_plugin ?plugin ?kind (fun em -> em.listeners <- em.listeners @ [demon])

let set_echo ?plugin ?kind echo =
  iter_plugin ?plugin ?kind (fun em -> em.echo <- echo)

let notify e =
  let es = get_emitters e.evt_plugin in
  List.iter (do_fire e) es.(nth_kind e.evt_kind).listeners

(* -------------------------------------------------------------------------- *)
(* --- Generic Log Routine                                                --- *)
(* -------------------------------------------------------------------------- *)

let open_buffer c =
  if c.stack > 0 then
    ( c.stack <- succ c.stack ; new_buffer () )
  else
    ( c.stack <- 1 ;
      c.locked_buffer.pos <- 0 ;
      c.locked_buffer )

let close_buffer c =
  if c.stack > 1 then
    c.stack <- pred c.stack
  else
    reduce_buffer c.locked_buffer

let fire_listeners emitwith listeners event =
  match emitwith, listeners with
    | None , [] -> ()
    | None , fs -> List.iter (do_fire (Lazy.force event)) fs
    | Some f , _ -> do_fire (Lazy.force event) f

let logtext c ~kind ~once ~prefix ~source ~append ~emitwith ~echo text =
  let buffer = open_buffer c in
  Format.kfprintf
    (fun fmt ->
       try
         (match append with None -> () | Some k -> k fmt) ;
         Format.pp_print_newline fmt () ;
         Format.pp_print_flush fmt () ;
         let p = trim_begin buffer in
         let q = trim_end buffer in
         if p <= q then
           begin
             let event = lazy {
               evt_kind = kind ;
               evt_plugin = c.plugin ;
               evt_message = String.sub buffer.text p (q+1-p) ;
               evt_source = source ;
             } in
             if not once || check_not_yet (Lazy.force event) then
               begin
                 let e = c.emitters.(nth_kind kind) in
                 if echo && e.echo then
                   do_echo c.terminal source prefix buffer.text p q ;
                 fire_listeners emitwith e.listeners event
               end
           end ;
         close_buffer c
       with e ->
         close_buffer c ;
         raise e
    ) buffer.formatter text

let logwith c ~kind ~prefix ~source ~append ~echo f text =
  let buffer = open_buffer c in
  Format.kfprintf
    (fun fmt ->
       try
         (match append with None -> () | Some k -> k fmt) ;
         Format.pp_print_flush fmt () ;
         let p = trim_begin buffer in
         let q = trim_end buffer in
         let event = lazy {
           evt_kind = kind ;
           evt_plugin = c.plugin ;
           evt_message = if p<=q then String.sub buffer.text p (q+1-p) else "" ;
           evt_source = source ;
         } in
         let e = c.emitters.(nth_kind kind) in
         if echo && e.echo && p <= q then
           do_echo c.terminal source prefix buffer.text p q ;
         List.iter (do_fire (Lazy.force event)) e.listeners ;
         close_buffer c ;
         f event
       with e ->
         close_buffer c ;
         raise e
    ) buffer.formatter text

let finally_raise e _ = raise e
let finally_false _ = false
let finally_do f e = f (Lazy.force e)

(* -------------------------------------------------------------------------- *)
(* --- Messages Interface                                                 --- *)
(* -------------------------------------------------------------------------- *)

type 'a pretty_printer =
    ?current:bool -> ?source:Lexing.position ->
    ?emitwith:(event -> unit) -> ?echo:bool -> ?once:bool ->
    ?append:(Format.formatter -> unit) ->
    ('a,formatter,unit) format -> 'a

type ('a,'b) pretty_aborter =
    ?current:bool -> ?source:Lexing.position -> ?echo:bool ->
    ?append:(Format.formatter -> unit) ->
    ('a,formatter,unit,'b) format4 -> 'a

let get_prefix kind text = function
  | Some p -> p
  | None -> Label
      begin
        match kind with
          | Result | Debug | Feedback -> Printf.sprintf "[%s] " text
          | Warning -> Printf.sprintf "[%s] warning: " text
          | Error   -> Printf.sprintf "[%s] user error: " text
          | Failure -> Printf.sprintf "[%s] failure: " text
      end

let get_source current = function
  | None -> if current then Some (!current_loc ()) else None
  | Some _ as s -> s

let log_channel channel
    ?(kind=Result) ?prefix
    ?(current=false) ?source
    ?emitwith ?(echo=true) ?(once=false)
    ?append
    text =
  logtext channel ~kind
    ~prefix:(get_prefix kind channel.plugin prefix)
    ~source:(get_source current source)
    ~once ?emitwith ~echo ?append
    text

let with_log_channel channel f
    ?(kind=Result) ?prefix
    ?(current=false) ?source ?(echo=true)
    ?append
    text =
  logwith channel ~kind
    ~prefix:(get_prefix kind channel.plugin prefix)
    ~source:(get_source current source)
    ~echo ?append (finally_do f) text

let echo e =
  try
    match Hashtbl.find all_channels e.evt_plugin with
      | NotCreatedYet _ -> raise Not_found
      | Created c ->
          let n = String.length e.evt_message in
          let prefix = get_prefix e.evt_kind e.evt_plugin None in
          do_echo c.terminal e.evt_source prefix e.evt_message 0 (n-1)
  with Not_found ->
    let msg =
      Format.sprintf "[unknown channel %s]:%s"
        e.evt_plugin e.evt_message
    in failwith msg

(* ------------------------------------------------------------------------- *)
(* --- Plug-in Interface                                                 --- *)
(* ------------------------------------------------------------------------- *)

module type Messages =
sig

  val verbose_atleast : int -> bool
  val debug_atleast : int -> bool
  val set_debug_keys : string list -> unit
  val get_debug_keyset : unit -> string list

  val result  : ?level:int -> 'a pretty_printer
  val feedback: ?level:int -> 'a pretty_printer
  val debug   : ?level:int -> ?dkey:string -> 'a pretty_printer
  val warning : 'a pretty_printer
  val error   : 'a pretty_printer
  val abort   : ('a,'b) pretty_aborter
  val failure : 'a pretty_printer
  val fatal   : ('a,'b) pretty_aborter
  val verify  : bool -> ('a,bool) pretty_aborter

  val not_yet_implemented : ('a,formatter,unit,'b) format4 -> 'a
  val deprecated : string -> now:string -> ('a -> 'b) -> 'a -> 'b

  val with_result  : (event -> 'b) -> ('a,'b) pretty_aborter
  val with_warning : (event -> 'b) -> ('a,'b) pretty_aborter
  val with_error   : (event -> 'b) -> ('a,'b) pretty_aborter
  val with_failure : (event -> 'b) -> ('a,'b) pretty_aborter

  val log : ?kind:kind -> ?verbose:int -> ?debug:int -> 'a pretty_printer
  val with_log : (event -> 'b) -> ?kind:kind -> ('a,'b) pretty_aborter

  val register : kind -> (event -> unit) -> unit (** Very local listener. *)
  val register_tag_handlers : (string -> string) * (string -> string) -> unit

end

module Register
  (P : sig
     val channel : string
     val label : string
     val verbose_atleast : int -> bool
     val debug_atleast : int -> bool
   end) =
struct

  include P

  let channel = new_channel P.channel
  let prefix_first = Label (Printf.sprintf "[%s] " label)
  let prefix_all = Prefix (Printf.sprintf "[%s] " label)
  let prefix_error = Label (Printf.sprintf "[%s] user error: " label)
  let prefix_warning = Label (Printf.sprintf "[%s] warning: " label)
  let prefix_failure = Label (Printf.sprintf "[%s] failure: " label)
  let prefix_dkey = function
    | None -> prefix_all
    | Some key -> Prefix (Printf.sprintf "[%s:%s] " label key)

  let prefix_for = function
    | Result | Feedback | Debug ->
        if debug_atleast 1 then prefix_all else prefix_first
    | Error -> prefix_error
    | Warning -> prefix_warning
    | Failure -> prefix_failure

  let internal_register_tag_handlers _c (_ope,_close) = ()
    (* BM->LOIC: I need to keep this code around to be able to handle
       marks ands tags correctly.
       Do you think we can emulate all other features of Log but without
       using c.buffer at all?
       Everything but ensure_unique_newline seems feasible.
       See Design.make_slash to see a usefull example.

       let start_of_line= Printf.sprintf "\n[%s] " P.label in
       let length= pred (String.length start_of_line) in
       Format.pp_set_all_formatter_output_functions c.formatter
       ~out:c.term.output
       ~flush:c.term.flush
       ~newline:(fun () -> c.term.output start_of_line 0 length)
       ~spaces:(fun _ ->  ()(*TODO:correct margin*))
       ;
       Format.pp_set_tags c.formatter true;
       Format.pp_set_mark_tags c.formatter true;
       Format.pp_set_print_tags c.formatter false;
       Format.pp_set_formatter_tag_functions c.formatter
       {(Format.pp_get_formatter_tag_functions c.formatter ())
       with
       Format.mark_open_tag = ope;
       mark_close_tag = close}
    *)

  let register_tag_handlers h =
    internal_register_tag_handlers channel h

  let to_be_log verbose debug =
    match verbose , debug with
      | 0 , 0 -> verbose_atleast 1
      | v , 0 -> verbose_atleast v
      | 0 , d -> debug_atleast d
      | v , d -> verbose_atleast v || debug_atleast d

  let log ?(kind=Result)
      ?(verbose=0) ?(debug=0)
      ?(current=false) ?source
      ?emitwith ?(echo=true) ?(once=false)
      ?append
      text =
    if to_be_log verbose debug then
      logtext channel
        ~kind
        ~prefix:(prefix_for kind)
        ~source:(get_source current source)
        ~once ?emitwith ~echo ?append
        text
    else nullprintf text

  let result
      ?(level=1) ?(current=false) ?source
      ?emitwith ?(echo=true) ?(once=false) ?append text =
    if verbose_atleast level then
      logtext channel
        ~kind:Result
        ~prefix:(if debug_atleast 1 then prefix_all else prefix_first)
        ~source:(get_source current source)
        ~once ?emitwith ~echo ?append
        text
    else nullprintf text

  let feedback
      ?(level=1) ?(current=false) ?source
      ?emitwith ?(echo=true) ?(once=false) ?append text =
    if verbose_atleast level then
      logtext channel
        ~kind:Feedback
        ~prefix:(if debug_atleast 1 then prefix_all else prefix_first)
        ~source:(get_source current source)
        ~once ?emitwith ~echo ?append
        text
    else nullprintf text

  module Skey = Set.Make(String)

  let debug_keys = ref []
  let debug_keyset = ref Skey.empty
  let debug_collect = ref false
  let set_debug_keys ks = debug_keys := ks ; debug_collect := List.mem "?" ks
  let get_debug_keyset () = Skey.elements !debug_keyset
  let has_debug_key = function None -> false | Some k -> 
    if !debug_collect && not (Skey.mem k !debug_keyset) 
    then debug_keyset := Skey.add k !debug_keyset ;
    List.mem k !debug_keys

  let debug
      ?(level=1) ?dkey ?(current=false) ?source
      ?emitwith ?(echo=true) ?(once=false) ?append text =

    if debug_atleast level || has_debug_key dkey then
      logtext channel
        ~kind:Feedback
        ~prefix:(prefix_dkey dkey)
        ~source:(get_source current source)
        ~once ?emitwith ~echo ?append
        text
    else nullprintf text

  let warning
      ?(current=false) ?source
      ?emitwith ?(echo=true) ?(once=false) ?append text =
    logtext channel
      ~kind:Warning
      ~prefix:(Label (Printf.sprintf "[%s] warning: " label))
      ~source:(get_source current source)
      ~once ?emitwith ~echo ?append
      text

  let error
      ?(current=false) ?source
      ?emitwith ?(echo=true) ?(once=false) ?append text =
    logtext channel
      ~kind:Error ~prefix:prefix_error
      ~source:(get_source current source)
      ~once ?emitwith ~echo ?append
      text

  let abort
      ?(current=false) ?source
      ?(echo=true) ?append text =
    logwith channel
      ~kind:Error ~prefix:prefix_error
      ~source:(get_source current source)
      ~echo ?append
      (finally_raise (AbortError P.channel))
      text

  let failure
      ?(current=false) ?source
      ?emitwith ?(echo=true) ?(once=false) ?append text =
    logtext channel
      ~kind:Failure ~prefix:prefix_failure
      ~source:(get_source current source)
      ~once ?emitwith ~echo ?append
      text

  let fatal
      ?(current=false) ?source
      ?(echo=true) ?append text =
    logwith channel
      ~kind:Failure ~prefix:prefix_failure
      ~source:(get_source current source)
      ~echo ?append
      (finally_raise (AbortFatal P.channel))
      text

  let verify assertion
      ?(current=false) ?source
      ?(echo=true) ?append text =
    if assertion then
      Format.kfprintf (fun _ -> true) null text
    else
      logwith channel
        ~kind:Failure ~prefix:prefix_failure
        ~source:(get_source current source)
        ~echo ?append finally_false text

  let with_result f
      ?(current=false) ?source
      ?(echo=true) ?append text =
    logwith channel
      ~kind:Result
      ~prefix:(if debug_atleast 1 then prefix_all else prefix_first)
      ~source:(get_source current source)
      ~echo ?append (finally_do f) text

  let with_warning f
      ?(current=false) ?source
      ?(echo=true) ?append text =
    logwith channel
      ~kind:Warning ~prefix:prefix_warning
      ~source:(get_source current source)
      ~echo ?append (finally_do f) text

  let with_error f
      ?(current=false) ?source
      ?(echo=true) ?append text =
    logwith channel
      ~kind:Error ~prefix:prefix_error
      ~source:(get_source current source)
      ~echo ?append (finally_do f) text

  let with_failure f
      ?(current=false) ?source
      ?(echo=true) ?append text =
    logwith channel
      ~kind:Failure ~prefix:prefix_failure
      ~source:(get_source current source)
      ~echo ?append (finally_do f) text

  let with_log f
      ?(kind=Result) ?(current=false) ?source
      ?(echo=true) ?append text =
    logwith channel
      ~kind
      ~prefix:(prefix_for kind)
      ~source:(get_source current source)
      ~echo ?append (finally_do f) text

  let register kd f =
    let em = channel.emitters.(nth_kind kd) in
    em.listeners <- em.listeners @ [f]

  let not_yet_implemented text =
    let buffer = Buffer.create 80 in
    let finally fmt =
      Format.pp_print_flush fmt ();
      let msg = Buffer.contents buffer in
      raise (FeatureRequest(channel.plugin,msg)) in
    let fmt = Format.formatter_of_buffer buffer in
    Format.kfprintf finally fmt text

  let deprecated name ~now f x =
    warning ~once:true
      "call to deprecated function '%s'.\nShould use '%s' instead."
      name now ;
    f x

end

(*
Local Variables:
compile-command: "make -C ../.."
End:
*)
