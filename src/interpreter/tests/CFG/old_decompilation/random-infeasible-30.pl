:- multifile r/5,implicit_updates/0,var2names/2,preds/2,trans_preds/3,cube_size/1,start/1,error/1,refinement/1,cutpoint/1,invgen_template/2,cfg_exit_relation/1,stmtsrc/2,strengthening/2.
refinement(inter).
cube_size(1).
preds(p(_, data(V5, V4, V2, V3, V6, V1)), []).
trans_preds(p(_, data(V5, V4, V2, V3, V6, V1)), p(_, data(V5p, V4p, V2p, V3p, V6p, V1p)), []).
var2names(p(pc(_), data(V5, V4, V2, V3, V6, V1)), [(V5, 'x4'), (V4, 'x3'), (V2, 'x2'), (V3, 'x1'), (V6, 'x0'), (V1, 'sum')]).
% start location
start(pc(main-0-34)).
% error location
error(pc(main-err-0)).
% cutpoint locations
% invariant templates
% cfg loop exit relation
cfg_exit_relation([]).
% 95 transitions
r(p(pc(main-62-67), data(V5, V4, V2, V3, V6, V1)), p(pc(main-ret-0), data(V5p, V4p, V2p, V3p, V6p, V1p)), [], [V5p = V5, V4p = V4, V2p = V2, V3p = V3, V6p = V6, V1p = V1], 1). % 
stmtsrc(1, 'skip;').
r(p(pc(main-60-66), data(V5, V4, V2, V3, V6, V1)), p(pc(main-62-67), data(V5p, V4p, V2p, V3p, V6p, V1p)), [(V1 =< 150)], [V5p = V5, V4p = V4, V2p = V2, V3p = V3, V6p = V6, V1p = V1], 2). % sum <= 150
stmtsrc(2, 'assume(sum <= 150);').
r(p(pc(main-63-0), data(V5, V4, V2, V3, V6, V1)), p(pc(main-err-0), data(V5p, V4p, V2p, V3p, V6p, V1p)), [], [V5p = V5, V4p = V4, V2p = V2, V3p = V3, V6p = V6, V1p = V1], 3). % 
stmtsrc(3, 'skip;').
r(p(pc(main-60-66), data(V5, V4, V2, V3, V6, V1)), p(pc(main-63-0), data(V5p, V4p, V2p, V3p, V6p, V1p)), [(V1 >= 1+ 150)], [V5p = V5, V4p = V4, V2p = V2, V3p = V3, V6p = V6, V1p = V1], 4). % sum > 150
stmtsrc(4, 'assume(sum > 150);').
r(p(pc(main-58-64), data(V5, V4, V2, V3, V6, V1)), p(pc(main-60-66), data(V5p, V4p, V2p, V3p, V6p, V1p)), [(V6 >= V3)], [V5p = V5, V4p = V4, V2p = V2, V3p = V3, V6p = V6, V1p = V1], 5). % x0 >= x1
stmtsrc(5, 'assume(x0 >= x1);').
r(p(pc(main-61-64), data(V5, V4, V2, V3, V6, V1)), p(pc(main-60-66), data(V5p, V4p, V2p, V3p, V6p, V1p)), [], [V5p = V5, V4p = V4, V2p = V2, V3p = V3, V6p = V6, V1p = (V1 + 1)], 6). % sum := sum + 1
stmtsrc(6, 'sum = sum + 1;').
r(p(pc(main-58-64), data(V5, V4, V2, V3, V6, V1)), p(pc(main-61-64), data(V5p, V4p, V2p, V3p, V6p, V1p)), [(V6 +1 =< V3)], [V5p = V5, V4p = V4, V2p = V2, V3p = V3, V6p = V6, V1p = V1], 7). % x0 < x1
stmtsrc(7, 'assume(x0 < x1);').
r(p(pc(main-56-63), data(V5, V4, V2, V3, V6, V1)), p(pc(main-58-64), data(V5p, V4p, V2p, V3p, V6p, V1p)), [(V2 >= V3)], [V5p = V5, V4p = V4, V2p = V2, V3p = V3, V6p = V6, V1p = V1], 8). % x2 >= x1
stmtsrc(8, 'assume(x2 >= x1);').
r(p(pc(main-59-63), data(V5, V4, V2, V3, V6, V1)), p(pc(main-58-64), data(V5p, V4p, V2p, V3p, V6p, V1p)), [], [V5p = V5, V4p = V4, V2p = V2, V3p = V3, V6p = V6, V1p = (V1 + 3)], 9). % sum := sum + 3
stmtsrc(9, 'sum = sum + 3;').
r(p(pc(main-56-63), data(V5, V4, V2, V3, V6, V1)), p(pc(main-59-63), data(V5p, V4p, V2p, V3p, V6p, V1p)), [(V2 +1 =< V3)], [V5p = V5, V4p = V4, V2p = V2, V3p = V3, V6p = V6, V1p = V1], 10). % x2 < x1
stmtsrc(10, 'assume(x2 < x1);').
r(p(pc(main-54-62), data(V5, V4, V2, V3, V6, V1)), p(pc(main-56-63), data(V5p, V4p, V2p, V3p, V6p, V1p)), [(V4 >= V2)], [V5p = V5, V4p = V4, V2p = V2, V3p = V3, V6p = V6, V1p = V1], 11). % x3 >= x2
stmtsrc(11, 'assume(x3 >= x2);').
r(p(pc(main-57-62), data(V5, V4, V2, V3, V6, V1)), p(pc(main-56-63), data(V5p, V4p, V2p, V3p, V6p, V1p)), [], [V5p = V5, V4p = V4, V2p = V2, V3p = V3, V6p = V6, V1p = (V1 + 2)], 12). % sum := sum + 2
stmtsrc(12, 'sum = sum + 2;').
r(p(pc(main-54-62), data(V5, V4, V2, V3, V6, V1)), p(pc(main-57-62), data(V5p, V4p, V2p, V3p, V6p, V1p)), [(V4 +1 =< V2)], [V5p = V5, V4p = V4, V2p = V2, V3p = V3, V6p = V6, V1p = V1], 13). % x3 < x2
stmtsrc(13, 'assume(x3 < x2);').
r(p(pc(main-52-61), data(V5, V4, V2, V3, V6, V1)), p(pc(main-54-62), data(V5p, V4p, V2p, V3p, V6p, V1p)), [(V6 >= V5)], [V5p = V5, V4p = V4, V2p = V2, V3p = V3, V6p = V6, V1p = V1], 14). % x0 >= x4
stmtsrc(14, 'assume(x0 >= x4);').
r(p(pc(main-55-61), data(V5, V4, V2, V3, V6, V1)), p(pc(main-54-62), data(V5p, V4p, V2p, V3p, V6p, V1p)), [], [V5p = V5, V4p = V4, V2p = V2, V3p = V3, V6p = V6, V1p = (V1 + 4)], 15). % sum := sum + 4
stmtsrc(15, 'sum = sum + 4;').
r(p(pc(main-52-61), data(V5, V4, V2, V3, V6, V1)), p(pc(main-55-61), data(V5p, V4p, V2p, V3p, V6p, V1p)), [(V6 +1 =< V5)], [V5p = V5, V4p = V4, V2p = V2, V3p = V3, V6p = V6, V1p = V1], 16). % x0 < x4
stmtsrc(16, 'assume(x0 < x4);').
r(p(pc(main-50-60), data(V5, V4, V2, V3, V6, V1)), p(pc(main-52-61), data(V5p, V4p, V2p, V3p, V6p, V1p)), [(V3 >= V4)], [V5p = V5, V4p = V4, V2p = V2, V3p = V3, V6p = V6, V1p = V1], 17). % x1 >= x3
stmtsrc(17, 'assume(x1 >= x3);').
r(p(pc(main-53-60), data(V5, V4, V2, V3, V6, V1)), p(pc(main-52-61), data(V5p, V4p, V2p, V3p, V6p, V1p)), [], [V5p = V5, V4p = V4, V2p = V2, V3p = V3, V6p = V6, V1p = (V1 + 2)], 18). % sum := sum + 2
stmtsrc(18, 'sum = sum + 2;').
r(p(pc(main-50-60), data(V5, V4, V2, V3, V6, V1)), p(pc(main-53-60), data(V5p, V4p, V2p, V3p, V6p, V1p)), [(V3 +1 =< V4)], [V5p = V5, V4p = V4, V2p = V2, V3p = V3, V6p = V6, V1p = V1], 19). % x1 < x3
stmtsrc(19, 'assume(x1 < x3);').
r(p(pc(main-48-59), data(V5, V4, V2, V3, V6, V1)), p(pc(main-50-60), data(V5p, V4p, V2p, V3p, V6p, V1p)), [(V3 >= V5)], [V5p = V5, V4p = V4, V2p = V2, V3p = V3, V6p = V6, V1p = V1], 20). % x1 >= x4
stmtsrc(20, 'assume(x1 >= x4);').
r(p(pc(main-51-59), data(V5, V4, V2, V3, V6, V1)), p(pc(main-50-60), data(V5p, V4p, V2p, V3p, V6p, V1p)), [], [V5p = V5, V4p = V4, V2p = V2, V3p = V3, V6p = V6, V1p = (V1 + 1)], 21). % sum := sum + 1
stmtsrc(21, 'sum = sum + 1;').
r(p(pc(main-48-59), data(V5, V4, V2, V3, V6, V1)), p(pc(main-51-59), data(V5p, V4p, V2p, V3p, V6p, V1p)), [(V3 +1 =< V5)], [V5p = V5, V4p = V4, V2p = V2, V3p = V3, V6p = V6, V1p = V1], 22). % x1 < x4
stmtsrc(22, 'assume(x1 < x4);').
r(p(pc(main-46-58), data(V5, V4, V2, V3, V6, V1)), p(pc(main-48-59), data(V5p, V4p, V2p, V3p, V6p, V1p)), [(V5 >= V3)], [V5p = V5, V4p = V4, V2p = V2, V3p = V3, V6p = V6, V1p = V1], 23). % x4 >= x1
stmtsrc(23, 'assume(x4 >= x1);').
r(p(pc(main-49-58), data(V5, V4, V2, V3, V6, V1)), p(pc(main-48-59), data(V5p, V4p, V2p, V3p, V6p, V1p)), [], [V5p = V5, V4p = V4, V2p = V2, V3p = V3, V6p = V6, V1p = (V1 + 4)], 24). % sum := sum + 4
stmtsrc(24, 'sum = sum + 4;').
r(p(pc(main-46-58), data(V5, V4, V2, V3, V6, V1)), p(pc(main-49-58), data(V5p, V4p, V2p, V3p, V6p, V1p)), [(V5 +1 =< V3)], [V5p = V5, V4p = V4, V2p = V2, V3p = V3, V6p = V6, V1p = V1], 25). % x4 < x1
stmtsrc(25, 'assume(x4 < x1);').
r(p(pc(main-44-57), data(V5, V4, V2, V3, V6, V1)), p(pc(main-46-58), data(V5p, V4p, V2p, V3p, V6p, V1p)), [(V2 >= V3)], [V5p = V5, V4p = V4, V2p = V2, V3p = V3, V6p = V6, V1p = V1], 26). % x2 >= x1
stmtsrc(26, 'assume(x2 >= x1);').
r(p(pc(main-47-57), data(V5, V4, V2, V3, V6, V1)), p(pc(main-46-58), data(V5p, V4p, V2p, V3p, V6p, V1p)), [], [V5p = V5, V4p = V4, V2p = V2, V3p = V3, V6p = V6, V1p = V1], 27). % sum := sum
stmtsrc(27, 'sum = sum;').
r(p(pc(main-44-57), data(V5, V4, V2, V3, V6, V1)), p(pc(main-47-57), data(V5p, V4p, V2p, V3p, V6p, V1p)), [(V2 +1 =< V3)], [V5p = V5, V4p = V4, V2p = V2, V3p = V3, V6p = V6, V1p = V1], 28). % x2 < x1
stmtsrc(28, 'assume(x2 < x1);').
r(p(pc(main-42-56), data(V5, V4, V2, V3, V6, V1)), p(pc(main-44-57), data(V5p, V4p, V2p, V3p, V6p, V1p)), [(V5 >= V3)], [V5p = V5, V4p = V4, V2p = V2, V3p = V3, V6p = V6, V1p = V1], 29). % x4 >= x1
stmtsrc(29, 'assume(x4 >= x1);').
r(p(pc(main-45-56), data(V5, V4, V2, V3, V6, V1)), p(pc(main-44-57), data(V5p, V4p, V2p, V3p, V6p, V1p)), [], [V5p = V5, V4p = V4, V2p = V2, V3p = V3, V6p = V6, V1p = V1], 30). % sum := sum
stmtsrc(30, 'sum = sum;').
r(p(pc(main-42-56), data(V5, V4, V2, V3, V6, V1)), p(pc(main-45-56), data(V5p, V4p, V2p, V3p, V6p, V1p)), [(V5 +1 =< V3)], [V5p = V5, V4p = V4, V2p = V2, V3p = V3, V6p = V6, V1p = V1], 31). % x4 < x1
stmtsrc(31, 'assume(x4 < x1);').
r(p(pc(main-40-55), data(V5, V4, V2, V3, V6, V1)), p(pc(main-42-56), data(V5p, V4p, V2p, V3p, V6p, V1p)), [(V5 >= V3)], [V5p = V5, V4p = V4, V2p = V2, V3p = V3, V6p = V6, V1p = V1], 32). % x4 >= x1
stmtsrc(32, 'assume(x4 >= x1);').
r(p(pc(main-43-55), data(V5, V4, V2, V3, V6, V1)), p(pc(main-42-56), data(V5p, V4p, V2p, V3p, V6p, V1p)), [], [V5p = V5, V4p = V4, V2p = V2, V3p = V3, V6p = V6, V1p = (V1 + 3)], 33). % sum := sum + 3
stmtsrc(33, 'sum = sum + 3;').
r(p(pc(main-40-55), data(V5, V4, V2, V3, V6, V1)), p(pc(main-43-55), data(V5p, V4p, V2p, V3p, V6p, V1p)), [(V5 +1 =< V3)], [V5p = V5, V4p = V4, V2p = V2, V3p = V3, V6p = V6, V1p = V1], 34). % x4 < x1
stmtsrc(34, 'assume(x4 < x1);').
r(p(pc(main-38-54), data(V5, V4, V2, V3, V6, V1)), p(pc(main-40-55), data(V5p, V4p, V2p, V3p, V6p, V1p)), [(V6 >= V4)], [V5p = V5, V4p = V4, V2p = V2, V3p = V3, V6p = V6, V1p = V1], 35). % x0 >= x3
stmtsrc(35, 'assume(x0 >= x3);').
r(p(pc(main-41-54), data(V5, V4, V2, V3, V6, V1)), p(pc(main-40-55), data(V5p, V4p, V2p, V3p, V6p, V1p)), [], [V5p = V5, V4p = V4, V2p = V2, V3p = V3, V6p = V6, V1p = (V1 + 2)], 36). % sum := sum + 2
stmtsrc(36, 'sum = sum + 2;').
r(p(pc(main-38-54), data(V5, V4, V2, V3, V6, V1)), p(pc(main-41-54), data(V5p, V4p, V2p, V3p, V6p, V1p)), [(V6 +1 =< V4)], [V5p = V5, V4p = V4, V2p = V2, V3p = V3, V6p = V6, V1p = V1], 37). % x0 < x3
stmtsrc(37, 'assume(x0 < x3);').
r(p(pc(main-36-53), data(V5, V4, V2, V3, V6, V1)), p(pc(main-38-54), data(V5p, V4p, V2p, V3p, V6p, V1p)), [(V2 >= V6)], [V5p = V5, V4p = V4, V2p = V2, V3p = V3, V6p = V6, V1p = V1], 38). % x2 >= x0
stmtsrc(38, 'assume(x2 >= x0);').
r(p(pc(main-39-53), data(V5, V4, V2, V3, V6, V1)), p(pc(main-38-54), data(V5p, V4p, V2p, V3p, V6p, V1p)), [], [V5p = V5, V4p = V4, V2p = V2, V3p = V3, V6p = V6, V1p = (V1 + 3)], 39). % sum := sum + 3
stmtsrc(39, 'sum = sum + 3;').
r(p(pc(main-36-53), data(V5, V4, V2, V3, V6, V1)), p(pc(main-39-53), data(V5p, V4p, V2p, V3p, V6p, V1p)), [(V2 +1 =< V6)], [V5p = V5, V4p = V4, V2p = V2, V3p = V3, V6p = V6, V1p = V1], 40). % x2 < x0
stmtsrc(40, 'assume(x2 < x0);').
r(p(pc(main-34-52), data(V5, V4, V2, V3, V6, V1)), p(pc(main-36-53), data(V5p, V4p, V2p, V3p, V6p, V1p)), [(V6 >= V4)], [V5p = V5, V4p = V4, V2p = V2, V3p = V3, V6p = V6, V1p = V1], 41). % x0 >= x3
stmtsrc(41, 'assume(x0 >= x3);').
r(p(pc(main-37-52), data(V5, V4, V2, V3, V6, V1)), p(pc(main-36-53), data(V5p, V4p, V2p, V3p, V6p, V1p)), [], [V5p = V5, V4p = V4, V2p = V2, V3p = V3, V6p = V6, V1p = (V1 + 2)], 42). % sum := sum + 2
stmtsrc(42, 'sum = sum + 2;').
r(p(pc(main-34-52), data(V5, V4, V2, V3, V6, V1)), p(pc(main-37-52), data(V5p, V4p, V2p, V3p, V6p, V1p)), [(V6 +1 =< V4)], [V5p = V5, V4p = V4, V2p = V2, V3p = V3, V6p = V6, V1p = V1], 43). % x0 < x3
stmtsrc(43, 'assume(x0 < x3);').
r(p(pc(main-32-51), data(V5, V4, V2, V3, V6, V1)), p(pc(main-34-52), data(V5p, V4p, V2p, V3p, V6p, V1p)), [(V5 >= V3)], [V5p = V5, V4p = V4, V2p = V2, V3p = V3, V6p = V6, V1p = V1], 44). % x4 >= x1
stmtsrc(44, 'assume(x4 >= x1);').
r(p(pc(main-35-51), data(V5, V4, V2, V3, V6, V1)), p(pc(main-34-52), data(V5p, V4p, V2p, V3p, V6p, V1p)), [], [V5p = V5, V4p = V4, V2p = V2, V3p = V3, V6p = V6, V1p = (V1 + 2)], 45). % sum := sum + 2
stmtsrc(45, 'sum = sum + 2;').
r(p(pc(main-32-51), data(V5, V4, V2, V3, V6, V1)), p(pc(main-35-51), data(V5p, V4p, V2p, V3p, V6p, V1p)), [(V5 +1 =< V3)], [V5p = V5, V4p = V4, V2p = V2, V3p = V3, V6p = V6, V1p = V1], 46). % x4 < x1
stmtsrc(46, 'assume(x4 < x1);').
r(p(pc(main-30-50), data(V5, V4, V2, V3, V6, V1)), p(pc(main-32-51), data(V5p, V4p, V2p, V3p, V6p, V1p)), [(V5 >= V5)], [V5p = V5, V4p = V4, V2p = V2, V3p = V3, V6p = V6, V1p = V1], 47). % x4 >= x4
stmtsrc(47, 'assume(x4 >= x4);').
r(p(pc(main-33-50), data(V5, V4, V2, V3, V6, V1)), p(pc(main-32-51), data(V5p, V4p, V2p, V3p, V6p, V1p)), [], [V5p = V5, V4p = V4, V2p = V2, V3p = V3, V6p = V6, V1p = (V1 + 4)], 48). % sum := sum + 4
stmtsrc(48, 'sum = sum + 4;').
r(p(pc(main-30-50), data(V5, V4, V2, V3, V6, V1)), p(pc(main-33-50), data(V5p, V4p, V2p, V3p, V6p, V1p)), [(V5 +1 =< V5)], [V5p = V5, V4p = V4, V2p = V2, V3p = V3, V6p = V6, V1p = V1], 49). % x4 < x4
stmtsrc(49, 'assume(x4 < x4);').
r(p(pc(main-28-49), data(V5, V4, V2, V3, V6, V1)), p(pc(main-30-50), data(V5p, V4p, V2p, V3p, V6p, V1p)), [(V3 >= V2)], [V5p = V5, V4p = V4, V2p = V2, V3p = V3, V6p = V6, V1p = V1], 50). % x1 >= x2
stmtsrc(50, 'assume(x1 >= x2);').
r(p(pc(main-31-49), data(V5, V4, V2, V3, V6, V1)), p(pc(main-30-50), data(V5p, V4p, V2p, V3p, V6p, V1p)), [], [V5p = V5, V4p = V4, V2p = V2, V3p = V3, V6p = V6, V1p = (V1 + 3)], 51). % sum := sum + 3
stmtsrc(51, 'sum = sum + 3;').
r(p(pc(main-28-49), data(V5, V4, V2, V3, V6, V1)), p(pc(main-31-49), data(V5p, V4p, V2p, V3p, V6p, V1p)), [(V3 +1 =< V2)], [V5p = V5, V4p = V4, V2p = V2, V3p = V3, V6p = V6, V1p = V1], 52). % x1 < x2
stmtsrc(52, 'assume(x1 < x2);').
r(p(pc(main-26-48), data(V5, V4, V2, V3, V6, V1)), p(pc(main-28-49), data(V5p, V4p, V2p, V3p, V6p, V1p)), [(V6 >= V4)], [V5p = V5, V4p = V4, V2p = V2, V3p = V3, V6p = V6, V1p = V1], 53). % x0 >= x3
stmtsrc(53, 'assume(x0 >= x3);').
r(p(pc(main-29-48), data(V5, V4, V2, V3, V6, V1)), p(pc(main-28-49), data(V5p, V4p, V2p, V3p, V6p, V1p)), [], [V5p = V5, V4p = V4, V2p = V2, V3p = V3, V6p = V6, V1p = (V1 + 4)], 54). % sum := sum + 4
stmtsrc(54, 'sum = sum + 4;').
r(p(pc(main-26-48), data(V5, V4, V2, V3, V6, V1)), p(pc(main-29-48), data(V5p, V4p, V2p, V3p, V6p, V1p)), [(V6 +1 =< V4)], [V5p = V5, V4p = V4, V2p = V2, V3p = V3, V6p = V6, V1p = V1], 55). % x0 < x3
stmtsrc(55, 'assume(x0 < x3);').
r(p(pc(main-24-47), data(V5, V4, V2, V3, V6, V1)), p(pc(main-26-48), data(V5p, V4p, V2p, V3p, V6p, V1p)), [(V4 >= V4)], [V5p = V5, V4p = V4, V2p = V2, V3p = V3, V6p = V6, V1p = V1], 56). % x3 >= x3
stmtsrc(56, 'assume(x3 >= x3);').
r(p(pc(main-27-47), data(V5, V4, V2, V3, V6, V1)), p(pc(main-26-48), data(V5p, V4p, V2p, V3p, V6p, V1p)), [], [V5p = V5, V4p = V4, V2p = V2, V3p = V3, V6p = V6, V1p = V1], 57). % sum := sum
stmtsrc(57, 'sum = sum;').
r(p(pc(main-24-47), data(V5, V4, V2, V3, V6, V1)), p(pc(main-27-47), data(V5p, V4p, V2p, V3p, V6p, V1p)), [(V4 +1 =< V4)], [V5p = V5, V4p = V4, V2p = V2, V3p = V3, V6p = V6, V1p = V1], 58). % x3 < x3
stmtsrc(58, 'assume(x3 < x3);').
r(p(pc(main-22-46), data(V5, V4, V2, V3, V6, V1)), p(pc(main-24-47), data(V5p, V4p, V2p, V3p, V6p, V1p)), [(V6 >= V6)], [V5p = V5, V4p = V4, V2p = V2, V3p = V3, V6p = V6, V1p = V1], 59). % x0 >= x0
stmtsrc(59, 'assume(x0 >= x0);').
r(p(pc(main-25-46), data(V5, V4, V2, V3, V6, V1)), p(pc(main-24-47), data(V5p, V4p, V2p, V3p, V6p, V1p)), [], [V5p = V5, V4p = V4, V2p = V2, V3p = V3, V6p = V6, V1p = (V1 + 3)], 60). % sum := sum + 3
stmtsrc(60, 'sum = sum + 3;').
r(p(pc(main-22-46), data(V5, V4, V2, V3, V6, V1)), p(pc(main-25-46), data(V5p, V4p, V2p, V3p, V6p, V1p)), [(V6 +1 =< V6)], [V5p = V5, V4p = V4, V2p = V2, V3p = V3, V6p = V6, V1p = V1], 61). % x0 < x0
stmtsrc(61, 'assume(x0 < x0);').
r(p(pc(main-20-45), data(V5, V4, V2, V3, V6, V1)), p(pc(main-22-46), data(V5p, V4p, V2p, V3p, V6p, V1p)), [(V6 >= V3)], [V5p = V5, V4p = V4, V2p = V2, V3p = V3, V6p = V6, V1p = V1], 62). % x0 >= x1
stmtsrc(62, 'assume(x0 >= x1);').
r(p(pc(main-23-45), data(V5, V4, V2, V3, V6, V1)), p(pc(main-22-46), data(V5p, V4p, V2p, V3p, V6p, V1p)), [], [V5p = V5, V4p = V4, V2p = V2, V3p = V3, V6p = V6, V1p = V1], 63). % sum := sum
stmtsrc(63, 'sum = sum;').
r(p(pc(main-20-45), data(V5, V4, V2, V3, V6, V1)), p(pc(main-23-45), data(V5p, V4p, V2p, V3p, V6p, V1p)), [(V6 +1 =< V3)], [V5p = V5, V4p = V4, V2p = V2, V3p = V3, V6p = V6, V1p = V1], 64). % x0 < x1
stmtsrc(64, 'assume(x0 < x1);').
r(p(pc(main-18-44), data(V5, V4, V2, V3, V6, V1)), p(pc(main-20-45), data(V5p, V4p, V2p, V3p, V6p, V1p)), [(V3 >= V2)], [V5p = V5, V4p = V4, V2p = V2, V3p = V3, V6p = V6, V1p = V1], 65). % x1 >= x2
stmtsrc(65, 'assume(x1 >= x2);').
r(p(pc(main-21-44), data(V5, V4, V2, V3, V6, V1)), p(pc(main-20-45), data(V5p, V4p, V2p, V3p, V6p, V1p)), [], [V5p = V5, V4p = V4, V2p = V2, V3p = V3, V6p = V6, V1p = (V1 + 2)], 66). % sum := sum + 2
stmtsrc(66, 'sum = sum + 2;').
r(p(pc(main-18-44), data(V5, V4, V2, V3, V6, V1)), p(pc(main-21-44), data(V5p, V4p, V2p, V3p, V6p, V1p)), [(V3 +1 =< V2)], [V5p = V5, V4p = V4, V2p = V2, V3p = V3, V6p = V6, V1p = V1], 67). % x1 < x2
stmtsrc(67, 'assume(x1 < x2);').
r(p(pc(main-16-43), data(V5, V4, V2, V3, V6, V1)), p(pc(main-18-44), data(V5p, V4p, V2p, V3p, V6p, V1p)), [(V6 >= V6)], [V5p = V5, V4p = V4, V2p = V2, V3p = V3, V6p = V6, V1p = V1], 68). % x0 >= x0
stmtsrc(68, 'assume(x0 >= x0);').
r(p(pc(main-19-43), data(V5, V4, V2, V3, V6, V1)), p(pc(main-18-44), data(V5p, V4p, V2p, V3p, V6p, V1p)), [], [V5p = V5, V4p = V4, V2p = V2, V3p = V3, V6p = V6, V1p = (V1 + 1)], 69). % sum := sum + 1
stmtsrc(69, 'sum = sum + 1;').
r(p(pc(main-16-43), data(V5, V4, V2, V3, V6, V1)), p(pc(main-19-43), data(V5p, V4p, V2p, V3p, V6p, V1p)), [(V6 +1 =< V6)], [V5p = V5, V4p = V4, V2p = V2, V3p = V3, V6p = V6, V1p = V1], 70). % x0 < x0
stmtsrc(70, 'assume(x0 < x0);').
r(p(pc(main-14-42), data(V5, V4, V2, V3, V6, V1)), p(pc(main-16-43), data(V5p, V4p, V2p, V3p, V6p, V1p)), [(V2 >= V6)], [V5p = V5, V4p = V4, V2p = V2, V3p = V3, V6p = V6, V1p = V1], 71). % x2 >= x0
stmtsrc(71, 'assume(x2 >= x0);').
r(p(pc(main-17-42), data(V5, V4, V2, V3, V6, V1)), p(pc(main-16-43), data(V5p, V4p, V2p, V3p, V6p, V1p)), [], [V5p = V5, V4p = V4, V2p = V2, V3p = V3, V6p = V6, V1p = (V1 + 4)], 72). % sum := sum + 4
stmtsrc(72, 'sum = sum + 4;').
r(p(pc(main-14-42), data(V5, V4, V2, V3, V6, V1)), p(pc(main-17-42), data(V5p, V4p, V2p, V3p, V6p, V1p)), [(V2 +1 =< V6)], [V5p = V5, V4p = V4, V2p = V2, V3p = V3, V6p = V6, V1p = V1], 73). % x2 < x0
stmtsrc(73, 'assume(x2 < x0);').
r(p(pc(main-12-41), data(V5, V4, V2, V3, V6, V1)), p(pc(main-14-42), data(V5p, V4p, V2p, V3p, V6p, V1p)), [(V6 >= V3)], [V5p = V5, V4p = V4, V2p = V2, V3p = V3, V6p = V6, V1p = V1], 74). % x0 >= x1
stmtsrc(74, 'assume(x0 >= x1);').
r(p(pc(main-15-41), data(V5, V4, V2, V3, V6, V1)), p(pc(main-14-42), data(V5p, V4p, V2p, V3p, V6p, V1p)), [], [V5p = V5, V4p = V4, V2p = V2, V3p = V3, V6p = V6, V1p = (V1 + 4)], 75). % sum := sum + 4
stmtsrc(75, 'sum = sum + 4;').
r(p(pc(main-12-41), data(V5, V4, V2, V3, V6, V1)), p(pc(main-15-41), data(V5p, V4p, V2p, V3p, V6p, V1p)), [(V6 +1 =< V3)], [V5p = V5, V4p = V4, V2p = V2, V3p = V3, V6p = V6, V1p = V1], 76). % x0 < x1
stmtsrc(76, 'assume(x0 < x1);').
r(p(pc(main-10-40), data(V5, V4, V2, V3, V6, V1)), p(pc(main-12-41), data(V5p, V4p, V2p, V3p, V6p, V1p)), [(V3 >= V4)], [V5p = V5, V4p = V4, V2p = V2, V3p = V3, V6p = V6, V1p = V1], 77). % x1 >= x3
stmtsrc(77, 'assume(x1 >= x3);').
r(p(pc(main-13-40), data(V5, V4, V2, V3, V6, V1)), p(pc(main-12-41), data(V5p, V4p, V2p, V3p, V6p, V1p)), [], [V5p = V5, V4p = V4, V2p = V2, V3p = V3, V6p = V6, V1p = V1], 78). % sum := sum
stmtsrc(78, 'sum = sum;').
r(p(pc(main-10-40), data(V5, V4, V2, V3, V6, V1)), p(pc(main-13-40), data(V5p, V4p, V2p, V3p, V6p, V1p)), [(V3 +1 =< V4)], [V5p = V5, V4p = V4, V2p = V2, V3p = V3, V6p = V6, V1p = V1], 79). % x1 < x3
stmtsrc(79, 'assume(x1 < x3);').
r(p(pc(main-8-39), data(V5, V4, V2, V3, V6, V1)), p(pc(main-10-40), data(V5p, V4p, V2p, V3p, V6p, V1p)), [(V5 >= V5)], [V5p = V5, V4p = V4, V2p = V2, V3p = V3, V6p = V6, V1p = V1], 80). % x4 >= x4
stmtsrc(80, 'assume(x4 >= x4);').
r(p(pc(main-11-39), data(V5, V4, V2, V3, V6, V1)), p(pc(main-10-40), data(V5p, V4p, V2p, V3p, V6p, V1p)), [], [V5p = V5, V4p = V4, V2p = V2, V3p = V3, V6p = V6, V1p = (V1 + 1)], 81). % sum := sum + 1
stmtsrc(81, 'sum = sum + 1;').
r(p(pc(main-8-39), data(V5, V4, V2, V3, V6, V1)), p(pc(main-11-39), data(V5p, V4p, V2p, V3p, V6p, V1p)), [(V5 +1 =< V5)], [V5p = V5, V4p = V4, V2p = V2, V3p = V3, V6p = V6, V1p = V1], 82). % x4 < x4
stmtsrc(82, 'assume(x4 < x4);').
r(p(pc(main-6-38), data(V5, V4, V2, V3, V6, V1)), p(pc(main-8-39), data(V5p, V4p, V2p, V3p, V6p, V1p)), [(V4 >= V5)], [V5p = V5, V4p = V4, V2p = V2, V3p = V3, V6p = V6, V1p = V1], 83). % x3 >= x4
stmtsrc(83, 'assume(x3 >= x4);').
r(p(pc(main-9-38), data(V5, V4, V2, V3, V6, V1)), p(pc(main-8-39), data(V5p, V4p, V2p, V3p, V6p, V1p)), [], [V5p = V5, V4p = V4, V2p = V2, V3p = V3, V6p = V6, V1p = (V1 + 1)], 84). % sum := sum + 1
stmtsrc(84, 'sum = sum + 1;').
r(p(pc(main-6-38), data(V5, V4, V2, V3, V6, V1)), p(pc(main-9-38), data(V5p, V4p, V2p, V3p, V6p, V1p)), [(V4 +1 =< V5)], [V5p = V5, V4p = V4, V2p = V2, V3p = V3, V6p = V6, V1p = V1], 85). % x3 < x4
stmtsrc(85, 'assume(x3 < x4);').
r(p(pc(main-4-37), data(V5, V4, V2, V3, V6, V1)), p(pc(main-6-38), data(V5p, V4p, V2p, V3p, V6p, V1p)), [(V4 >= V2)], [V5p = V5, V4p = V4, V2p = V2, V3p = V3, V6p = V6, V1p = V1], 86). % x3 >= x2
stmtsrc(86, 'assume(x3 >= x2);').
r(p(pc(main-7-37), data(V5, V4, V2, V3, V6, V1)), p(pc(main-6-38), data(V5p, V4p, V2p, V3p, V6p, V1p)), [], [V5p = V5, V4p = V4, V2p = V2, V3p = V3, V6p = V6, V1p = V1], 87). % sum := sum
stmtsrc(87, 'sum = sum;').
r(p(pc(main-4-37), data(V5, V4, V2, V3, V6, V1)), p(pc(main-7-37), data(V5p, V4p, V2p, V3p, V6p, V1p)), [(V4 +1 =< V2)], [V5p = V5, V4p = V4, V2p = V2, V3p = V3, V6p = V6, V1p = V1], 88). % x3 < x2
stmtsrc(88, 'assume(x3 < x2);').
r(p(pc(main-2-36), data(V5, V4, V2, V3, V6, V1)), p(pc(main-4-37), data(V5p, V4p, V2p, V3p, V6p, V1p)), [(V3 >= V2)], [V5p = V5, V4p = V4, V2p = V2, V3p = V3, V6p = V6, V1p = V1], 89). % x1 >= x2
stmtsrc(89, 'assume(x1 >= x2);').
r(p(pc(main-5-36), data(V5, V4, V2, V3, V6, V1)), p(pc(main-4-37), data(V5p, V4p, V2p, V3p, V6p, V1p)), [], [V5p = V5, V4p = V4, V2p = V2, V3p = V3, V6p = V6, V1p = (V1 + 3)], 90). % sum := sum + 3
stmtsrc(90, 'sum = sum + 3;').
r(p(pc(main-2-36), data(V5, V4, V2, V3, V6, V1)), p(pc(main-5-36), data(V5p, V4p, V2p, V3p, V6p, V1p)), [(V3 +1 =< V2)], [V5p = V5, V4p = V4, V2p = V2, V3p = V3, V6p = V6, V1p = V1], 91). % x1 < x2
stmtsrc(91, 'assume(x1 < x2);').
r(p(pc(main-1-35), data(V5, V4, V2, V3, V6, V1)), p(pc(main-2-36), data(V5p, V4p, V2p, V3p, V6p, V1p)), [(V2 >= V3)], [V5p = V5, V4p = V4, V2p = V2, V3p = V3, V6p = V6, V1p = V1], 92). % x2 >= x1
stmtsrc(92, 'assume(x2 >= x1);').
r(p(pc(main-3-35), data(V5, V4, V2, V3, V6, V1)), p(pc(main-2-36), data(V5p, V4p, V2p, V3p, V6p, V1p)), [], [V5p = V5, V4p = V4, V2p = V2, V3p = V3, V6p = V6, V1p = 2], 93). % sum := 2
stmtsrc(93, 'sum = 2;').
r(p(pc(main-1-35), data(V5, V4, V2, V3, V6, V1)), p(pc(main-3-35), data(V5p, V4p, V2p, V3p, V6p, V1p)), [(V2 +1 =< V3)], [V5p = V5, V4p = V4, V2p = V2, V3p = V3, V6p = V6, V1p = V1], 94). % x2 < x1
stmtsrc(94, 'assume(x2 < x1);').
r(p(pc(main-0-34), data(V5, V4, V2, V3, V6, V1)), p(pc(main-1-35), data(V5p, V4p, V2p, V3p, V6p, V1p)), [], [V5p = V5, V4p = V4, V2p = V2, V3p = V3, V6p = V6, V1p = 0], 95). % sum := 0
stmtsrc(95, 'sum = 0;').
