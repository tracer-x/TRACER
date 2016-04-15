% builtin.pl
% Gregory J. Duck
%
% This file contains the implmentation of the builtin constraint solver.  It
% is implemented as a wrapper over CLP(R).
%

:- use_module(library(clpr)).

expr_satisfiable(Expr) :-
    empty_nb_set(NBSet),
    (
        expr_assert_all(Expr),
        add_nb_set(success, NBSet),
        fail
    ;   add_nb_set(success, NBSet, false)
    ).

expr_entails(Vars, Expr1, Expr2) :-
    ord_empty(Empty),
    vars(Expr1, Empty, Vars1),
    vars(Expr2, Empty, Vars2),
    ord_intersection(Vars1, Vars2, Vars3),
    ord_union(Vars, Vars3, Vars4),
    ( expr_entails_2(Vars4, Expr1, Expr2) ->
        printf("\33[32m", []),
        expr_print_entails(Vars, Expr1, Expr2),
        printf("\33[0m\n", [])
    ;   printf("\33[31m", []),
        expr_print_entails(Vars, Expr1, Expr2),
        printf("\33[0m\n", []),
        fail
    ).

expr_entails_2(Vars, Expr1, Expr2) :-
    expr_project(Vars, Expr1, NExpr1),
    empty_nb_set(NBSet),
    (
        ( expr_assert_all(NExpr1) ->
            expr_project(Vars, Expr2, NExpr2),
            expr_list_to_conj(NExpr2, NNExpr2),
            entailed(NNExpr2),
            add_nb_set(success, NBSet),
            fail
        ;   !
        )
    ;   add_nb_set(success, NBSet, false)
    ).

expr_list_to_conj([], (1=1)).
expr_list_to_conj([Expr|Exprs], Conj) :-
    ( Exprs = [] ->
        Conj = Expr
    ;   expr_list_to_conj(Exprs, Conj0),
        Conj = (Expr , Conj0)
    ).

expr_assert_all([]).
expr_assert_all([Expr|Exprs]) :-
    {Expr},
    expr_assert_all(Exprs).

expr_project(Vars, ExprIn, ExprOut) :-
    empty_nb_set(NBSet),
    expr_project_sym_init(Sym),
    expr_project_vars(Vars, Syms, Sym, Empty, Map),
    (
        expr_assert_all(ExprIn),            % can fail
        empty_assoc(Empty),
        expr_project_nonvars(Vars, NVars, Syms, NSyms, Proj0),
        dump(NVars, NSyms, Proj1),
        append(Proj0, Proj1, Proj),
        add_nb_set(Proj, NBSet),
        fail                                % force backtracking
    ;   
        !,
        ( gen_nb_set(NBSet, Proj) ->
            expr_project_fix(Map, Proj, ExprOut)
        ;   ExprOut = [1=2]                 % ExprIn was unsat.
        )
    ).

expr_project_nonvars([], [], [], [], []).
expr_project_nonvars([Var|Vars], NVars, [Sym|Syms], NSyms, Proj) :-
    ( var(Var) ->
        NVars = [Var|NVars1],
        NSyms = [Sym|NSyms1],
        expr_project_nonvars(Vars, NVars1, Syms, NSyms1, Proj)
    ;   Proj = [(Sym=Var)|NProj],
        expr_project_nonvars(Vars, NVars, Syms, NSyms, NProj)
    ).

expr_project_fix(Map, ExprIn, ExprOut) :-
    ( number(ExprIn) ->
        ( get_assoc(ExprIn, Map, ExprOut0) ->
            ExprOut = ExprOut0
        ;   ExprOut = ExprIn
        )
    ; var(ExprIn) ->
        printf("warning: bug in dump/3, variable %p not eliminated\n",
            [ExprIn]),
        ExprOut = ExprIn
    ;   functor(ExprIn, F, A),
        functor(ExprOut, F, A),
        expr_project_fix_args(A, Map, ExprIn, ExprOut)
    ).

expr_project_fix_args(I, Map, ExprIn, ExprOut) :-
    ( I == 0 ->
        true
    ;   arg(I, ExprIn, ArgIn),
        arg(I, ExprOut, ArgOut),
        expr_project_fix(Map, ArgIn, ArgOut),
        NI is I - 1,
        expr_project_fix_args(NI, Map, ExprIn, ExprOut)
    ).

expr_project_vars([], [], _, Map, Map).
expr_project_vars([Var|Vars], [Sym|Syms], Sym, MapIn, MapOut) :-
    put_assoc(Sym, MapIn, Var, MapIn1),
    NSym is Sym + 1,
    expr_project_vars(Vars, Syms, NSym, MapIn1, MapOut).

expr_project_sym_init(12345000).

expr_print_entails(Vars, Expr1, Expr2) :-
    ord_empty(Vars0),
    vars(Expr1, Vars0, Vars1),
    vars(Expr2, Vars1, Vars2),
    ord_subtract(Vars2, Vars, Vars3),
    printf("exists %p ", [Vars3]),
    print_constraints(Expr1),
    printf(" |= ", []),
    print_constraints(Expr2).

