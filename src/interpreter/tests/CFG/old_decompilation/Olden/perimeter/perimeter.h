/* For copyright information, see olden_v1.0/COPYRIGHT */

#define NULL 0
#include <cm/cmmd.h>

#ifdef FUTURES
#include "future-cell.h"
#endif
#include "mem-ref.h"

typedef enum {black, white, grey} Color;
typedef enum {northwest, northeast, southwest, southeast} ChildType;
typedef enum {north, east, south, west} Direction;

typedef struct quad_struct {
  Color color;
  ChildType childtype;
  struct quad_struct *nw {50};
  struct quad_struct *ne {50};
  struct quad_struct *sw {50};
  struct quad_struct *se {50};
  struct quad_struct *parent {50};
} *QuadTree;

QuadTree MakeTree(int size, int center_x, int center_y, int lo_proc,
                  int hi_proc, QuadTree parent, ChildType ct, int level);


