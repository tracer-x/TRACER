% entail.pl
% Gregory J. Duck
%
% Simple implementation of the recursive definition entailment tester.  See:
% "A Coinduction Rule for Entailment of Recursively Defined Properties"
%
% This implementation runs in SWI with CLP(R) installed.  Note that the
% default swiprolog package in ubuntu comes without CLP(R).  You either need
% to compile SWI yourself or download directly from the SWI site.
%
% The main predicate is:
%   prove(+Rules, +Depth, +EVars, +G, +H, ?Proof)
% where:
%   - Rules is a list of CLP(R) rules, e.g. [even(0), (even(X) :- even(X-2))]
%   - Depth is the maximum unfolding depth.
%   - EVars is a list of existential variables in G and H
%   - G and H form the goal, i.e. G |= H
%   - Proof is a representation of the proof of the entailment (if it holds).
%
% The Proof may be pretty-printed using:
%   print_proof(+Proof).

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% TESTS
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

rules1(Rules) :-
    Rules = [
        (odd(X) :- even(X-1)),
        even(0),
        (even(X) :- Y=X-2, even(Y))
    ].

rules2(Rules) :-
    Rules = [
        (p(X) :- p(X)),
        (q(X) :- q(X))
    ].

rules3(Rules) :-
    Rules = [
        (p(X) :- p(X+1)),
        (q(X) :- q(X+1))
    ].

rules_fib(Rules) :-
    Rules = [
        fib(0, 0),
        fib(1, 1),
        (fib(X, Y) :- X > 1, fib(X-1, Y1), fib(X-2, Y2), Y = Y1 + Y2),
        fib_i(0, 0, 0),
        fib_i(1, 1, 0),
        (fib_i(X, Y, Z) :- X > 1, fib_i(X-1, Z, Y1), Y = Z + Y1)
    ].

rules_m4(Rules) :-
    Rules = [
        m4(0),
        (m4(X) :- X>=4, m4(X-4)),
        code(1),
        (code(Y) :- Y>=3, code(Y-2))
    ].

rules_m4_2(Rules) :-
    Rules = [
        m4(0),
        (m4(X) :- m4(X-4)),
        code(1),
        (code(Y) :- code(Y-2))
    ].

test_m4(Proof) :-
    rules_m4_2(Rules),
    prove(Rules, 3, [], [m4(X), code(Y)], [X =\= Y], Proof).

test_m4_0(Proof) :-
    rules_m4(Rules),
    prove(Rules, 6, [], [m4(Y)], [Y=\=1], Proof).

test_m4_2(Proof) :-
    rules_m4_2(Rules),
    prove(Rules, 6, [], [X>=4, Y>=3, m4(X), code(Y)], [X =\= Y], Proof).

fib(0, 0).
fib(1, 1).
fib(X, Y) :- X > 1, X1 is X-1, X2 is X-2, fib(X1, Y1), fib(X2, Y2), Y is Y1 + Y2.

fib_i(0, 0, 0).
fib_i(1, 1, 0).
fib_i(X, Y, Z) :- X > 1, X1 is X-1, fib_i(X1, Z, Y1), Y is Z + Y1.

test_fib(Proof) :-
    rules_fib(Rules),
    prove(Rules, 5, [], [fib_i(X, Y, _)], [fib(X, Y)], Proof).

test_bug(Proof) :-
    rules1(Rules),
    Proof = [lu([[ru(_), ru(_)|_]], _)],
    prove(Rules, 4, [], [A =\= 0, even(A)], [even(A+A)], Proof).

test0(Proof) :-
    rules1(Rules),
    prove(Rules, 2, [], [even(A)], [A = 0], Proof).

test1(Proof) :-
    rules1(Rules),
    prove(Rules, 10, [B], [even(A)], [B=A+1, odd(B)], Proof).

test2(Proof) :-
    rules1(Rules),
    prove(Rules, 3, [], [even(A)], [odd(A+1)], Proof).

test3(Proof) :-
    rules1(Rules),
    prove(Rules, 3, [], [odd(A)], [even(A+1)], Proof).

test4(Proof) :-
    rules1(Rules),
    prove(Rules, 5, [], [even(A-1)], [even(A+1)], Proof).

test5(Proof) :-
    rules1(Rules),
    prove(Rules, 5, [], [even(A)], [even(A+6)], Proof).

test6(Proof) :-
    rules1(Rules),
%    Proof = [lu([[ru(_), co(_)], _], _)],
    prove(Rules, 3, [], [even(A), even(B)], [even(A+B)], Proof).

test7(Proof) :-
    rules1(Rules),
    prove(Rules, 5, [], [even((A-2)+(B-2))], [even(A+B-2)], Proof).

test8(Proof) :-
    rules2(Rules),
    prove(Rules, 3, [], [p(A)], [q(A)], Proof).

test9(Proof) :-
    rules3(Rules),
    prove(Rules, 3, [], [p(A)], [q(A)], Proof).

test10(Proof) :-
    rules1(Rules),
    prove(Rules, 5, [], [even(A), odd(B+1)], [even(A+B)], Proof).

test11(Proof) :-
    rules1(Rules),
    prove(Rules, 7, [], [even(A), even(B), even(C)], [even(A+B+C)], Proof).

test12(Proof) :-
    rules1(Rules),
    prove(Rules, 6, [], [even(A), even(B)], [even(A+B+2)], Proof).

test13(Proof) :-
    rules1(Rules),
    prove(Rules, 6, [], [X < 10], [even(X)], Proof).

test14(Proof) :-
    rules1(Rules),
    prove(Rules, 3, [], [even(A), odd(B)], [even(A+B)], Proof).

test15(Proof) :-
    rules1(Rules),
    prove(Rules, 5, [], [odd(A), odd(B)], [even(A+B)], Proof).

rules_xxx(Rules) :-
    Rules = [
        p(0),
        (p(X) :- p(X-1)),
        q(0),
        (q(X) :- X > 0, q(X-1))
    ].

rules_crackpot(Rules) :-
    Rules = [
        even(0),
        (even(X) :- X > 0, X < 101, even(X-2)),
        (even(X) :- X > 101, even(X-2))
    ].

test_crackpot(Proof) :-
    rules_crackpot(Rules),
    prove(Rules, 5, [], [even(X), Y = X + 4], [even(Y)], Proof).

test_crackpot_ok(Proof) :-
    rules1(Rules),
    prove(Rules, 5, [], [even(X), Y = X + 4], [even(Y)], Proof).

rules_leq(Rules) :-
    Rules = [
        (leq(L, R) :- L = R),
        (leq(L, R) :- leq(L+1, R))
    ].

leq(L, R) :- L = R.
leq(L, R) :- L1 is L+1, leq(L1, R).

test_leq(Proof) :-
    rules_leq(Rules),
    prove(Rules, 5, [], [leq(X, Y), Y1 = Y+1], [leq(X, Y1)], Proof).

regtest :-
    \+ test0(_),
    once(test1(_)),
    once(test2(_)),
    once(test3(_)),
    once(test4(_)),
    once(test5(_)),
    once(test6(_)),
    once(test7(_)),
    once(test8(_)),
    once(test9(_)),
    once(test10(_)),
    once(test11(_)),
    once(test12(_)),
    \+ test13(_).

test_paper(Proof) :-
    rules1(Rules),
    prove(Rules, 3, [Y], [even(X)], [X=2*Y], Proof).

:- [builtin].

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% IMPLEMENTATION:
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

prove(Rules, Depth, EVars, Gs, Hs, Trace) :-
    Depth > 0,
    compile_rules(Rules, Defns),
    ord_empty(Vars0),
    vars(Gs, Vars0, Vars1),
    vars(Hs, Vars1, Vars2),
    ord_subtract(Vars2, EVars, Vars),
    init_constraints(Defns, Gs, [], GBuiltins, [], GUsers),
    init_constraints(Defns, Hs, [], HBuiltins, [], HUsers),
    prove_search(Defns, 0, Depth, Vars, GBuiltins, GUsers, HBuiltins, HUsers,
        [], Trace).

vars(Term, VarsIn, VarsOut) :-
    ( var(Term) ->
        ord_add_element(VarsIn, Term, VarsOut)
    ;   functor(Term, _, A),
        vars_args(A, Term, VarsIn, VarsOut)
    ).

vars_args(I, Term, VarsIn, VarsOut) :-
    ( I == 0 ->
        VarsOut = VarsIn
    ;   arg(I, Term, Arg),
        vars(Arg, VarsIn, VarsIn1),
        NI is I - 1,
        vars_args(NI, Term, VarsIn1, VarsOut)
    ).

prove_search(Defns, Depth, MaxDepth, Vars, GBuiltins, GUsers, HBuiltins,
        HUsers, Table, Trace) :-
    Depth =< MaxDepth,
    nl,
    printf("********************************************************\n", []),
    printf("* DEPTH = %p\n", [Depth]),
    printf("********************************************************\n", []),
    nl,
    prove(Defns, Depth, Vars, GBuiltins, GUsers, HBuiltins, HUsers, Table,
        Trace).
prove_search(Defns, Depth, MaxDepth, Vars, GBuiltins, GUsers, HBuiltins,
        HUsers, Table, Trace) :-
    Depth < MaxDepth,
    NDepth is Depth + 1,
    prove_search(Defns, NDepth, MaxDepth, Vars, GBuiltins, GUsers, HBuiltins,
        HUsers, Table, Trace).

prove(_, _, _, GBuiltins, GUsers, HBuiltins, HUsers, _, _) :-
    printf("GOAL: \33[33m", []),
    print_state(GBuiltins, GUsers, HBuiltins, HUsers),
    printf("\33[0m\n", []),
    fail.
prove(_, Depth, Vars, GBuiltins, GUsers, HBuiltins, HUsers, _, Trace) :-
    Depth >= 0,
    Trace = [cp(Entry)],
    printf("STEP: \33[34mSOLVE\33[0m\n", []),
    prove_backtrack,
    ( expr_satisfiable(GBuiltins) ->
        match_constraints(HUsers, GUsers, HBuiltins, HBuiltins1),
        expr_entails(Vars, GBuiltins, HBuiltins1)
    ;   true
    ),
    Entry = entry(Vars, GBuiltins, GUsers, HBuiltins, HUsers),
    printf("STEP: \33[34mQED\33[0m\n", []).
prove(_, Depth, Vars, GBuiltins, GUsers, HBuiltins, HUsers, Table, Trace) :-
    Depth >= 0,
    Trace = [co(Entry)],
    printf("STEP: \33[34mCOINDUCTION\33[0m\n", []),
    prove_backtrack,
    coinduction_match(Vars, GBuiltins, GUsers, HBuiltins, HUsers, Table),
    Entry = entry(Vars, GBuiltins, GUsers, HBuiltins, HUsers),
    printf("STEP: \33[34mQED\33[0m\n", []).
prove(Defns, Depth, Vars, GBuiltins, GUsers, HBuiltins, HUsers, Table,
        Trace) :-
    Depth > 0,
    NDepth is Depth - 1,
    (   
        % RIGHT UNFOLD:
        Trace = [ru(Entry)|NTrace],
        printf("STEP: \33[34mRIGHT UNFOLD\33[0m\n", []),
        prove_backtrack,
        select(HUser, HUsers, HUsers1),
        unfold(Defns, HUser, HBuiltins, NewHBuiltins, HUsers1, NewHUsers),
        prove(Defns, NDepth, Vars, GBuiltins, GUsers, NewHBuiltins,
            NewHUsers, Table, NTrace),
        Entry = entry(Vars, GBuiltins, GUsers, HBuiltins, HUsers)
    ;   
        % LEFT UNFOLD:
        Trace = [lu(Traces, Entry)],
        coinduction_memoize(Vars, GBuiltins, GUsers, HBuiltins, HUsers, Table,
            NTable),
        printf("STEP: \33[34mLEFT UNFOLD\33[0m\n", []),
        prove_backtrack,
        select(GUser, GUsers, GUsers1),
        % member(GUser, GUsers), GUsers1 = GUsers,
        unfold_all(Defns, GUser, GBuiltins, GUsers1, Unfolds),
        prove_all(Defns, NDepth, Vars, Unfolds, HBuiltins, HUsers, NTable,
            Traces),
        Entry = entry(Vars, GBuiltins, GUsers, HBuiltins, HUsers)
    ).

prove_backtrack :-
    true.
prove_backtrack :-
    printf("STEP: \33[34mBACKTRACK\33[0m\n", []),
    fail.

prove_all(_, _, _, [], _, _, _, []).
prove_all(Defns, Depth, Vars, [unfold(GBuiltins, GUsers)|Goals], HBuiltins,
        HUsers, Table, Traces) :-
    Traces = [Trace|NTraces],
    prove(Defns, Depth, Vars, GBuiltins, GUsers, HBuiltins, HUsers, Table,
        Trace),
    prove_all(Defns, Depth, Vars, Goals, HBuiltins, HUsers, Table, NTraces).

    % Coinduction related:
    %
coinduction_memoize(Vars, GBuiltins, GUsers, HBuiltins, HUsers, TableIn,
        TableOut) :-
    ( GUsers = [] ->
        TableOut = TableIn
    ;
        Entry0 = entry(Vars, GBuiltins, GUsers, HBuiltins, HUsers),
        copy_term(Entry0, Entry),

        printf("MEMO: \33[35m", []),
        Entry = entry(_, NewGBuiltins, NewGUsers, NewHBuiltins, NewHUsers),
        print_state(NewGBuiltins, NewGUsers, NewHBuiltins, NewHUsers),
        printf("\33[0m\n", []),

        TableOut = [Entry|TableIn]
    ).

coinduction_match(Vars, GBuiltins, GUsers, HBuiltins, HUsers, Table) :-
    member(Entry, Table),
    Entry = entry(_, OldGBuiltins, OldGUsers, OldHBuiltins, OldHUsers),
    
    length(GUsers, GLen),
    length(OldGUsers, OldGLen),
    GLen >= OldGLen,
    
    match_constraints(OldGUsers, GUsers, [], GMatch),
    append(GMatch, OldGBuiltins, OldGBuiltins1),
    expr_entails(Vars, GBuiltins, OldGBuiltins1),
    match_constraints(HUsers, OldHUsers, HBuiltins, HBuiltins1),
    append(GBuiltins, OldGBuiltins1, GBuiltins1),
    append(OldHBuiltins, GBuiltins1, GBuiltins2),
    expr_satisfiable(GBuiltins2),
    expr_entails(Vars, GBuiltins2, HBuiltins1).
    
make_user_signature(Users, Sig) :-
    sort(Users, Users1),
    make_user_signature_2(Users1, Sig).

make_user_signature_2([], nil).
make_user_signature_2([User|Users], Sig) :-
    functor(User, F, A),
    functor(Sig, F, 2),
    arg(1, Sig, A),
    arg(2, Sig, NewSig),
    make_user_signature_2(Users, NewSig).

    % Constraint matching (version 2).
    %
match_constraints([], _, Match, Match).
match_constraints([User1|Users1], Users2, MatchIn, MatchOut) :-
    functor(User1, F, A),
    select(User2, Users2, NUsers2),
    functor(User2, F, A),
    match_constraint_args(A, User1, User2, MatchIn, MatchIn1),
    match_constraints(Users1, NUsers2, MatchIn1, MatchOut).

match_constraint_args(I, User1, User2, MatchIn, MatchOut) :-
    ( I == 0 ->
        MatchOut = MatchIn
    ;   arg(I, User1, Arg1),
        arg(I, User2, Arg2),
        MatchIn1 = [(Arg1 = Arg2)|MatchIn],
        NI is I - 1,
        match_constraint_args(NI, User1, User2, MatchIn1, MatchOut)
    ).

    % Initialise constraints.
    %
init_constraints(_, [], Builtins, Builtins, Users, Users).
init_constraints(Defns, [Constr|Constrs], BuiltinsIn, BuiltinsOut,
        UsersIn, UsersOut) :-
    functor(Constr, F, A),
    FA = F/A,
    ( get_assoc(FA, Defns, _) ->
        UsersIn1 = [Constr|UsersIn],
        init_constraints(Defns, Constrs, BuiltinsIn, BuiltinsOut,
            UsersIn1, UsersOut)
    ;   
        BuiltinsIn1 = [Constr|BuiltinsIn],
        init_constraints(Defns, Constrs, BuiltinsIn1, BuiltinsOut,
            UsersIn, UsersOut)
    ).

    % Unfold a constraint by 1 step.
    %
unfold(Defns, Constr, BuiltinsIn, BuiltinsOut, UsersIn, UsersOut) :-
    functor(Constr, F, A),
    FA = F/A,
    get_assoc(FA, Defns, RuleDefns),
    member(RuleDefn, RuleDefns),
    unfold_rule(RuleDefn, Constr, BuiltinsIn, BuiltinsOut, UsersIn, UsersOut).

unfold_rule(RuleDefn0, Constr, BuiltinsIn, BuiltinsOut, UsersIn, UsersOut) :-
    copy_term(RuleDefn0, RuleDefn),
    RuleDefn = rule(Head, Users, Builtins),
    Head = Constr,
    append(Builtins, BuiltinsIn, BuiltinsOut),
    expr_satisfiable(BuiltinsOut),
    append(Users, UsersIn, UsersOut).

unfold_all(Defns, Constr, Builtins, Users, Unfolds) :-
    functor(Constr, F, A),
    FA = F/A,
    get_assoc(FA, Defns, RuleDefns),
    unfold_all_rules(RuleDefns, Constr, Builtins, Users, Unfolds).

unfold_all_rules([], _, _, _, []).
unfold_all_rules([RuleDefn|RuleDefns], Constr, Builtins, Users, Unfolds) :-
    ( unfold_rule(RuleDefn, Constr, Builtins, NewBuiltins, Users, NewUsers) ->
        Unfolds = [unfold(NewBuiltins, NewUsers)|NUnfolds],
        unfold_all_rules(RuleDefns, Constr, Builtins, Users, NUnfolds)
    ;   unfold_all_rules(RuleDefns, Constr, Builtins, Users, Unfolds)
    ).

internalize_builtins([], _, Builtins, Builtins, Subs, Subs).
internalize_builtins([Builtin0|Builtins], Match, BuiltinsIn, BuiltinsOut,
        SubsIn, SubsOut) :-
    ( Builtin0 = assign(Var0, Expr0) ->
        apply_match(Match, Var0, Var1),
        apply_match(Match, Expr0, Expr1),
        expr(Expr1, Expr, SubsIn, SubsIn1),
        put_assoc(Var1, SubsIn1, Expr, SubsIn2),
        BuiltinsIn1 = BuiltinsIn
    ;   apply_match(Match, Builtin0, Builtin),
        expr(Builtin, NewBuiltin, SubsIn, SubsIn2),
        expr_and(NewBuiltin, BuiltinsIn, BuiltinsIn1)
    ),
    internalize_builtins(Builtins, Match, BuiltinsIn1, BuiltinsOut,
        SubsIn2, SubsOut).

internalize_users([], Subs, Subs, Match, Match, Users, Users).
internalize_users([User|Users], SubsIn, SubsOut, MatchIn, MatchOut,
        UsersIn, UsersOut) :-
    functor(User, F, A),
    functor(UserOut, F, A),
    internalize_user_args(A, User, UserOut, SubsIn, SubsIn1, MatchIn,
        MatchIn1),
    UsersIn1 = [UserOut|UsersIn],
    internalize_users(Users, SubsIn1, SubsOut, MatchIn1, MatchOut, UsersIn1,
        UsersOut).

internalize_user_args(I, UserIn, UserOut, SubsIn, SubsOut, MatchIn,
        MatchOut) :-
    ( I == 0 ->
        SubsOut = SubsIn,
        MatchOut = MatchIn
    ;   arg(I, UserIn, ArgIn),
        arg(I, UserOut, ArgOut),
        expr_var(ArgOut, _, SubsIn, SubsIn1),
        put_assoc(ArgIn, MatchIn, ArgOut, MatchIn1),
        NI is I - 1,
        internalize_user_args(NI, UserIn, UserOut, SubsIn1, SubsOut,
            MatchIn1, MatchOut)
    ).

    % Compile the rules into a usable form:
    %
compile_rules(Rules, Defns) :-
    empty_assoc(Defns0),
    compile_rules_2(Rules, Defns0, Defns).

compile_rules_2([], Defns, Defns).
compile_rules_2([Rule|Rules], DefnsIn, DefnsOut) :-
    compile_rule(Rule, DefnsIn, NewDefnsIn),
    compile_rules_2(Rules, NewDefnsIn, DefnsOut).

compile_rule(Rule, DefnsIn, DefnsOut) :-
    ( Rule = (Head0 :- Body0) ->
        Head = Head0,
        Body = Body0
    ;   Head = Rule,
        Body = true
    ),
    ord_empty(Empty),
    compile_rule_head(Head, NewHead, Empty, HeadVars, [], Builtins0),
    compile_rule_body(Body, HeadVars, BoundVars, Builtins0, Builtins1, [],
        Users),
    schedule_builtins(BoundVars, Builtins1, Builtins2),
    optimise_builtins(Builtins2, Builtins),
    RuleDefn = rule(NewHead, Users, Builtins),
    functor(NewHead, F, A),
    FA = F/A,
    ( get_assoc(FA, DefnsIn, RuleDefns) ->
        NewRuleDefns = [RuleDefn|RuleDefns],
        put_assoc(FA, DefnsIn, NewRuleDefns, DefnsOut)
    ;   put_assoc(FA, DefnsIn, [RuleDefn], DefnsOut)
    ).

optimise_builtins(BuiltinsIn, BuiltinsOut) :-
    empty_assoc(Match),
    optimise_builtins(Match, BuiltinsIn, BuiltinsOut).

optimise_builtins(_, [], []).
optimise_builtins(Match, [Builtin|BuiltinsIn], BuiltinsOut) :-
    ( Builtin = assign(Var, Expr) ->
        optimise_expr(Match, Expr, NewExpr),
        ( var(NewExpr) ->
            put_assoc(Var, Match, NewExpr, NewMatch),
            optimise_builtins(NewMatch, BuiltinsIn, BuiltinsOut)
        ;   BuiltinsOut = [assign(Var, NewExpr)|NewBuiltinsOut],
            optimise_builtins(Match, BuiltinsIn, NewBuiltinsOut)
        )
    ;   optimise_expr(Match, Builtin, NewBuiltin),
        BuiltinsOut = [NewBuiltin|NewBuiltinsOut],
        optimise_builtins(Match, BuiltinsIn, NewBuiltinsOut)
    ).

optimise_expr(Match, Expr, NewExpr) :-
    ( var(Expr) ->
        ( get_assoc(Expr, Match, NewExpr0) ->
            NewExpr = NewExpr0
        ;   NewExpr = Expr
        )
    ;   functor(Expr, F, A),
        functor(NewExpr, F, A),
        optimise_expr_args(Match, A, Expr, NewExpr)
    ).

optimise_expr_args(Match, I, Expr, NewExpr) :-
    ( I == 0 ->
        true
    ;   arg(I, Expr, Arg),
        arg(I, NewExpr, NewArg),
        optimise_expr(Match, Arg, NewArg),
        NI is I - 1,
        optimise_expr_args(Match, NI, Expr, NewExpr)
    ).

schedule_builtins(BoundVars, BuiltinsIn, BuiltinsOut) :-
    schedule_builtins(BoundVars, [], no, BuiltinsIn, BuiltinsOut).

schedule_builtins(BoundVars, Delayed, Sched, [], BuiltinsOut) :-
    ( Delayed = [_|_] ->
        ( Sched = no ->
            printf("warning: unable to schedule constraints %p with %p bound\n",
                [Delayed, BoundVars]),
            BuiltinsOut = Delayed
        ;   schedule_builtins(BoundVars, [], no, Delayed, BuiltinsOut)
        )
    ;   BuiltinsOut = []
    ).
schedule_builtins(BoundVars, Delayed, Sched, [Builtin|Builtins],
        BuiltinsOut) :-
    ( schedule_builtin(Builtin, NewBuiltin, BoundVars, NewBoundVars) ->
        BuiltinsOut = [NewBuiltin|NewBuiltinsOut],
        schedule_builtins(NewBoundVars, Delayed, yes, Builtins, NewBuiltinsOut)
    ;   NewDelayed = [Builtin|Delayed],
        schedule_builtins(BoundVars, NewDelayed, Sched, Builtins, BuiltinsOut)
    ).

schedule_builtin(BuiltinIn, BuiltinOut, BoundVarsIn, BoundVarsOut) :-
    ( BuiltinIn = (X = Y) ->
        ( is_fixed(BoundVarsIn, X) ->
            ( is_fixed(BoundVarsIn, Y) ->
                BoundVarsOut = BoundVarsIn,
                BuiltinOut = BuiltinIn
            ;   var(Y),
                ord_add_element(BoundVarsIn, Y, BoundVarsOut),
                BuiltinOut = assign(Y, X)
            )
        ;   var(X),
            is_fixed(BoundVarsIn, Y),
            ord_add_element(BoundVarsIn, X, BoundVarsOut),
            BuiltinOut = assign(X, Y)
        )
    ;   is_fixed(BoundVarsIn, BuiltinIn),
        BoundVarsOut = BoundVarsIn,
        BuiltinOut = BuiltinIn
    ).

is_fixed(Vars, X) :-
    ( var(X) ->
        ord_element(X, Vars)
    ;   functor(X, _, A),
        is_fixed_args(Vars, A, X)
    ).

is_fixed_args(Vars, I, X) :-
    ( I == 0 ->
        true
    ;   arg(I, X, Arg),
        is_fixed(Vars, Arg),
        NI is I - 1,
        is_fixed_args(Vars, NI, X)
    ).

compile_rule_head(Head, NewHead, VarsIn, VarsOut, BuiltinsIn, BuiltinsOut) :-
    functor(Head, F, A),
    functor(NewHead, F, A),
    compile_rule_head_args(A, Head, NewHead, VarsIn, VarsOut, 
        BuiltinsIn, BuiltinsOut).

compile_rule_head_args(I, Head, NewHead, VarsIn, VarsOut, BuiltinsIn,
        BuiltinsOut) :-
    ( I == 0 ->
        VarsOut = VarsIn,
        BuiltinsOut = BuiltinsIn
    ;   arg(I, Head, Arg),
        arg(I, NewHead, NewArg),
        BuiltinsIn1 = [(NewArg = Arg)|BuiltinsIn],
        ord_add_element(VarsIn, NewArg, VarsIn1),
        NI is I - 1,
        compile_rule_head_args(NI, Head, NewHead, VarsIn1, VarsOut,
            BuiltinsIn1, BuiltinsOut)
    ).

compile_rule_body(Body, VarsIn, VarsOut, BuiltinsIn, BuiltinsOut,
        UsersIn, UsersOut) :-
    ( Body = (Body1 ',' Body2) ->
        compile_rule_body(Body1, VarsIn, VarsIn1, BuiltinsIn, BuiltinsIn1,
            UsersIn, UsersIn1),
        compile_rule_body(Body2, VarsIn1, VarsOut, BuiltinsIn1, BuiltinsOut,
            UsersIn1, UsersOut)
    ; Body = true ->
        VarsOut = VarsIn,
        BuiltinsOut = BuiltinsIn,
        UsersOut = UsersIn
    ; is_builtin(Body) ->
        VarsOut = VarsIn,
        BuiltinsOut = [Body|BuiltinsIn],
        UsersOut = UsersIn
    ;   compile_user_constraint(Body, NewBody, VarsIn, VarsOut, BuiltinsIn,
            BuiltinsOut),
        UsersOut = [NewBody|UsersIn]
    ).

is_builtin(true).
is_builtin(false).
is_builtin(_ = _).
is_builtin(_ =\= _).
is_builtin(_ < _).
is_builtin(_ > _).
is_builtin(_ =< _).
is_builtin(_ >= _).

compile_user_constraint(User, NewUser, VarsIn, VarsOut, BuiltinsIn,
        BuiltinsOut) :-
    functor(User, F, A),
    functor(NewUser, F, A),
    compile_user_constraint_args(A, User, NewUser, VarsIn, VarsOut,
        BuiltinsIn, BuiltinsOut).

compile_user_constraint_args(I, User, NewUser, VarsIn, VarsOut, BuiltinsIn,
        BuiltinsOut) :-
    ( I == 0 ->
        VarsOut = VarsIn,
        BuiltinsOut = BuiltinsIn
    ;   arg(I, User, Arg),
        arg(I, NewUser, NewArg),
        BuiltinsIn1 = [(NewArg = Arg)|BuiltinsIn],
        ord_add_element(VarsIn, NewArg, VarsIn1),
        NI is I - 1,
        compile_user_constraint_args(NI, User, NewUser, VarsIn1, VarsOut,
            BuiltinsIn1, BuiltinsOut)
    ).

    % Printing.
    %
print_state(GBuiltins, GUsers, HBuiltins, HUsers) :-
    print_constraints(GBuiltins),
    printf(" /\\ ", []),
    print_constraints(GUsers),
    printf(" |= ", []),
    print_constraints(HBuiltins),
    printf(" /\\ ", []),
    print_constraints(HUsers).

print_constraints([]) :-
    printf("true", []).
print_constraints([Constr|Constrs]) :-
    printf("%p", [Constr]),
    ( Constrs = [] ->
        true
    ;   printf(" /\\ ", []),
        print_constraints(Constrs)
    ).

print_proof(Proof) :-
    nl,
    print_proof(Proof, 0).

print_proof(Proof, Depth) :-
    print_depth(Depth),
    ( Proof = [Step|ProofTail] ->
        ( Step = ru(Entry) ->
            printf("\33[34mRIGHT UNFOLD\33[0m: ", []),
            print_entry(Entry),
            print_proof(ProofTail, Depth)
        ; Step = co(Entry) ->
            ProofTail = [],
            printf("\33[34mCOINDUCTION\33[0m: ", []),
            print_entry(Entry),
            print_depth(Depth),
            printf("QED\n", [])
        ; Step = cp(Entry) ->
            ProofTail = [],
            printf("\33[34mSOLVE\33[0m: ", []),
            print_entry(Entry),
            print_depth(Depth),
            printf("QED\n", [])
        ; Step = lu(Cases, Entry) ->
            ProofTail = [],
            printf("\33[34mLEFT UNFOLD\33[0m: ", []),
            print_entry(Entry),
            NDepth is Depth + 1,
            forall(member(Case, Cases), print_proof(Case, NDepth)),
            print_depth(Depth),
            printf("QED\n", [])
        ;   fail
        )
    ;   printf("QED\n", [])
    ). 

print_depth(Depth) :-
    ( Depth =< 0 ->
        true
    ;   printf("    ", []),
        NDepth is Depth - 1,
        print_depth(NDepth)
    ).

print_entry(Entry) :-
    printf("\33[32m", []),
    Entry = entry(_, GBuiltins, GUsers, HBuiltins, HUsers),
    print_state(GBuiltins, GUsers, HBuiltins, HUsers),
    printf("\33[0m\n", []).

    % Predicates that really should exist, but don't.
    %
ord_element(X, [Y|Ys]) :-
    compare(R, X, Y),
    ( R = (=) ->
        true
    ;   R = (>),
        ord_element(X, Ys)
    ).

foldl_assoc(_, t, X, X).
foldl_assoc(Goal, t(K, V, _, T0, T1), X0, X3) :-
    foldl_assoc(Goal, T0, X0, X1),
    call(Goal, K, V, X1, X2),
    foldl_assoc(Goal, T1, X2, X3).

