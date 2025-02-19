(* This file was originally generated by why.
   It can be modified; only the generated parts will be overwritten. *)
Require Import Reals. Require Import wp. 

(*Why logic*) Definition bool_and : bool -> bool -> bool.
Admitted.

(*Why logic*) Definition bool_or : bool -> bool -> bool.
Admitted.

(*Why logic*) Definition bool_xor : bool -> bool -> bool.
Admitted.

(*Why logic*) Definition bool_not : bool -> bool.
Admitted.

(*Why axiom*) Lemma bool_and_def :
  (forall (a:bool),
   (forall (b:bool), ((bool_and a b) = true <-> a = true /\ b = true))).
Admitted.

(*Why axiom*) Lemma bool_or_def :
  (forall (a:bool),
   (forall (b:bool), ((bool_or a b) = true <-> a = true \/ b = true))).
Admitted.

(*Why axiom*) Lemma bool_xor_def :
  (forall (a:bool), (forall (b:bool), ((bool_xor a b) = true <-> ~(a = b)))).
Admitted.

(*Why axiom*) Lemma bool_not_def :
  (forall (a:bool), ((bool_not a) = true <-> a = false)).
Admitted.

(*Why logic*) Definition ite : forall (A1:Set), bool -> A1 -> A1 -> A1.
Admitted.
Implicit Arguments ite.

(*Why axiom*) Lemma ite_true :
  forall (A1:Set),
  (forall (x:A1), (forall (y:A1), (if_then_else true x y) = x)).
Admitted.

(*Why axiom*) Lemma ite_false :
  forall (A1:Set),
  (forall (x:A1), (forall (y:A1), (if_then_else false x y) = y)).
Admitted.

(*Why logic*) Definition lt_int_bool : Z -> Z -> bool.
Admitted.

(*Why logic*) Definition le_int_bool : Z -> Z -> bool.
Admitted.

(*Why logic*) Definition gt_int_bool : Z -> Z -> bool.
Admitted.

(*Why logic*) Definition ge_int_bool : Z -> Z -> bool.
Admitted.

(*Why logic*) Definition eq_int_bool : Z -> Z -> bool.
Admitted.

(*Why logic*) Definition neq_int_bool : Z -> Z -> bool.
Admitted.

(*Why axiom*) Lemma lt_int_bool_axiom :
  (forall (x:Z), (forall (y:Z), ((lt_int_bool x y) = true <-> x < y))).
Admitted.

(*Why axiom*) Lemma le_int_bool_axiom :
  (forall (x:Z), (forall (y:Z), ((le_int_bool x y) = true <-> x <= y))).
Admitted.

(*Why axiom*) Lemma gt_int_bool_axiom :
  (forall (x:Z), (forall (y:Z), ((gt_int_bool x y) = true <-> x > y))).
Admitted.

(*Why axiom*) Lemma ge_int_bool_axiom :
  (forall (x:Z), (forall (y:Z), ((ge_int_bool x y) = true <-> x >= y))).
Admitted.

(*Why axiom*) Lemma eq_int_bool_axiom :
  (forall (x:Z), (forall (y:Z), ((eq_int_bool x y) = true <-> x = y))).
Admitted.

(*Why axiom*) Lemma neq_int_bool_axiom :
  (forall (x:Z), (forall (y:Z), ((neq_int_bool x y) = true <-> x <> y))).
Admitted.

(*Why logic*) Definition abs_int : Z -> Z.
Admitted.

(*Why axiom*) Lemma abs_int_pos :
  (forall (x:Z), (x >= 0 -> (abs_int x) = x)).
Admitted.

(*Why axiom*) Lemma abs_int_neg :
  (forall (x:Z), (x <= 0 -> (abs_int x) = (Zopp x))).
Admitted.

(*Why logic*) Definition int_max : Z -> Z -> Z.
Admitted.

(*Why logic*) Definition int_min : Z -> Z -> Z.
Admitted.

(*Why axiom*) Lemma int_max_is_ge :
  (forall (x:Z), (forall (y:Z), (int_max x y) >= x /\ (int_max x y) >= y)).
Admitted.

(*Why axiom*) Lemma int_max_is_some :
  (forall (x:Z), (forall (y:Z), (int_max x y) = x \/ (int_max x y) = y)).
Admitted.

(*Why axiom*) Lemma int_min_is_le :
  (forall (x:Z), (forall (y:Z), (int_min x y) <= x /\ (int_min x y) <= y)).
Admitted.

(*Why axiom*) Lemma int_min_is_some :
  (forall (x:Z), (forall (y:Z), (int_min x y) = x \/ (int_min x y) = y)).
Admitted.

(*Why logic*) Definition lt_real : R -> R -> Prop.
Admitted.

(*Why logic*) Definition le_real : R -> R -> Prop.
Admitted.

(*Why logic*) Definition gt_real : R -> R -> Prop.
Admitted.

(*Why logic*) Definition ge_real : R -> R -> Prop.
Admitted.

(*Why logic*) Definition eq_real : R -> R -> Prop.
Admitted.

(*Why logic*) Definition neq_real : R -> R -> Prop.
Admitted.

(*Why logic*) Definition add_real : R -> R -> R.
Admitted.

(*Why logic*) Definition sub_real : R -> R -> R.
Admitted.

(*Why logic*) Definition mul_real : R -> R -> R.
Admitted.

(*Why logic*) Definition div_real : R -> R -> R.
Admitted.

(*Why logic*) Definition neg_real : R -> R.
Admitted.

(*Why logic*) Definition real_of_int : Z -> R.
Admitted.

(*Why axiom*) Lemma real_of_int_zero : (eq (IZR 0) (0)%R).
Admitted.

(*Why axiom*) Lemma real_of_int_one : (eq (IZR 1) (1)%R).
Admitted.

(*Why axiom*) Lemma real_of_int_add :
  (forall (x:Z), (forall (y:Z), (eq (IZR (x + y)) (Rplus (IZR x) (IZR y))))).
Admitted.

(*Why axiom*) Lemma real_of_int_sub :
  (forall (x:Z), (forall (y:Z), (eq (IZR (x - y)) (Rminus (IZR x) (IZR y))))).
Admitted.

(*Why logic*) Definition truncate_real_to_int : R -> Z.
Admitted.

(*Why axiom*) Lemma truncate_down_pos :
  (forall (x:R),
   ((Rge x (0)%R) -> (Rle (IZR (truncate_real_to_int x)) x) /\
    (Rlt x (IZR ((truncate_real_to_int x) + 1))))).
Admitted.

(*Why axiom*) Lemma truncate_up_neg :
  (forall (x:R),
   ((Rle x (0)%R) -> (Rlt (IZR ((truncate_real_to_int x) - 1)) x) /\
    (Rle x (IZR (truncate_real_to_int x))))).
Admitted.

(*Why logic*) Definition floor_real_to_int : R -> Z.
Admitted.

(*Why logic*) Definition ceil_real_to_int : R -> Z.
Admitted.

(*Why logic*) Definition lt_real_bool : R -> R -> bool.
Admitted.

(*Why logic*) Definition le_real_bool : R -> R -> bool.
Admitted.

(*Why logic*) Definition gt_real_bool : R -> R -> bool.
Admitted.

(*Why logic*) Definition ge_real_bool : R -> R -> bool.
Admitted.

(*Why logic*) Definition eq_real_bool : R -> R -> bool.
Admitted.

(*Why logic*) Definition neq_real_bool : R -> R -> bool.
Admitted.

(*Why axiom*) Lemma lt_real_bool_axiom :
  (forall (x:R), (forall (y:R), ((lt_real_bool x y) = true <-> (Rlt x y)))).
Admitted.

(*Why axiom*) Lemma le_real_bool_axiom :
  (forall (x:R), (forall (y:R), ((le_real_bool x y) = true <-> (Rle x y)))).
Admitted.

(*Why axiom*) Lemma gt_real_bool_axiom :
  (forall (x:R), (forall (y:R), ((gt_real_bool x y) = true <-> (Rgt x y)))).
Admitted.

(*Why axiom*) Lemma ge_real_bool_axiom :
  (forall (x:R), (forall (y:R), ((ge_real_bool x y) = true <-> (Rge x y)))).
Admitted.

(*Why axiom*) Lemma eq_real_bool_axiom :
  (forall (x:R), (forall (y:R), ((eq_real_bool x y) = true <-> (eq x y)))).
Admitted.

(*Why axiom*) Lemma neq_real_bool_axiom :
  (forall (x:R), (forall (y:R), ((neq_real_bool x y) = true <-> ~(eq x y)))).
Admitted.

(*Why logic*) Definition real_max : R -> R -> R.
Admitted.

(*Why logic*) Definition real_min : R -> R -> R.
Admitted.

(*Why axiom*) Lemma real_max_is_ge :
  (forall (x:R),
   (forall (y:R), (Rge (real_max x y) x) /\ (Rge (real_max x y) y))).
Admitted.

(*Why axiom*) Lemma real_max_is_some :
  (forall (x:R),
   (forall (y:R), (eq (real_max x y) x) \/ (eq (real_max x y) y))).
Admitted.

(*Why axiom*) Lemma real_min_is_le :
  (forall (x:R),
   (forall (y:R), (Rle (real_min x y) x) /\ (Rle (real_min x y) y))).
Admitted.

(*Why axiom*) Lemma real_min_is_some :
  (forall (x:R),
   (forall (y:R), (eq (real_min x y) x) \/ (eq (real_min x y) y))).
Admitted.

(*Why function*) Definition sqr_real  (x:R) := (Rmult x x).

(*Why logic*) Definition sqrt_real : R -> R.
Admitted.

(*Why axiom*) Lemma sqrt_pos :
  (forall (x:R), ((Rge x (0)%R) -> (Rge (sqrt x) (0)%R))).
Admitted.

(*Why axiom*) Lemma sqrt_sqr :
  (forall (x:R), ((Rge x (0)%R) -> (eq (sqr_real (sqrt x)) x))).
Admitted.

(*Why axiom*) Lemma sqr_sqrt :
  (forall (x:R), ((Rge x (0)%R) -> (eq (sqrt (Rmult x x)) x))).
Admitted.

(*Why logic*) Definition pow_real : R -> R -> R.
Admitted.

(*Why logic*) Definition abs_real : R -> R.
Admitted.

(*Why axiom*) Lemma abs_real_pos :
  (forall (x:R), ((Rge x (0)%R) -> (eq (Rabs x) x))).
Admitted.

(*Why axiom*) Lemma abs_real_neg :
  (forall (x:R), ((Rle x (0)%R) -> (eq (Rabs x) (Ropp x)))).
Admitted.

(*Why logic*) Definition exp : R -> R.
Admitted.

(*Why logic*) Definition log : R -> R.
Admitted.

(*Why logic*) Definition log10 : R -> R.
Admitted.

(*Why axiom*) Lemma log_exp : (forall (x:R), (eq (log (exp x)) x)).
Admitted.

(*Why axiom*) Lemma exp_log :
  (forall (x:R), ((Rgt x (0)%R) -> (eq (exp (log x)) x))).
Admitted.

(*Why logic*) Definition cos : R -> R.
Admitted.

(*Why logic*) Definition sin : R -> R.
Admitted.

(*Why logic*) Definition tan : R -> R.
Admitted.

(*Why logic*) Definition pi : R.
Admitted.

(*Why logic*) Definition cosh : R -> R.
Admitted.

(*Why logic*) Definition sinh : R -> R.
Admitted.

(*Why logic*) Definition tanh : R -> R.
Admitted.

(*Why logic*) Definition acos : R -> R.
Admitted.

(*Why logic*) Definition asin : R -> R.
Admitted.

(*Why logic*) Definition atan : R -> R.
Admitted.

(*Why logic*) Definition atan2 : R -> R -> R.
Admitted.

(*Why logic*) Definition hypot : R -> R -> R.
Admitted.

(*Why axiom*) Lemma prod_pos :
  (forall (x:R),
   (forall (y:R),
    (((Rgt x (0)%R) /\ (Rgt y (0)%R) -> (Rgt (Rmult x y) (0)%R))) /\
    (((Rlt x (0)%R) /\ (Rlt y (0)%R) -> (Rgt (Rmult x y) (0)%R))))).
Admitted.

(*Why axiom*) Lemma abs_minus :
  (forall (x:R), (eq (Rabs (Ropp x)) (Rabs x))).
Admitted.

(*Why type*) Definition farray: Set ->Set.
Admitted.

(*Why logic*) Definition access : forall (A1:Set), (array A1) -> Z -> A1.
Admitted.
Implicit Arguments access.

(*Why logic*) Definition update :
  forall (A1:Set), (array A1) -> Z -> A1 -> (array A1).
Admitted.
Implicit Arguments update.

(*Why axiom*) Lemma access_update :
  forall (A1:Set),
  (forall (a:(array A1)),
   (forall (i:Z), (forall (v:A1), (access (update a i v) i) = v))).
Admitted.

(*Why axiom*) Lemma access_update_neq :
  forall (A1:Set),
  (forall (a:(array A1)),
   (forall (i:Z),
    (forall (j:Z),
     (forall (v:A1), (i <> j -> (access (update a i v) j) = (access a j)))))).
Admitted.

(*Why logic*) Definition array_length : forall (A1:Set), (array A1) -> Z.
Admitted.
Implicit Arguments array_length.

(*Why predicate*) Definition sorted_array  (t:(array Z)) (i:Z) (j:Z)
  := (forall (k1:Z),
      (forall (k2:Z),
       ((i <= k1 /\ k1 <= k2) /\ k2 <= j -> (access t k1) <= (access t k2)))).

(*Why predicate*) Definition exchange (A191:Set) (a1:(array A191)) (a2:(array A191)) (i:Z) (j:Z)
  := (array_length a1) = (array_length a2) /\
     (access a1 i) = (access a2 j) /\ (access a2 i) = (access a1 j) /\
     (forall (k:Z), (k <> i /\ k <> j -> (access a1 k) = (access a2 k))).
Implicit Arguments exchange.

(*Why logic*) Definition permut :
  forall (A1:Set), (array A1) -> (array A1) -> Z -> Z -> Prop.
Admitted.
Implicit Arguments permut.

(*Why axiom*) Lemma permut_refl :
  forall (A1:Set),
  (forall (t:(array A1)), (forall (l:Z), (forall (u:Z), (permut t t l u)))).
Admitted.

(*Why axiom*) Lemma permut_sym :
  forall (A1:Set),
  (forall (t1:(array A1)),
   (forall (t2:(array A1)),
    (forall (l:Z), (forall (u:Z), ((permut t1 t2 l u) -> (permut t2 t1 l u)))))).
Admitted.

(*Why axiom*) Lemma permut_trans :
  forall (A1:Set),
  (forall (t1:(array A1)),
   (forall (t2:(array A1)),
    (forall (t3:(array A1)),
     (forall (l:Z),
      (forall (u:Z),
       ((permut t1 t2 l u) -> ((permut t2 t3 l u) -> (permut t1 t3 l u)))))))).
Admitted.

(*Why axiom*) Lemma permut_exchange :
  forall (A1:Set),
  (forall (a1:(array A1)),
   (forall (a2:(array A1)),
    (forall (l:Z),
     (forall (u:Z),
      (forall (i:Z),
       (forall (j:Z),
        (l <= i /\ i <= u ->
         (l <= j /\ j <= u -> ((exchange a1 a2 i j) -> (permut a1 a2 l u)))))))))).
Admitted.

(*Why axiom*) Lemma exchange_upd :
  forall (A1:Set),
  (forall (a:(array A1)),
   (forall (i:Z),
    (forall (j:Z),
     (exchange a (update (update a i (access a j)) j (access a i)) i j)))).
Admitted.

(*Why axiom*) Lemma permut_weakening :
  forall (A1:Set),
  (forall (a1:(array A1)),
   (forall (a2:(array A1)),
    (forall (l1:Z),
     (forall (r1:Z),
      (forall (l2:Z),
       (forall (r2:Z),
        ((l1 <= l2 /\ l2 <= r2) /\ r2 <= r1 ->
         ((permut a1 a2 l2 r2) -> (permut a1 a2 l1 r1))))))))).
Admitted.

(*Why axiom*) Lemma permut_eq :
  forall (A1:Set),
  (forall (a1:(array A1)),
   (forall (a2:(array A1)),
    (forall (l:Z),
     (forall (u:Z),
      (l <= u ->
       ((permut a1 a2 l u) ->
        (forall (i:Z), (i < l \/ u < i -> (access a2 i) = (access a1 i))))))))).
Admitted.

(*Why predicate*) Definition permutation (A200:Set) (a1:(array A200)) (a2:(array A200))
  := (permut a1 a2 0 ((array_length a1) - 1)).
Implicit Arguments permutation.

(*Why axiom*) Lemma array_length_update :
  forall (A1:Set),
  (forall (a:(array A1)),
   (forall (i:Z),
    (forall (v:A1), (array_length (update a i v)) = (array_length a)))).
Admitted.

(*Why axiom*) Lemma permut_array_length :
  forall (A1:Set),
  (forall (a1:(array A1)),
   (forall (a2:(array A1)),
    (forall (l:Z),
     (forall (u:Z),
      ((permut a1 a2 l u) -> (array_length a1) = (array_length a2)))))).
Admitted.

(*Why logic*) Definition computer_div : Z -> Z -> Z.
Admitted.

(*Why logic*) Definition computer_mod : Z -> Z -> Z.
Admitted.

(*Why logic*) Definition math_div : Z -> Z -> Z.
Admitted.

(*Why logic*) Definition math_mod : Z -> Z -> Z.
Admitted.

(*Why axiom*) Lemma math_div_mod :
  (forall (x:Z),
   (forall (y:Z), (y <> 0 -> x = (y * (math_div x y) + (math_mod x y))))).
Admitted.

(*Why axiom*) Lemma math_mod_bound :
  (forall (x:Z),
   (forall (y:Z),
    (y <> 0 -> 0 <= (math_mod x y) /\ (math_mod x y) < (abs_int y)))).
Admitted.

(*Why axiom*) Lemma computer_div_mod :
  (forall (x:Z),
   (forall (y:Z),
    (y <> 0 -> x = (y * (computer_div x y) + (computer_mod x y))))).
Admitted.

(*Why axiom*) Lemma computer_div_bound :
  (forall (x:Z),
   (forall (y:Z),
    (x >= 0 /\ y > 0 -> 0 <= (computer_div x y) /\ (computer_div x y) <= x))).
Admitted.

(*Why axiom*) Lemma computer_mod_bound :
  (forall (x:Z),
   (forall (y:Z), (y <> 0 -> (abs_int (computer_mod x y)) < (abs_int y)))).
Admitted.

(*Why axiom*) Lemma computer_mod_sign_pos :
  (forall (x:Z),
   (forall (y:Z), (x >= 0 /\ y <> 0 -> (computer_mod x y) >= 0))).
Admitted.

(*Why axiom*) Lemma computer_mod_sign_neg :
  (forall (x:Z),
   (forall (y:Z), (x <= 0 /\ y <> 0 -> (computer_mod x y) <= 0))).
Admitted.

(*Why axiom*) Lemma computer_rounds_toward_zero :
  (forall (x:Z),
   (forall (y:Z),
    (y <> 0 -> (abs_int ((computer_div x y) * y)) <= (abs_int x)))).
Admitted.

(*Why logic*) Definition dummy : Z -> Prop.
Admitted.

(*Why logic*) Definition assigns : Z -> Prop.
Admitted.

(*Why axiom*) Lemma positive_computer_div_div :
  (forall (x:Z),
   (forall (y:Z), (x > 0 -> (y > 0 -> (computer_div x y) = (math_div x y))))).
Admitted.

(*Why type*) Definition set: Set ->Set.
Admitted.

(*Why logic*) Definition empty : forall (A1:Set), (set A1).
Admitted.
Set Contextual Implicit.
Implicit Arguments empty.
Unset Contextual Implicit.

(*Why logic*) Definition singleton : forall (A1:Set), A1 -> (set A1).
Admitted.
Implicit Arguments singleton.

(*Why logic*) Definition range : Z -> Z -> (set Z).
Admitted.

(*Why logic*) Definition union :
  forall (A1:Set), (set A1) -> (set A1) -> (set A1).
Admitted.
Implicit Arguments union.

(*Why logic*) Definition inter :
  forall (A1:Set), (set A1) -> (set A1) -> (set A1).
Admitted.
Implicit Arguments inter.

(*Why logic*) Definition plus_int : (set Z) -> (set Z) -> (set Z).
Admitted.

(*Why logic*) Definition subset :
  forall (A1:Set), (set A1) -> (set A1) -> Prop.
Admitted.
Implicit Arguments subset.

(*Why logic*) Definition range_inf : Z -> (set Z).
Admitted.

(*Why logic*) Definition range_sup : Z -> (set Z).
Admitted.

(*Why logic*) Definition integers_set : (set Z).
Admitted.

(*Why logic*) Definition equiv :
  forall (A1:Set), (set A1) -> (set A1) -> Prop.
Admitted.
Implicit Arguments equiv.

(*Why logic*) Definition member : forall (A1:Set), A1 -> (set A1) -> Prop.
Admitted.
Implicit Arguments member.

(*Why axiom*) Lemma singleton_def :
  forall (A1:Set), (forall (x:A1), (member x (singleton x))).
Admitted.

(*Why axiom*) Lemma singleton_eq :
  forall (A1:Set),
  (forall (x:A1), (forall (y:A1), ((member x (singleton y)) <-> x = y))).
Admitted.

(*Why axiom*) Lemma union_member :
  forall (A1:Set),
  (forall (x:A1),
   (forall (s1:(set A1)),
    (forall (s2:(set A1)),
     ((member x (union s1 s2)) <-> (member x s1) \/ (member x s2))))).
Admitted.

(*Why axiom*) Lemma union_of_empty :
  forall (A1:Set), (forall (x:(set A1)), (union x (@empty A1)) = x).
Admitted.

(*Why axiom*) Lemma inter_of_empty :
  forall (A1:Set), (forall (x:(set A1)), (inter x (@empty A1)) = (@empty A1)).
Admitted.

(*Why axiom*) Lemma union_comm :
  forall (A1:Set),
  (forall (x:(set A1)), (forall (y:(set A1)), (union x y) = (union y x))).
Admitted.

(*Why axiom*) Lemma inter_comm :
  forall (A1:Set),
  (forall (x:(set A1)), (forall (y:(set A1)), (inter x y) = (inter y x))).
Admitted.

(*Why axiom*) Lemma inter_member :
  forall (A1:Set),
  (forall (x:A1),
   (forall (s1:(set A1)),
    (forall (s2:(set A1)),
     ((member x (inter s1 s2)) <-> (member x s1) /\ (member x s2))))).
Admitted.

(*Why axiom*) Lemma plus_int_member_1 :
  (forall (sa:(set Z)),
   (forall (sb:(set Z)),
    (forall (a:Z),
     (forall (b:Z),
      ((member a sa) -> ((member b sb) -> (member (a + b) (plus_int sa sb)))))))).
Admitted.

(*Why axiom*) Lemma plus_int_member_2 :
  (forall (sa:(set Z)),
   (forall (sb:(set Z)),
    (forall (c:Z),
     ((member c (plus_int sa sb)) ->
      (exists a:Z,
       (exists b:Z, (member a sa) /\ (member b sb) /\ c = (a + b))))))).
Admitted.

(*Why axiom*) Lemma subset_empty :
  forall (A1:Set), (forall (sa:(set A1)), (subset (@empty A1) sa)).
Admitted.

(*Why axiom*) Lemma subset_sym :
  forall (A1:Set), (forall (sa:(set A1)), (subset sa sa)).
Admitted.

(*Why axiom*) Lemma subset_trans :
  forall (A1:Set),
  (forall (sa:(set A1)),
   (forall (sb:(set A1)),
    (forall (sc:(set A1)),
     ((subset sa sb) -> ((subset sb sc) -> (subset sa sc)))))).
Admitted.

(*Why axiom*) Lemma subset_def :
  forall (A1:Set),
  (forall (sa:(set A1)),
   (forall (sb:(set A1)),
    ((forall (a:A1), ((member a sa) -> (member a sb))) <-> (subset sa sb)))).
Admitted.

(*Why axiom*) Lemma range_def :
  (forall (i:Z),
   (forall (j:Z),
    (forall (k:Z), (i <= k /\ k <= j <-> (member k (range i j)))))).
Admitted.

(*Why axiom*) Lemma range_def1 :
  (forall (i:Z),
   (forall (j:Z),
    (forall (k:Z), (i <= k /\ k <= j -> (member k (range i j)))))).
Admitted.

(*Why axiom*) Lemma range_def2 :
  (forall (i:Z),
   (forall (j:Z),
    (forall (k:Z), ((member k (range i j)) -> i <= k /\ k <= j)))).
Admitted.

(*Why axiom*) Lemma range_inf_def :
  (forall (i:Z), (forall (k:Z), (i <= k <-> (member k (range_inf i))))).
Admitted.

(*Why axiom*) Lemma range_sup_def :
  (forall (j:Z), (forall (k:Z), (k <= j <-> (member k (range_sup j))))).
Admitted.

(*Why axiom*) Lemma integers_set_def :
  (forall (k:Z), (k >= 0 <-> (member k integers_set))).
Admitted.

(*Why axiom*) Lemma equiv_def :
  forall (A1:Set),
  (forall (s1:(set A1)),
   (forall (s2:(set A1)),
    ((forall (a:A1), ((member a s1) -> (member a s2))) /\
     (forall (b:A1), ((member b s2) -> (member b s1))) <-> (equiv s1 s2)))).
Admitted.

(*Why axiom*) Lemma equiv_refl :
  forall (A1:Set), (forall (s:(set A1)), (equiv s s)).
Admitted.

(*Why axiom*) Lemma equiv_sym :
  forall (A1:Set),
  (forall (s1:(set A1)),
   (forall (s2:(set A1)), ((equiv s1 s2) -> (equiv s2 s1)))).
Admitted.

(*Why axiom*) Lemma equiv_trans :
  forall (A1:Set),
  (forall (s1:(set A1)),
   (forall (s2:(set A1)),
    (forall (s3:(set A1)),
     ((equiv s1 s2) -> ((equiv s2 s3) -> (equiv s1 s3)))))).
Admitted.

(*Why logic*) Definition as_uint8 : Z -> Z.
Admitted.

(*Why predicate*) Definition is_uint8  (x:Z) := 0 <= x /\ x < 256.

(*Why axiom*) Lemma as_uint8_def : (forall (x:Z), (is_uint8 (as_uint8 x))).
Admitted.

(*Why axiom*) Lemma as_uint8_involve :
  (forall (x:Z), (as_uint8 (as_uint8 x)) = (as_uint8 x)).
Admitted.

(*Why axiom*) Lemma is_as_uint8 :
  (forall (x:Z), ((is_uint8 x) -> (as_uint8 x) = x)).
Admitted.

(*Why logic*) Definition as_sint8 : Z -> Z.
Admitted.

(*Why predicate*) Definition is_sint8  (x:Z) := (-128) <= x /\ x < 128.

(*Why axiom*) Lemma as_sint8_def : (forall (x:Z), (is_sint8 (as_sint8 x))).
Admitted.

(*Why axiom*) Lemma as_sint8_involve :
  (forall (x:Z), (as_sint8 (as_sint8 x)) = (as_sint8 x)).
Admitted.

(*Why axiom*) Lemma is_as_sint8 :
  (forall (x:Z), ((is_sint8 x) -> (as_sint8 x) = x)).
Admitted.

(*Why logic*) Definition as_uint16 : Z -> Z.
Admitted.

(*Why predicate*) Definition is_uint16  (x:Z) := 0 <= x /\ x < 65536.

(*Why axiom*) Lemma as_uint16_def :
  (forall (x:Z), (is_uint16 (as_uint16 x))).
Admitted.

(*Why axiom*) Lemma as_uint16_involve :
  (forall (x:Z), (as_uint16 (as_uint16 x)) = (as_uint16 x)).
Admitted.

(*Why axiom*) Lemma is_as_uint16 :
  (forall (x:Z), ((is_uint16 x) -> (as_uint16 x) = x)).
Admitted.

(*Why logic*) Definition as_sint16 : Z -> Z.
Admitted.

(*Why predicate*) Definition is_sint16  (x:Z) := (-32768) <= x /\ x < 32768.

(*Why axiom*) Lemma as_sint16_def :
  (forall (x:Z), (is_sint16 (as_sint16 x))).
Admitted.

(*Why axiom*) Lemma as_sint16_involve :
  (forall (x:Z), (as_sint16 (as_sint16 x)) = (as_sint16 x)).
Admitted.

(*Why axiom*) Lemma is_as_sint16 :
  (forall (x:Z), ((is_sint16 x) -> (as_sint16 x) = x)).
Admitted.

(*Why logic*) Definition as_uint32 : Z -> Z.
Admitted.

(*Why predicate*) Definition is_uint32  (x:Z) := 0 <= x /\ x < 4294967296.

(*Why axiom*) Lemma as_uint32_def :
  (forall (x:Z), (is_uint32 (as_uint32 x))).
Admitted.

(*Why axiom*) Lemma as_uint32_involve :
  (forall (x:Z), (as_uint32 (as_uint32 x)) = (as_uint32 x)).
Admitted.

(*Why axiom*) Lemma is_as_uint32 :
  (forall (x:Z), ((is_uint32 x) -> (as_uint32 x) = x)).
Admitted.

(*Why logic*) Definition as_sint32 : Z -> Z.
Admitted.

(*Why predicate*) Definition is_sint32  (x:Z)
  := (-2147483648) <= x /\ x < 2147483648.

(*Why axiom*) Lemma as_sint32_def :
  (forall (x:Z), (is_sint32 (as_sint32 x))).
Admitted.

(*Why axiom*) Lemma as_sint32_involve :
  (forall (x:Z), (as_sint32 (as_sint32 x)) = (as_sint32 x)).
Admitted.

(*Why axiom*) Lemma is_as_sint32 :
  (forall (x:Z), ((is_sint32 x) -> (as_sint32 x) = x)).
Admitted.

(*Why logic*) Definition as_uint64 : Z -> Z.
Admitted.

(*Why predicate*) Definition is_uint64  (x:Z)
  := 0 <= x /\ x < 18446744073709551616.

(*Why axiom*) Lemma as_uint64_def :
  (forall (x:Z), (is_uint64 (as_uint64 x))).
Admitted.

(*Why axiom*) Lemma as_uint64_involve :
  (forall (x:Z), (as_uint64 (as_uint64 x)) = (as_uint64 x)).
Admitted.

(*Why axiom*) Lemma is_as_uint64 :
  (forall (x:Z), ((is_uint64 x) -> (as_uint64 x) = x)).
Admitted.

(*Why logic*) Definition as_sint64 : Z -> Z.
Admitted.

(*Why predicate*) Definition is_sint64  (x:Z)
  := (-9223372036854775808) <= x /\ x < 9223372036854775808.

(*Why axiom*) Lemma as_sint64_def :
  (forall (x:Z), (is_sint64 (as_sint64 x))).
Admitted.

(*Why axiom*) Lemma as_sint64_involve :
  (forall (x:Z), (as_sint64 (as_sint64 x)) = (as_sint64 x)).
Admitted.

(*Why axiom*) Lemma is_as_sint64 :
  (forall (x:Z), ((is_sint64 x) -> (as_sint64 x) = x)).
Admitted.

(*Why logic*) Definition as_float16 : R -> R.
Admitted.

(*Why logic*) Definition is_float16 : R -> Prop.
Admitted.

(*Why axiom*) Lemma as_float16_def :
  (forall (x:R), (is_float16 (as_float16 x))).
Admitted.

(*Why axiom*) Lemma as_float16_involve :
  (forall (x:R), (eq (as_float16 (as_float16 x)) (as_float16 x))).
Admitted.

(*Why axiom*) Lemma is_as_float16 :
  (forall (x:R), ((is_float16 x) -> (eq (as_float16 x) x))).
Admitted.

(*Why logic*) Definition as_float32 : R -> R.
Admitted.

(*Why logic*) Definition is_float32 : R -> Prop.
Admitted.

(*Why axiom*) Lemma as_float32_def :
  (forall (x:R), (is_float32 (as_float32 x))).
Admitted.

(*Why axiom*) Lemma as_float32_involve :
  (forall (x:R), (eq (as_float32 (as_float32 x)) (as_float32 x))).
Admitted.

(*Why axiom*) Lemma is_as_float32 :
  (forall (x:R), ((is_float32 x) -> (eq (as_float32 x) x))).
Admitted.

(*Why logic*) Definition as_float64 : R -> R.
Admitted.

(*Why logic*) Definition is_float64 : R -> Prop.
Admitted.

(*Why axiom*) Lemma as_float64_def :
  (forall (x:R), (is_float64 (as_float64 x))).
Admitted.

(*Why axiom*) Lemma as_float64_involve :
  (forall (x:R), (eq (as_float64 (as_float64 x)) (as_float64 x))).
Admitted.

(*Why axiom*) Lemma is_as_float64 :
  (forall (x:R), ((is_float64 x) -> (eq (as_float64 x) x))).
Admitted.

(*Why logic*) Definition as_float128 : R -> R.
Admitted.

(*Why logic*) Definition is_float128 : R -> Prop.
Admitted.

(*Why axiom*) Lemma as_float128_def :
  (forall (x:R), (is_float128 (as_float128 x))).
Admitted.

(*Why axiom*) Lemma as_float128_involve :
  (forall (x:R), (eq (as_float128 (as_float128 x)) (as_float128 x))).
Admitted.

(*Why axiom*) Lemma is_as_float128 :
  (forall (x:R), ((is_float128 x) -> (eq (as_float128 x) x))).
Admitted.

(*Why type*) Definition data: Set.
Admitted.

(*Why logic*) Definition data_of_uint8 : Z -> data.
Admitted.

(*Why logic*) Definition uint8_of_data : data -> Z.
Admitted.

(*Why axiom*) Lemma is_uint8_of_data :
  (forall (d:data), (is_uint8 (uint8_of_data d))).
Admitted.

(*Why axiom*) Lemma uint8ofdata_dataofuint8 :
  (forall (x:Z), ((is_uint8 x) -> (uint8_of_data (data_of_uint8 x)) = x)).
Admitted.

(*Why logic*) Definition data_of_sint8 : Z -> data.
Admitted.

(*Why logic*) Definition sint8_of_data : data -> Z.
Admitted.

(*Why axiom*) Lemma is_sint8_of_data :
  (forall (d:data), (is_sint8 (sint8_of_data d))).
Admitted.

(*Why axiom*) Lemma sint8ofdata_dataofsint8 :
  (forall (x:Z), ((is_sint8 x) -> (sint8_of_data (data_of_sint8 x)) = x)).
Admitted.

(*Why logic*) Definition data_of_uint16 : Z -> data.
Admitted.

(*Why logic*) Definition uint16_of_data : data -> Z.
Admitted.

(*Why axiom*) Lemma is_uint16_of_data :
  (forall (d:data), (is_uint16 (uint16_of_data d))).
Admitted.

(*Why axiom*) Lemma uint16ofdata_dataofuint16 :
  (forall (x:Z), ((is_uint16 x) -> (uint16_of_data (data_of_uint16 x)) = x)).
Admitted.

(*Why logic*) Definition data_of_sint16 : Z -> data.
Admitted.

(*Why logic*) Definition sint16_of_data : data -> Z.
Admitted.

(*Why axiom*) Lemma is_sint16_of_data :
  (forall (d:data), (is_sint16 (sint16_of_data d))).
Admitted.

(*Why axiom*) Lemma sint16ofdata_dataofsint16 :
  (forall (x:Z), ((is_sint16 x) -> (sint16_of_data (data_of_sint16 x)) = x)).
Admitted.

(*Why logic*) Definition data_of_uint32 : Z -> data.
Admitted.

(*Why logic*) Definition uint32_of_data : data -> Z.
Admitted.

(*Why axiom*) Lemma is_uint32_of_data :
  (forall (d:data), (is_uint32 (uint32_of_data d))).
Admitted.

(*Why axiom*) Lemma uint32ofdata_dataofuint32 :
  (forall (x:Z), ((is_uint32 x) -> (uint32_of_data (data_of_uint32 x)) = x)).
Admitted.

(*Why logic*) Definition data_of_sint32 : Z -> data.
Admitted.

(*Why logic*) Definition sint32_of_data : data -> Z.
Admitted.

(*Why axiom*) Lemma is_sint32_of_data :
  (forall (d:data), (is_sint32 (sint32_of_data d))).
Admitted.

(*Why axiom*) Lemma sint32ofdata_dataofsint32 :
  (forall (x:Z), ((is_sint32 x) -> (sint32_of_data (data_of_sint32 x)) = x)).
Admitted.

(*Why logic*) Definition data_of_uint64 : Z -> data.
Admitted.

(*Why logic*) Definition uint64_of_data : data -> Z.
Admitted.

(*Why axiom*) Lemma is_uint64_of_data :
  (forall (d:data), (is_uint64 (uint64_of_data d))).
Admitted.

(*Why axiom*) Lemma uint64ofdata_dataofuint64 :
  (forall (x:Z), ((is_uint64 x) -> (uint64_of_data (data_of_uint64 x)) = x)).
Admitted.

(*Why logic*) Definition data_of_sint64 : Z -> data.
Admitted.

(*Why logic*) Definition sint64_of_data : data -> Z.
Admitted.

(*Why axiom*) Lemma is_sint64_of_data :
  (forall (d:data), (is_sint64 (sint64_of_data d))).
Admitted.

(*Why axiom*) Lemma sint64ofdata_dataofsint64 :
  (forall (x:Z), ((is_sint64 x) -> (sint64_of_data (data_of_sint64 x)) = x)).
Admitted.

(*Why logic*) Definition data_of_float16 : R -> data.
Admitted.

(*Why logic*) Definition float16_of_data : data -> R.
Admitted.

(*Why axiom*) Lemma is_float16_of_data :
  (forall (d:data), (is_float16 (float16_of_data d))).
Admitted.

(*Why axiom*) Lemma float16ofdata_dataoffloat16 :
  (forall (x:R),
   ((is_float16 x) -> (eq (float16_of_data (data_of_float16 x)) x))).
Admitted.

(*Why logic*) Definition data_of_float32 : R -> data.
Admitted.

(*Why logic*) Definition float32_of_data : data -> R.
Admitted.

(*Why axiom*) Lemma is_float32_of_data :
  (forall (d:data), (is_float32 (float32_of_data d))).
Admitted.

(*Why axiom*) Lemma float32ofdata_dataoffloat32 :
  (forall (x:R),
   ((is_float32 x) -> (eq (float32_of_data (data_of_float32 x)) x))).
Admitted.

(*Why logic*) Definition data_of_float64 : R -> data.
Admitted.

(*Why logic*) Definition float64_of_data : data -> R.
Admitted.

(*Why axiom*) Lemma is_float64_of_data :
  (forall (d:data), (is_float64 (float64_of_data d))).
Admitted.

(*Why axiom*) Lemma float64ofdata_dataoffloat64 :
  (forall (x:R),
   ((is_float64 x) -> (eq (float64_of_data (data_of_float64 x)) x))).
Admitted.

(*Why logic*) Definition data_of_float128 : R -> data.
Admitted.

(*Why logic*) Definition float128_of_data : data -> R.
Admitted.

(*Why axiom*) Lemma is_float128_of_data :
  (forall (d:data), (is_float128 (float128_of_data d))).
Admitted.

(*Why axiom*) Lemma float128ofdata_dataoffloat128 :
  (forall (x:R),
   ((is_float128 x) -> (eq (float128_of_data (data_of_float128 x)) x))).
Admitted.

(*Why logic*) Definition set_range_index :
  forall (A1:Set), (array A1) -> (set Z) -> Z -> (array A1).
Admitted.
Implicit Arguments set_range_index.

(*Why axiom*) Lemma set_range_def :
  forall (A1:Set),
  (forall (t:(array A1)),
   (forall (rg:(set Z)),
    (forall (k:Z),
     (forall (i:Z),
      (~(member i rg) -> (access (set_range_index t rg k) i) = (access t i)))))).
Admitted.

(*Why logic*) Definition bnot : Z -> Z.
Admitted.

(*Why logic*) Definition band : Z -> Z -> Z.
Admitted.

(*Why logic*) Definition bor : Z -> Z -> Z.
Admitted.

(*Why logic*) Definition bxor : Z -> Z -> Z.
Admitted.

(*Why logic*) Definition lshift : Z -> Z -> Z.
Admitted.

(*Why logic*) Definition rshift : Z -> Z -> Z.
Admitted.

(*Why logic*) Definition int_not : Z -> Z.
Admitted.

(*Why logic*) Definition int_and : Z -> Z -> Z.
Admitted.

(*Why logic*) Definition int_or : Z -> Z -> Z.
Admitted.

(*Why logic*) Definition int_xor : Z -> Z -> Z.
Admitted.

(*Why logic*) Definition int_lsh : Z -> Z -> Z.
Admitted.

(*Why logic*) Definition int_rshs : Z -> Z -> Z.
Admitted.

(*Why logic*) Definition int_rshu : Z -> Z -> Z.
Admitted.

(*Why type*) Definition pointer: Set.
Admitted.

(*Why logic*) Definition ptr : Z -> Z -> pointer.
Admitted.

(*Why logic*) Definition base : pointer -> Z.
Admitted.

(*Why logic*) Definition offset : pointer -> Z.
Admitted.

(*Why axiom*) Lemma base_def :
  (forall (b:Z), (forall (d:Z), (base (ptr b d)) = b)).
Admitted.

(*Why axiom*) Lemma offset_def :
  (forall (b:Z), (forall (d:Z), (offset (ptr b d)) = d)).
Admitted.

(*Why logic*) Definition minus_ptr : pointer -> pointer -> Z.
Admitted.

(*Why axiom*) Lemma minus_ptr_def :
  (forall (p1:pointer),
   (forall (p2:pointer),
    ((base p1) = (base p2) -> (minus_ptr p1 p2) = ((offset p1) - (offset p2))))).
Admitted.

(*Why predicate*) Definition eq_ptr  (a:pointer) (b:pointer)
  := (base a) = (base b) /\ (offset a) = (offset b).

(*Why function*) Definition eq_ptr_bool  (a:pointer) (b:pointer)
  := (bool_and
      (eq_int_bool (base a) (base b)) (eq_int_bool (offset a) (offset b))).

(*Why predicate*) Definition lt_ptr  (a:pointer) (b:pointer)
  := (base a) = (base b) /\ (offset a) < (offset b).

(*Why function*) Definition lt_ptr_bool  (a:pointer) (b:pointer)
  := (bool_and
      (eq_int_bool (base a) (base b)) (lt_int_bool (offset a) (offset b))).

(*Why predicate*) Definition le_ptr  (a:pointer) (b:pointer)
  := (base a) = (base b) /\ (offset a) <= (offset b).

(*Why function*) Definition le_ptr_bool  (a:pointer) (b:pointer)
  := (bool_and
      (eq_int_bool (base a) (base b)) (le_int_bool (offset a) (offset b))).

(*Why function*) Definition shift  (p:pointer) (i:Z)
  := (ptr (base p) ((offset p) + i)).

(*Why axiom*) Lemma shift_0 : (forall (p:pointer), (shift p 0) = p).
Admitted.

(*Why axiom*) Lemma shift_shift :
  (forall (p:pointer),
   (forall (i:Z), (forall (j:Z), (shift (shift p i) j) = (shift p (i + j))))).
Admitted.

(*Why type*) Definition trange: Set.
Admitted.

(*Why logic*) Definition range_ptr : Z -> Z -> Z -> trange.
Admitted.

(*Why logic*) Definition rbase : trange -> Z.
Admitted.

(*Why logic*) Definition roffset : trange -> Z.
Admitted.

(*Why logic*) Definition rsize : trange -> Z.
Admitted.

(*Why axiom*) Lemma rbase_def :
  (forall (b:Z),
   (forall (d:Z), (forall (sz:Z), (rbase (range_ptr b d sz)) = b))).
Admitted.

(*Why axiom*) Lemma roffset_def :
  (forall (b:Z),
   (forall (d:Z), (forall (sz:Z), (roffset (range_ptr b d sz)) = d))).
Admitted.

(*Why axiom*) Lemma rsize_def :
  (forall (b:Z),
   (forall (d:Z), (forall (sz:Z), (rsize (range_ptr b d sz)) = sz))).
Admitted.

(*Why function*) Definition range_of_ptr  (p:pointer) (sz:Z)
  := (range_ptr (base p) (offset p) sz).

(*Why axiom*) Lemma rbase_of_ptr :
  (forall (p:pointer),
   (forall (sz:Z), (rbase (range_of_ptr p sz)) = (base p))).
Admitted.

(*Why axiom*) Lemma roffset_of_ptr :
  (forall (p:pointer),
   (forall (sz:Z), (roffset (range_of_ptr p sz)) = (offset p))).
Admitted.

(*Why axiom*) Lemma rsize_of_ptr :
  (forall (p:pointer), (forall (sz:Z), (rsize (range_of_ptr p sz)) = sz)).
Admitted.

(*Why function*) Definition range_of_ptr_range  (p:pointer) (d:Z) (sz:Z)
  := (range_ptr (base p) ((offset p) + d) sz).

(*Why axiom*) Lemma rbase_of_ptr_range :
  (forall (p:pointer),
   (forall (d:Z),
    (forall (sz:Z), (rbase (range_of_ptr_range p d sz)) = (base p)))).
Admitted.

(*Why axiom*) Lemma roffset_of_ptr_range :
  (forall (p:pointer),
   (forall (d:Z),
    (forall (sz:Z), (roffset (range_of_ptr_range p d sz)) = ((offset p) + d)))).
Admitted.

(*Why axiom*) Lemma rsize_of_ptr_range :
  (forall (p:pointer),
   (forall (d:Z), (forall (sz:Z), (rsize (range_of_ptr_range p d sz)) = sz))).
Admitted.

(*Why predicate*) Definition separated  (r0:trange) (r1:trange)
  := ((rbase r0) = (rbase r1) -> ((roffset r0) + (rsize r0)) <=
      (roffset r1) \/ (roffset r0) >= ((roffset r1) + (rsize r1))).

(*Why predicate*) Definition valid  (ta:(array Z)) (r:trange)
  := ((rsize r) > 0 -> 0 <= (roffset r) /\ ((roffset r) + (rsize r)) <=
      (access ta (rbase r))).

(*Why predicate*) Definition included  (r0:trange) (r1:trange)
  := (rbase r0) = (rbase r1) /\ (roffset r0) >= (roffset r1) /\
     ((roffset r0) + (rsize r0)) <= ((roffset r1) + (rsize r1)).

(*Why axiom*) Lemma valid_included :
  (forall (r0:trange),
   (forall (r1:trange),
    (forall (ta:(array Z)),
     ((included r0 r1) -> ((valid ta r1) -> (valid ta r0)))))).
Admitted.

(*Why logic*) Definition global : (array Z) -> Prop.
Admitted.

