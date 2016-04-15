/* For copyright information, see olden_v1.0/COPYRIGHT */

/*
 * VECTMATH.H: include file for vector/matrix operations.
 * Copyright (c) 1991, Joshua E. Barnes, Honolulu, HI.
 * 	    It's free because it's yours.
 */

#ifndef THREEDIM
#  ifndef TWODIM
#    ifndef NDIM
#      define THREEDIM
#    endif
#  endif
#endif

#ifdef TWODIM
#  define NDIM 2
#endif

#ifdef THREEDIM
#  define NDIM 3
#endif

typedef real vector[NDIM], matrix[NDIM][NDIM];

/*
 * Vector operations.
 */

#define CLRV(v)			/* CLeaR Vector */			\
{									\
    register int _i;							\
    for (_i = 0; _i < NDIM; _i++)					\
        (v)[_i] = 0.0;							\
}

#define UNITV(v,j)		/* UNIT Vector */			\
{									\
    register int _i;							\
    for (_i = 0; _i < NDIM; _i++)					\
        (v)[_i] = (_i == (j) ? 1.0 : 0.0);				\
}

#define SETV(v,u)		/* SET Vector */			\
{ 									\
    register int _i; 							\
    for (_i = 0; _i < NDIM; _i++) 					\
        (v)[_i] = (u)[_i]; 						\
}


#define ADDV(v,u,w)		/* ADD Vector */			\
{									\
    register int _i;							\
    for (_i = 0; _i < NDIM; _i++)					\
        (v)[_i] = (u)[_i] + (w)[_i];					\
}

#define SUBV(v,u,w)		/* SUBtract Vector */			\
{									\
    register int _i;							\
    for (_i = 0; _i < NDIM; _i++)					\
        (v)[_i] = (u)[_i] - (w)[_i];					\
}

#define MULVS(v,u,s)		/* MULtiply Vector by Scalar */		\
{									\
    register int _i;							\
    for (_i = 0; _i < NDIM; _i++)					\
        (v)[_i] = (u)[_i] * (s);					\
}


#define DIVVS(v,u,s)		/* DIVide Vector by Scalar */		\
{									\
    register int _i;							\
    for (_i = 0; _i < NDIM; _i++)					\
        (v)[_i] = (u)[_i] / (s);					\
}


#define DOTVP(s,v,u)		/* DOT Vector Product */		\
{									\
    register int _i;							\
    (s) = 0.0;								\
    for (_i = 0; _i < NDIM; _i++)					\
        (s) += (v)[_i] * (u)[_i];					\
}


#define ABSV(s,v)		/* ABSolute value of a Vector */	\
{									\
    double _tmp, sqrt();                                                \
    register int _i;							\
    _tmp = 0.0;								\
    for (_i = 0; _i < NDIM; _i++)					\
        _tmp += (v)[_i] * (v)[_i];					\
    (s) = sqrt(_tmp);                                                   \
}

#define DISTV(s,u,v)		/* DISTance between Vectors */        	\
{									\
    double _tmp, sqrt();                                                \
    register int _i;							\
    _tmp = 0.0;								\
    for (_i = 0; _i < NDIM; _i++)					\
        _tmp += ((u)[_i]-(v)[_i]) * ((u)[_i]-(v)[_i]);		        \
    (s) = sqrt(_tmp);                                                   \
}

#ifdef TWODIM

#define CROSSVP(s,v,u)		/* CROSS Vector Product */		\
{									\
    (s) = (v)[0]*(u)[1] - (v)[1]*(u)[0];				\
}

#endif

#ifdef THREEDIM

#define CROSSVP(v,u,w)		/* CROSS Vector Product */		\
{									\
    (v)[0] = (u)[1]*(w)[2] - (u)[2]*(w)[1];				\
    (v)[1] = (u)[2]*(w)[0] - (u)[0]*(w)[2];				\
    (v)[2] = (u)[0]*(w)[1] - (u)[1]*(w)[0];				\
}

#endif

#define INCADDV(v,u)             /* INCrementally ADD Vector */         \
{									\
    register int _i;                                                    \
    for (_i = 0; _i < NDIM; _i++)                                       \
        (v)[_i] += (u)[_i];                                             \
}

#define INCSUBV(v,u)             /* INCrementally SUBtract Vector */    \
{									\
    register int _i;                                                    \
    for (_i = 0; _i < NDIM; _i++)                                       \
        (v)[_i] -= (u)[_i];                                             \
}

#define INCMULVS(v,s)	/* INCrementally MULtiply Vector by Scalar */	\
{									\
    register int _i;                                                    \
    for (_i = 0; _i < NDIM; _i++)                                       \
        (v)[_i] *= (s);                                                 \
}

#define INCDIVVS(v,s)	/* INCrementally DIVide Vector by Scalar */	\
{									\
    register int _i;                                                    \
    for (_i = 0; _i < NDIM; _i++)                                       \
        (v)[_i] /= (s);                                                 \
}

/*
 * Matrix operations.
 */

#define CLRM(p)			/* CLeaR Matrix */			\
{									\
    register int _i, _j;						\
    for (_i = 0; _i < NDIM; _i++)					\
        for (_j = 0; _j < NDIM; _j++)					\
	    (p)[_i][_j] = 0.0;						\
}

#define SETMI(p)		/* SET Matrix to Identity */		\
{									\
    register int _i, _j;						\
    for (_i = 0; _i < NDIM; _i++)					\
        for (_j = 0; _j < NDIM; _j++)					\
	    (p)[_i][_j] = (_i == _j ? 1.0 : 0.0);			\
}

#define SETM(p,q)		/* SET Matrix */			\
{									\
    register int _i, _j;						\
    for (_i = 0; _i < NDIM; _i++)					\
        for (_j = 0; _j < NDIM; _j++)					\
	    (p)[_i][_j] = (q)[_i][_j];					\
}

#define TRANM(p,q)		/* TRANspose Matrix */			\
{									\
    register int _i, _j;						\
    for (_i = 0; _i < NDIM; _i++)					\
        for (_j = 0; _j < NDIM; _j++)					\
	    (p)[_i][_j] = (q)[_j][_i];					\
}

#define ADDM(p,q,r)		/* ADD Matrix */			\
{									\
    register int _i, _j;						\
    for (_i = 0; _i < NDIM; _i++)					\
        for (_j = 0; _j < NDIM; _j++)					\
	    (p)[_i][_j] = (q)[_i][_j] + (r)[_i][_j];			\
}

#define SUBM(p,q,r)		/* SUBtract Matrix */			\
{									\
    register int _i, _j;						\
    for (_i = 0; _i < NDIM; _i++)					\
        for (_j = 0; _j < NDIM; _j++)					\
	    (p)[_i][_j] = (q)[_i][_j] - (r)[_i][_j];			\
}

#define MULM(p,q,r)		/* Multiply Matrix */			\
{									\
    register int _i, _j, _k;						\
    for (_i = 0; _i < NDIM; _i++)					\
	for (_j = 0; _j < NDIM; _j++) {					\
	    (p)[_i][_j] = 0.0;						\
            for (_k = 0; _k < NDIM; _k++)				\
		(p)[_i][_j] += (q)[_i][_k] * (r)[_k][_j];		\
        }								\
}

#define MULMS(p,q,s)		/* MULtiply Matrix by Scalar */		\
{									\
    register int _i, _j;						\
    for (_i = 0; _i < NDIM; _i++)				        \
        for (_j = 0; _j < NDIM; _j++)					\
	    (p)[_i][_j] = (q)[_i][_j] * (s);				\
}

#define DIVMS(p,q,s)		/* DIVide Matrix by Scalar */		\
{									\
    register int _i, _j;						\
    for (_i = 0; _i < NDIM; _i++)					\
        for (_j = 0; _j < NDIM; _j++)					\
	    (p)[_i][_j] = (q)[_i][_j] / (s);				\
}

#define MULMV(v,p,u)		/* MULtiply Matrix by Vector */		\
{									\
    register int _i, _j;						\
    for (_i = 0; _i < NDIM; _i++) {					\
	(v)[_i] = 0.0;							\
	for (_j = 0; _j < NDIM; _j++)					\
	    (v)[_i] += (p)[_i][_j] * (u)[_j];				\
    }									\
}

#define OUTVP(p,v,u)		/* OUTer Vector Product */		\
{									\
    register int _i, _j;						\
    for (_i = 0; _i < NDIM; _i++)					\
        for (_j = 0; _j < NDIM; _j++)					\
	    (p)[_i][_j] = (v)[_i] * (u)[_j];				\
}

#define TRACEM(s,p)		/* TRACE of Matrix */			\
{									\
    register int _i;							\
    (s) = 0.0;								\
    for (_i = 0.0; _i < NDIM; _i++)					\
	(s) += (p)[_i][_i];						\
}

/*
 * Misc. impure operations.
 */

#define SETVS(v,s)		/* SET Vector to Scalar */		\
{									\
    register int _i;							\
    for (_i = 0; _i < NDIM; _i++)					\
        (v)[_i] = (s);							\
}

#define ADDVS(v,u,s)		/* ADD Vector and Scalar */		\
{									\
    register int _i;							\
    for (_i = 0; _i < NDIM; _i++)					\
        (v)[_i] = (u)[_i] + (s);					\
}

#define SETMS(p,s)		/* SET Matrix to Scalar */		\
{									\
    register int _i, _j;						\
    for (_i = 0; _i < NDIM; _i++)					\
        for (_j = 0; _j < NDIM; _j++)					\
	    (p)[_i][_j] = (s);						\
}
