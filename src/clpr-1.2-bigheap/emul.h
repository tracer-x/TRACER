/***************************************************************
 *  CLP(R)                                                     *
 *  (c) Copyright International Business Machines Corporation  *
 *  (1989) 1991, 1992 All Rights Reserved                      *
 *  Version: 1.2                                               *
 *  File: emul.h                                               *
 ***************************************************************/

#define CPFRAME_HEIGHT     9        /* Number of entries below */
#define NEXTEP             0        /* Next environment pointer */
#define PREVCP            -1        /* Previous choice point on stack */
#define OHEAPTOP          -2        /* Previous heap top */
#define OTRTOP            -3        /* Previous trail top */
#define CPRETPT           -4        /* Return Point */
#define OCURAR            -5        /* Previous current activation record */
#define NUMPARS           -6        /* Number of parameters */
#define SOLVER_ID         -7        /* Max solver id */
#define SLACK_ID          -8        /* Max solver slack id */

#define FRAME_HEIGHT       2
#define FATHER             0
#define RETPT             -1

#define MAX_TAGS       (16)
#define TAG_CON        (0x80000000)
#define TAG_STR        (0x90000000)
#define TAG_NUM        (0xa0000000)
#define TAG_PAR        (0xb0000000)
#define TAG_MISC       (0xc0000000)
#define TAG_CONS       (0xd0000000)
#define TAG_NIL        (0xe0000000)
#define TAG_DAEMON     (0xf0000000)
#define TAG_UNBOUND    (0)

#define BTK_BIND        (0x00000000) /* trail tags */
#define BTK_NULL_EQN    (0x10000000)
#define BTK_EQN         (0x20000000)
#define BTK_INEQ        (0x30000000)
#define BTK_NULL_INEQ   (0x40000000)
#define BTK_NLIN        (0x50000000)
#define BTK_DBIND       (0x60000000)
#define BTK_TEST		(0x70000000)
#define BTK_TEST2		(0x80000000)
#define BTK_TEST3		(0x90000000)

#define NUM_BTK_BIND        (0)
#define NUM_BTK_NULL_EQN    (1)
#define NUM_BTK_EQN         (2)
#define NUM_BTK_INEQ        (3)
#define NUM_BTK_NULL_INEQ   (4)
#define NUM_BTK_NLIN        (5)
#define NUM_BTK_DBIND       (6)

#define DBG_MASK_ON         (1)
#define DBG_MASK_SPY        (2)

#define IO_READ             (1)
#define IO_WRITE            (2)
#define IO_APPEND           (3)  /* Added by Jorge */

#define GOAL_START          (5)
#define FAIL_ADDR           (0)
#define GFAIL_ADDR          (1)

#define SPLMEM_SZ				(13)
#define SPLMEM_TRUE_ATOM		(0)	
#define SPLMEM_SEE_INPUT_T		(1)
#define SPLMEM_EFILE_1			(2)
#define SPLMEM_EFILE_2			(3)
#define SPLMEM_OUTFILE_T		(4)
#define SPLMEM_INFILE_T			(5)
#define SPLMEM_FIRST			(6)
#define SPLMEM_TMP				(7)
#define SPLMEM_NEW_PROJ_VARS	(8)
#define SPLMEM_RETRACT_RULE_T2	(9)
#define SPLMEM_HEAD_HTERM		(10)
#define SPLMEM_BODY_HTERM		(11)
#define SPLMEM_NT				(12)

/*---------------------------------------------------------------------------*/

#define bit1(i) ((i) & 0x00000001)
#define bit2(i) ((i) & 0x00000002)
#define bit3(i) ((i) & 0x00000004)
#define bit4(i) ((i) & 0x00000008)
#define bit5(i) ((i) & 0x00000010)
#define bit6(i) ((i) & 0x00000020)

#define set_bit1(i) (i) |= 0x00000001
#define set_bit2(i) (i) |= 0x00000002
#define set_bit3(i) (i) |= 0x00000004
#define set_bit4(i) (i) |= 0x00000008
#define set_bit5(i) (i) |= 0x00000010
#define set_bit6(i) (i) |= 0x00000020

#define unset_bit1(i) (i) &= 0xfffffffe
#define unset_bit2(i) (i) &= 0xfffffffd
#define unset_bit3(i) (i) &= 0xfffffffb
#define unset_bit4(i) (i) &= 0xfffffff7
#define unset_bit5(i) (i) &= 0xffffffef
#define unset_bit6(i) (i) &= 0xffffffdf

/*---------------------------------------------------------------------------*/

#define BIGHEAP

#define is_stackaddr(i)			(stack && ((i) >= (int) stack && (i) < (int) stack + MSTACK * sizeof(int)))
#define is_trailaddr(i)			(trail && ((i) >= (int) trail && (i) < (int) trail + TRAIL_SZ * sizeof(int)))
#define is_unifystackaddr(i)	(unifystack && ((i) >= (int) unifystack && (i) < (int) unifystack + MAX_UNIFY_LEVELS * sizeof(int)))
#define is_splmemaddr(i)		(splmem && ((i) >= (int) splmem && (i) < (int) splmem + SPLMEM_SZ * sizeof(int)))

#define stacktags_index(a)		(((a) - (int) stack) / sizeof(int))
#define trailtags_index(a)	 	(MSTACK + (((a) - (int) trail) / sizeof(int)))
#define unifytags_index(a) 		(((a) - (int) unifystack) / sizeof(int))
#define spltags_index(a) 		(((a) - (int) splmem) / sizeof(int))

#define safe(x) (((x) > lastcp) || ((x) < lstack && (x) >= safeheap))

#ifdef BIGHEAP
#define tag(i) (tag_func((int) (&(i))))
#else
#define tag(i) (((int) (i)) & 0xF0000000)
#endif

#ifdef AIX        /* problem with cc with unsigned shifts ! */
#define tagnum(i) (((i) >> 28) & 0xF)
#else
#define tagnum(i) ( ((unsigned)(i)) >> 28)
#endif

#ifdef BIGHEAP
#define mask(i) (i)
#else
#define mask(i) ((i) & 0x0FFFFFFF)
#endif

#ifdef BIGHEAP
#define addtag(l, t, r) (addtag_func((int) (l), (int) (t), (int) (r)))
#else
#define addtag(t, i) ((int) ((t) | (((int)(i)) & 0x0FFFFFFF)))
#endif

#ifdef BIGHEAP
#define addtag1(l, t, r) (addtag_func((unsigned int) (l), (unsigned int) (t), (unsigned int) (r)))
#else
#define addtag1(t, i) ((unsigned int) (((unsigned int) (t)) | (i)))
#endif

#ifdef BIGHEAP
#define addtagcmp(l, t, r) (addtagcmp_func((int) (l), (int) (t), (int) (r)))
#endif

#define add_misctag(i) (i)

/*---------------------------------------------------------------------------*/

#ifdef IBMRT
#ifdef AIX
#define pmask(i) ((((int) (i)) & 0x0FFFFFFF) | 0x20000000)
#else
#define pmask(i) ((((int) (i)) & 0x0FFFFFFF) | 0x10000000)
#endif
#else
#ifdef HP835
#define pmask(i) ((((int) (i)) & 0x0FFFFFFF) | 0x40000000)
#else
#ifdef MIPS
#define pmask(i) ((((int) (i)) & 0x0FFFFFFF) | 0x10000000)
#else
#ifdef BIGHEAP
#define pmask(i) (i)
#else
#define pmask(i) (((int) (i)) & 0x0FFFFFFF)
#endif
#endif
#endif
#endif

/*---------------------------------------------------------------------------*/

#define is_con(t) (tag(*(t)) == TAG_CON)
#define is_nil(t) (tag(*(t)) == TAG_NIL)
#define is_func(t) (tag(*(t)) == TAG_STR)
#define is_cons(t) (tag(*(t)) == TAG_CONS)
#define is_param(t) (tag(*(t)) == TAG_PAR)
#define is_num(t, v) ((tag(*(t)) == TAG_PAR) && is_ground(mask(*(t)), v))

#define is_bound_var(i) ((i) > 0)
#define is_unbound_var(i) (!(i))
#define is_daemon(i) (tag(*(i)) == TAG_DAEMON)
#define is_pointer(i) ((int)(i) >= 0)
#define is_data(i) ((i) < 0)

#ifdef BIGHEAP
#define make_unbound_var(i) (make_unbound_var_func(i))
#else
#define make_unbound_var(i) (*(i) = (int) NULL)
#endif
#ifdef BIGHEAP
#define make_bound_var(i, j) (make_bound_var_addr_func((i), (j)))
#define make_bound_var_val(i, t, j) (make_bound_var_val_func((i), (t), (j)))
#else
#define make_bound_var(i, j) (*(i) = (int) (j))
#endif

#define is_stack_ptr(p) (p >= lstack)
#define is_heap_ptr(p) (p < heaptop && p >= heap)
#define below_heap(p) (p < heaptop)

#define arity_of(t)		(functors[mask(t)].arity)
#define string_of(t)    (functors[mask(t)].pname)
#define opkind_of(t)    (functors[mask(t)].special)
#define intpc(p) ((((int) (p)) - ((int) code)) / sizeof(int))
#define ptrpc(i) ((int *) (code + (i)))
#define var2pos(p, base) ((((int) (p)) - ((int) base)) / sizeof(int))

#define head_of(t) ((int *) (pmask(*(t))))
#define tail_of(t) (((int *) pmask(*(t))) + 1)

/*---------------------------------------------------------------------------*/

#ifdef BIGHEAP
#define deref(p) while (*(p) && !tag(*(p))) p = (int *) *(p);
#else
#define deref(p) while (*(p) > 0) p = (int *) *(p);
#endif

#ifdef BIGHEAP
#define push_trail(btk_type, addr) \
    /* NEWTAG trail[trtop++] = (int *) addtag(btk_type, (int *) (addr)) */ addtag(&(trail[trtop++]), btk_type, (int *) (addr))
#else
#define push_trail(btk_type, addr) \
	store_trail_bits(trtop, addr); \
    trail[trtop++] = (int *) addtag(btk_type, (int *) (addr))
#endif

#ifdef BIGHEAP
#define push_check_trail(btk_type, addr) \
    if ((addr) < safeheap || ((addr) > lstack && (addr) < lastcp)) \
        /* NEWTAG trail[trtop++] = (int *) addtag(btk_type, (int *) (addr)); */ addtag(&(trail[trtop++]), btk_type, (int *) (addr))
#else
#define push_check_trail(btk_type, addr) \
    if ((addr) < safeheap || ((addr) > lstack && (addr) < lastcp)) { \
		store_trail_bits(trtop, addr); \
        trail[trtop++] = (int *) addtag(btk_type, (int *) (addr)); \
    }
#endif

#ifndef BIGHEAP
#define store_trail_bits0(i) \
	tagtrail[i] = 0;
#endif

#ifndef BIGHEAP
#define store_trail_bits(i, t) \
	tagtrail[i] = ((unsigned) (t)) >> 28;
#endif

#define check_tag_par(tmp) { \
	deref(tmp); \
	if (is_unbound_var(*(tmp))) { \
		/* NEWTAG *(tmp) = addtag(TAG_PAR, ++solver_id); */ addtag((tmp), TAG_PAR, ++solver_id); \
		push_check_trail(BTK_BIND, (tmp)); \
	} else if (is_daemon(tmp)) { \
		make_bound_var(tmp, heaptop); \
		/* NEWTAG *heaptop++ = addtag(TAG_PAR, ++solver_id); */ addtag(heaptop++, TAG_PAR, ++solver_id); \
		push_check_trail(BTK_DBIND, tmp); \
		make_runable(tmp + 1); \
		tmp = (int *) pmask(*tmp); \
	} else if (!is_param(tmp)) goto FAIL; \
}

#define make_tag_par(tmp) { \
	/* NEWTAG *(tmp) = addtag(TAG_PAR, ++solver_id); */ addtag((tmp), TAG_PAR, ++solver_id); \
	push_check_trail(BTK_BIND, (tmp)); \
}

#define caseop(x) case (int) x
