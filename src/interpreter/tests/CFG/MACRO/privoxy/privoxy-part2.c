
typedef void pcre;
typedef unsigned int size_t;
typedef int BOOL;
typedef unsigned char uschar;
struct real_pcre {
   unsigned long magic_number ;
   size_t size ;
   unsigned char const   *tables ;
   unsigned long options ;
   uschar top_bracket ;
   uschar top_backref ;
   uschar first_char ;
   uschar req_char ;
   uschar code[1] ;
};
typedef struct real_pcre real_pcre;
struct compile_data {
   uschar const   *lcc ;
   uschar const   *fcc ;
   uschar const   *cbits ;
   uschar const   *ctypes ;
};
typedef struct compile_data compile_data;

// External functions 
BOOL check_posix_syntax(uschar const   *ptr , uschar const   **endptr , compile_data *cd ) {}
int check_posix_name(uschar const   *ptr , int len ) {}
int check_escape(uschar const   **ptrptr , char const   **errorptr , int bracount , int options , BOOL isclass , compile_data *cd ) {}
BOOL is_counted_repeat(uschar const   *p , compile_data *cd ) {}
uschar const   *read_repeat_counts(uschar const   *p , int *minp , int *maxp , char const   **errorptr , compile_data *cd ) {}
void *memcpy(void *  dest__ , void const   *  src__ , size_t n__ ) {}
void *memmove(void *dest__ , void const   *src__ , size_t n__ ) {}
void *memset(void *s__ , int c__ , size_t n__ ) {}
char *strdup(char const   *s__ )  {}
void free(void *ptr__ ) {}
void **pcre_malloc(size_t  a) {}
void *pcre_free(void * a) {}
BOOL is_anchored(uschar const   *code , int *options ) {}
int find_firstchar(uschar const   *code , int *options ) {}
BOOL is_startline(uschar const   *code ) {}
int find_fixedlength(uschar *code , int options ) {}


/* extern BOOL check_posix_syntax(uschar const   *ptr , uschar const   **endptr , compile_data *cd ) ; */
/* extern int check_posix_name(uschar const   *ptr , int len ) ; */
/* extern int check_escape(uschar const **ptrptr,char const   **errorptr , int bracount , int options , BOOL isclass , compile_data *cd ) ; */
/* extern BOOL is_counted_repeat(uschar const   *p , compile_data *cd ) ; */
/* extern uschar const   *read_repeat_counts(uschar const   *p , int *minp , int *maxp , char const   **errorptr , compile_data *cd ) ; */
/* extern void *memcpy(void *  dest__ , void const   *  src__ , size_t n__ ) ; */
/* extern void *memmove(void *dest__ , void const   *src__ , size_t n__ ) ; */
/* extern void *memset(void *s__ , int c__ , size_t n__ ) ; */
/* extern char *strdup(char const   *s__ )  ; */
/* extern void free(void *ptr__ ) ; */
/* extern void **pcre_malloc(size_t  a) ; */
/* extern void *pcre_free(void * a) ; */
/* extern BOOL is_anchored(uschar const   *code , int *options ) ; */
/* extern int find_firstchar(uschar const   *code , int *options ) ; */
/* extern BOOL is_startline(uschar const   *code ) ; */
/* extern int find_fixedlength(uschar *code , int options ) ; */

// Global variables
unsigned char pcre_default_tables[1088]  ;
int const   posix_class_maps[39]  ;

int INF__;

static BOOL compile_regex(int options , int optchanged , int *brackets , uschar **codeptr ,
                          uschar const   **ptrptr , char const   **errorptr , BOOL lookbehind ,
                          int condref , int *reqchar , int *countlits , compile_data *cd ) 
{ uschar const   *ptr ;
  uschar *code ;
  uschar *last_branch ;
  uschar *start_bracket ;
  uschar *reverse_count ;
  int oldoptions ;
  int branchreqchar ;
  int branchcountlits ;
  uschar *tmp ;
  uschar *tmp_0__ ;
  int length ;
  uschar *tmp_1__ ;
  uschar *tmp_2__ ;
  uschar *tmp_3__ ;
  uschar *tmp_4__ ;
  uschar *tmp_5__ ;
  BOOL tmp_6__ ;
  uschar *tmp_7__ ;
  uschar *tmp_8__ ;
  uschar *tmp_9__ ;
  uschar *tmp_10__ ;
  uschar *tmp_11__ ;

  {
  ptr = (*ptrptr);
  code = (*codeptr);
  last_branch = code;
  start_bracket = code;
  reverse_count = (uschar *)((void *)0);
  oldoptions = options & 7;
  (*reqchar) = -1;
  (*countlits) = 21474;
  code += 3;
  if (condref >= 0) {
    tmp = code;
    code ++;
    (*tmp) = 67;
    tmp_0__ = code;
    code ++;
    (*tmp_0__) = (unsigned char )condref;
  }
  while (INF__>0) {
    // while (1) {
    if (optchanged >= 0) {
      tmp_1__ = code;
      code ++;
      (*tmp_1__) = 12;
      tmp_2__ = code;
      code ++;
      (*tmp_2__) = (unsigned char )optchanged;
      options = (options & -8) | optchanged;
    }
    if (lookbehind) {
      tmp_3__ = code;
      code ++;
      (*tmp_3__) = 64;
      reverse_count = code;
      tmp_4__ = code;
      code ++;
      (*tmp_4__) = 0;
      tmp_5__ = code;
      code ++;
      (*tmp_5__) = 0;
    }
    tmp_6__ = compile_branch(options, brackets, & code, & ptr, errorptr, & optchanged,
                             & branchreqchar, & branchcountlits, cd);
    if (! tmp_6__) {
      (*ptrptr) = ptr;
      return (0);
    }
    length = code - last_branch;
    (*(last_branch + 1)) = (unsigned char )(length >> 8);
    (*(last_branch + 2)) = (unsigned char )(length & 255);
    if ((*reqchar) != -2) {
      if (branchreqchar >= 0) {
        if ((*reqchar) == -1) {
          (*reqchar) = branchreqchar;
        } else {
          if ((*reqchar) != branchreqchar) {
            (*reqchar) = -2;
          }
        }
      } else {
        (*reqchar) = -2;
      }
    }
    if (branchcountlits < (*countlits)) {
      (*countlits) = branchcountlits;
    }
    if (lookbehind) {
      (*code) = 0;
      length = find_fixedlength(last_branch, options);
      if (length < 0) {
        (*errorptr) = "lookbehind assertion is not fixed length";
        (*ptrptr) = ptr;
        return (0);
      }
      (*(reverse_count + 0)) = (unsigned char )(length >> 8);
      (*(reverse_count + 1)) = (unsigned char )(length & 255);
    }
    if ((int )(*ptr) != 124) {
      length = code - start_bracket;
      tmp_7__ = code;
      code ++;
      (*tmp_7__) = 57;
      tmp_8__ = code;
      code ++;
      (*tmp_8__) = (unsigned char )(length >> 8);
      tmp_9__ = code;
      code ++;
      (*tmp_9__) = (unsigned char )(length & 255);
      if (optchanged >= 0) {
        tmp_10__ = code;
        code ++;
        (*tmp_10__) = 12;
        tmp_11__ = code;
        code ++;
        (*tmp_11__) = (unsigned char )oldoptions;
      }
      (*codeptr) = code;
      (*ptrptr) = ptr;
      return (1);
    }
    (*code) = 56;
    last_branch = code;
    code += 3;
    ptr ++;
  }
  return (0);
}
}

pcre *pcre_compile(char const   *pattern , int options , char const   **errorptr ,
                   int *erroroffset , unsigned char const   *tables ) 
{ real_pcre *re ;
  int length ;
  int runlength ;
  int c ;
  int reqchar ;
  int countlits ;
  int bracount ;
  int top_backref ;
  int branch_extra ;
  int branch_newextra ;
  unsigned int brastackptr ;
  size_t size ;
  uschar *code ;
  uschar const   *ptr ;
  compile_data compile_block ;
  int brastack[200] ;
  uschar bralenstack[200] ;
  int min ;
  int max ;
  int class_charcount ;
  uschar const   *save_ptr ;
  int refnum ;
  BOOL tmp ;
  BOOL tmp_0__ ;
  int ch ;
  int tmp_1__ ;
  BOOL tmp_2__ ;
  int set ;
  int unset ;
  int *optset ;
  unsigned int tmp_3__ ;
  int minval ;
  int maxval ;
  int duplength ;
  BOOL tmp_4__ ;
  uschar const   *saveptr ;
  uschar *tmp_6__ ;
  int temp_options ;
  int ch_0__ ;
  int tmp_7__ ;
  BOOL tmp_8__ ;
  BOOL tmp_9__ ;

  {
  length = 3;
  bracount = 0;
  top_backref = 0;
  branch_extra = 0;
  brastackptr = 0;
  if ((options & 2048) != 0) {
    (*errorptr) = "this version of PCRE is not compiled with PCRE_UTF8 support";
    return ((void *)0);
  }
  if ((unsigned int )errorptr == (unsigned int )((void *)0)) {
    return ((void *)0);
  }
  (*errorptr) = (char const   *)((void *)0);
  if ((unsigned int )erroroffset == (unsigned int )((void *)0)) {
    (*errorptr) = "erroffset passed as NULL";
    return ((void *)0);
  }
  (*erroroffset) = 0;
  if ((options & -2688) != 0) {
    (*errorptr) = "unknown option bit(s) set";
    return ((void *)0);
  }
  if ((unsigned int )tables == (unsigned int )((void *)0)) {
    tables = (unsigned char const   *)(pcre_default_tables);
  }
  compile_block.lcc = tables + 0;
  compile_block.fcc = tables + 256;
  compile_block.cbits = tables + 512;
  compile_block.ctypes = tables + 832;
  ptr = (uschar const   *)(pattern - 1);
  while (INF__>0) {
    // while (1) {
    ptr ++;
    c = (int )(*ptr);
    if (! (c != 0)) {
      break;
    }
    if ((options & 8) != 0) {
      if (((int )(*(compile_block.ctypes + c)) & 1) != 0) {
        //continue;
      }
      if (c == 35) {
	while (INF__>0) {
	  //while (1) {
          ptr ++;
          c = (int )(*ptr);
          if (c != 0) {
            if (! (c != 10)) {
              break;
            }
          } else {
            break;
          }
        }
        //continue;
      }
    }
    switch (c) {
    case 92: 
    save_ptr = ptr;
    c = check_escape(& ptr, errorptr, bracount, options, 0, & compile_block);
    if ((unsigned int )(*errorptr) != (unsigned int )((void *)0)) {
      //goto PCRE_ERROR_RETURN;
    }
    if (c >= 0) {
      ptr = save_ptr;
      c = '\\';
      //goto NORMAL_CHAR;
    }
    length ++;
    if (c <= -12) {
      refnum = - c - 12;
      if (refnum > top_backref) {
        top_backref = refnum;
      }
      length ++;
      if ((int )(*(ptr + 1)) == 123) {
        tmp = is_counted_repeat(ptr + 2, & compile_block);
        if (tmp) {
          ptr = read_repeat_counts(ptr + 2, & min, & max, errorptr, & compile_block);
          if ((unsigned int )(*errorptr) != (unsigned int )((void *)0)) {
            //goto PCRE_ERROR_RETURN;
          }
          if (min == 0) {
            if (max == 1) {
              length ++;
            } else {
              if (max == -1) {
                length ++;
              } else {
                //goto _L;
              }
            }
          } else {
            _L:  
            if (min == 1) {
              if (max == -1) {
                length ++;
              } else {
                length += 5;
              }
            } else {
              length += 5;
            }
          }
          if ((int )(*(ptr + 1)) == 63) {
            ptr ++;
          }
        }
      }
    }
    //continue;
    case 94: ;
    case 46: ;
    case 36: ;
    case 42: ;
    case 43: ;
    case 63: 
    length ++;
    //continue;
    case 123: 
    tmp_0__ = is_counted_repeat(ptr + 1, & compile_block);
    if (! tmp_0__) {
      //goto NORMAL_CHAR;
    }
    ptr = read_repeat_counts(ptr + 1, & min, & max, errorptr, & compile_block);
    if ((unsigned int )(*errorptr) != (unsigned int )((void *)0)) {
      //goto PCRE_ERROR_RETURN;
    }
    if (min == 0) {
      if (max == 1) {
        length ++;
      } else {
        if (max == -1) {
          length ++;
        } else {
          //goto _L_1__;
        }
      }
    } else {
      _L_1__:  
      if (min == 1) {
        if (max == -1) {
          length ++;
        } else {
          //goto _L_0__;
        }
      } else {
        _L_0__:  
        length --;
        if (min == 1) {
          length ++;
        } else {
          if (min > 0) {
            length += 4;
          }
        }
        if (max > 0) {
          length += 4;
        } else {
          length += 2;
        }
      }
    }
    if ((int )(*(ptr + 1)) == 63) {
      ptr ++;
    }
    //continue;
    case 124: 
    length += 3 + branch_extra;
    //continue;
    case 91: 
    class_charcount = 0;
    ptr ++;
    if ((int )(*ptr) == 94) {
      ptr ++;
    }
    while (INF__>0) {
      //while (1) {
      if ((int )(*ptr) == 92) {
        tmp_1__ = check_escape(& ptr, errorptr, bracount, options, 1, & compile_block);
        ch = tmp_1__;
        if ((unsigned int )(*errorptr) != (unsigned int )((void *)0)) {
          //goto PCRE_ERROR_RETURN;
        }
        if (- ch == 3) {
          class_charcount ++;
        } else {
          class_charcount = 10;
        }
      } else {
        class_charcount ++;
      }
      ptr ++;
      if ((int )(*ptr) != 0) {
        if (! ((int )(*ptr) != 93)) {
          break;
        }
      } else {
        break;
      }
    }
    if (class_charcount == 1) {
      length += 3;
    } else {
      length += 33;
      if ((int )(*ptr) != 0) {
        if ((int )(*(ptr + 1)) == 123) {
          tmp_2__ = is_counted_repeat(ptr + 2, & compile_block);
          if (tmp_2__) {
            ptr = read_repeat_counts(ptr + 2, & min, & max, errorptr, & compile_block);
            if ((unsigned int )(*errorptr) != (unsigned int )((void *)0)) {
              //goto PCRE_ERROR_RETURN;
            }
            if (min == 0) {
              if (max == 1) {
                length ++;
              } else {
                if (max == -1) {
                  length ++;
                } else {
                  //goto _L_2__;
                }
              }
            } else {
              _L_2__:  
              if (min == 1) {
                if (max == -1) {
                  length ++;
                } else {
                  length += 5;
                }
              } else {
                length += 5;
              }
            }
            if ((int )(*(ptr + 1)) == 63) {
              ptr ++;
            }
          }
        }
      }
    }
    //continue;
    case 40: 
    branch_newextra = 0;
    if ((int )(*(ptr + 1)) == 63) {
      c = (int )(*(ptr + 2));
      switch (c) {
      case 35: 
      ptr += 3;
      while (INF__>0) {
	//while (1) {
        if ((int )(*ptr) != 0) {
          if (! ((int )(*ptr) != 41)) {
            break;
          }
        } else {
          break;
        }
        ptr ++;
      }
      if ((int )(*ptr) == 0) {
        (*errorptr) = "missing ) after comment";
        //goto PCRE_ERROR_RETURN;
      }
      //continue;
      case 58: ;
      case 61: ;
      case 33: ;
      case 62: 
      ptr += 2;
      break;
      case 82: ;
      if ((int )(*(ptr + 3)) != 41) {
        (*errorptr) = "(?p must be followed by )";
        //goto PCRE_ERROR_RETURN;
      }
      ptr += 3;
      length ++;
      break;
      case 60: ;
      if ((int )(*(ptr + 3)) == 61) {
        ptr += 3;
        branch_newextra = 3;
        length += 3;
        break;
      } else {
        if ((int )(*(ptr + 3)) == 33) {
          ptr += 3;
          branch_newextra = 3;
          length += 3;
          break;
        }
      }
      (*errorptr) = "unrecognized character after (?<";
      //goto PCRE_ERROR_RETURN;
      case 40: ;
      if (((int )(*(compile_block.ctypes + (*(ptr + 3)))) & 4) != 0) {
        ptr += 4;
        length += 2;
        while (((int )(*(compile_block.ctypes + (*ptr))) & 4) != 0) {
          ptr ++;
        }
        if ((int )(*ptr) != 41) {
          (*errorptr) = "malformed number after (?(";
          //goto PCRE_ERROR_RETURN;
        }
      } else {
        ptr ++;
        if ((int )(*(ptr + 2)) != 63) {
          ptr += 2;
          (*errorptr) = "assertion expected after (?(";
          //goto PCRE_ERROR_RETURN;
        } else {
          if ((int )(*(ptr + 3)) != 61) {
            if ((int )(*(ptr + 3)) != 33) {
              if ((int )(*(ptr + 3)) != 60) {
                ptr += 2;
                (*errorptr) = "assertion expected after (?(";
                //goto PCRE_ERROR_RETURN;
              }
            }
          }
        }
      }
      break;
      default: 
      unset = 0;
      set = unset;
      optset = & set;
      ptr += 2;
      while (INF__>0) {
	//while (1) {
        c = (int )(*ptr);
        switch (c) {
        case 105: 
        (*optset) |= 1;
        //goto Cont__;
        case 109: 
        (*optset) |= 2;
        //goto Cont__;
        case 115: 
        (*optset) |= 4;
        //goto Cont__;
        case 120: 
        (*optset) |= 8;
        //goto Cont__;
        case 88: 
        (*optset) |= 64;
        //goto Cont__;
        case 85: 
        (*optset) |= 512;
        //goto Cont__;
        case 45: 
        optset = & unset;
        //goto Cont__;
        case 41: ;
        if (brastackptr == 0) {
          options = (options | set) &  unset;
          unset = 0;
          set = unset;
        }
        case 58: ;
        if (((set | unset) & 7) != 0) {
          length += 4;
          branch_newextra = 2;
          if (((set | unset) & 1) != 0) {
            options |= 67108;
          }
        }
        //goto END_OPTIONS;
        default: 
        (*errorptr) = "unrecognized character after (?";
        //goto PCRE_ERROR_RETURN;
        }
        Cont__:  
        ptr ++;
      }
      END_OPTIONS: 
      if (c == 41) {
        if (branch_newextra == 2) {
          if (branch_extra == 0) {
            branch_extra += branch_newextra;
          } else {
            if (branch_extra == 3) {
              branch_extra += branch_newextra;
            }
          }
        }
        //continue;
      }
      }
    } else {
      bracount ++;
    }
    if (brastackptr >= sizeof(brastack) / sizeof(int )) {
      (*errorptr) = "too many sets of parentheses";
      //goto PCRE_ERROR_RETURN;
    }
    bralenstack[brastackptr] = (unsigned char )branch_extra;
    branch_extra = branch_newextra;
    tmp_3__ = brastackptr;
    brastackptr ++;
    brastack[tmp_3__] = length;
    length += 3;
    //continue;
    case 41: 
    length += 3;
    minval = 1;
    maxval = 1;
    if (brastackptr > 0) {
      brastackptr --;
      duplength = length - brastack[brastackptr];
      branch_extra = (int )bralenstack[brastackptr];
    } else {
      duplength = 0;
    }
    c = (int )(*(ptr + 1));
    if (c == 123) {
      tmp_4__ = is_counted_repeat(ptr + 2, & compile_block);
      if (tmp_4__) {
        ptr = read_repeat_counts(ptr + 2, & minval, & maxval, errorptr, & compile_block);
        if ((unsigned int )(*errorptr) != (unsigned int )((void *)0)) {
          //goto PCRE_ERROR_RETURN;
        }
      } else {
        //goto _L_3__;
      }
    } else {
      _L_3__:  
      if (c == 42) {
        minval = 0;
        maxval = -1;
        ptr ++;
      } else {
        if (c == 43) {
          maxval = -1;
          ptr ++;
        } else {
          if (c == 63) {
            minval = 0;
            ptr ++;
          }
        }
      }
    }
    if (minval == 0) {
      length ++;
      if (maxval > 0) {
        length += (maxval - 1) * (duplength + 7);
      }
    } else {
      length += (minval - 1) * duplength;
      if (maxval > minval) {
        length += (maxval - minval) * (duplength + 7) - 6;
      }
    }
    //continue;
    NORMAL_CHAR: 
    default: 
    length += 2;
    runlength = 0;
    while (INF__>0) {
    //while (1) {
      if ((options & 8) != 0) {
        if (((int )(*(compile_block.ctypes + c)) & 1) != 0) {
          //goto Cont___0__;
        }
        if (c == 35) {
	  while (INF__>0) {
	    //while (1) {
            ptr ++;
            c = (int )(*ptr);
            if (c != 0) {
              if (! (c != 10)) {
                break;
              }
            } else {
              break;
            }
          }
          //goto Cont___0__;
        }
      }
      if (c == 92) {
        saveptr = ptr;
        c = check_escape(& ptr, errorptr, bracount, options, 0, & compile_block);
        if ((unsigned int )(*errorptr) != (unsigned int )((void *)0)) {
          //goto PCRE_ERROR_RETURN;
        }
        if (c < 0) {
          ptr = saveptr;
          break;
        }
      }
      runlength ++;
      Cont___0__:  
      if (runlength < 255) {
        ptr ++;
        c = (int )(*ptr);
        if (! (((int )(*(compile_block.ctypes + c)) & 128) == 0)) {
          break;
        }
      } else {
        break;
      }
    }
    ptr --;
    length += runlength;
    //continue;
    }
  }
  length += 4;
  if (length > 65539) {
    (*errorptr) = "regular expression too large";
    return ((void *)0);
  }
  size = (unsigned int )length;
  re = (real_pcre *)((pcre_malloc))(size);
  if ((unsigned int )re == (unsigned int )((void *)0)) {
    (*errorptr) = "failed to get memory";
    return ((void *)0);
  }
  re->magic_number = 13465;
  re->size = size;
  re->options = (unsigned long )options;
  re->tables = tables;
  ptr = (uschar const   *)pattern;
  code = re->code;
  (*code) = 70;
  bracount = 0;
  compile_regex(options, -1, & bracount, & code, & ptr, errorptr, 0, -1, & reqchar,
                & countlits, & compile_block);
  re->top_bracket = (unsigned char )bracount;
  re->top_backref = (unsigned char )top_backref;
  if ((unsigned int )(*errorptr) == (unsigned int )((void *)0)) {
    if ((int )(*ptr) != 0) {
      (*errorptr) = "unmatched parentheses";
    }
  }
  tmp_6__ = code;
  code ++;
  (*tmp_6__) = 0;
  if (code - re->code > length) {
    (*errorptr) = "internal error: code overflow";
  }
  if (top_backref > (int )re->top_bracket) {
    (*errorptr) = "back reference to non-existent subpattern";
  }
  if ((unsigned int )(*errorptr) != (unsigned int )((void *)0)) {
    pcre_free((void *)re);
    PCRE_ERROR_RETURN: 
    (*erroroffset) = ptr - (uschar const   *)pattern;
    return ((void *)0);
  }
  if ((options & 16) == 0) {
    temp_options = options;
    tmp_9__ = is_anchored((uschar const   *)(re->code), & temp_options);
    if (tmp_9__) {
      re->options = re->options | 16;
    } else {
      tmp_7__ = find_firstchar((uschar const   *)(re->code), & temp_options);
      ch_0__ = tmp_7__;
      if (ch_0__ >= 0) {
        re->first_char = (unsigned char )ch_0__;
        re->options = re->options | 10737;
      } else {
        tmp_8__ = is_startline((uschar const   *)(re->code));
        if (tmp_8__) {
          re->options = re->options | 26843;
        }
      }
    }
  }
  if (reqchar >= 0) {
    if (countlits > 1) {
      re->req_char = (unsigned char )reqchar;
      re->options = re->options | 53687;
    } else {
      if ((re->options & 10737) == 0) {
        re->req_char = (unsigned char )reqchar;
        re->options = re->options | 53687;
      }
    }
  }
  return ((pcre *)re);
}
}

// We make it global for simplicity
uschar const   *ptr_SLICE ;
BOOL compile_branch(int options , int *brackets , uschar **codeptr , uschar const   **ptrptr ,
                           char const   **errorptr , int *optchanged , int *reqchar ,
                           int *countlits , compile_data *cd ) 
{ int repeat_type ;
  int op_type ;
  int repeat_min ;
  int repeat_max ;
  int bravalue ;
  int length ;
  int greedy_default ;
  int greedy_non_default ;
  int prevreqchar ;
  int condcount ;
  int subcountlits ;
  register int c ;
  register uschar *code ;
  uschar *tempcode ;
  uschar const   *ptr_SLICE ;
  uschar const   *tempptr ;
  uschar *previous ;
  uschar class[32] ;
  BOOL negate_class ;
  int class_charcount ;
  int class_lastchar ;
  int newoptions ;
  int condref ;
  int subreqchar ;
  uschar *tmp ;
  uschar *tmp_0__ ;
  uschar *tmp_1__ ;
  uschar *tmp_2__ ;
  BOOL local_negate ;
  int posix_class ;
  int i ;
  register uschar const   *cbits ;
  int taboffset ;
  BOOL tmp_3__ ;
  register uschar const   *cbits_0__ ;
  int d ;
  uschar const   *oldptr ;
  int uc ;
  uschar *tmp_4__ ;
  uschar *tmp_5__ ;
  BOOL tmp_6__ ;
  int len ;
  uschar *tmp_7__ ;
  uschar *tmp_8__ ;
  uschar *tmp_9__ ;
  uschar *tmp_10__ ;
  uschar *tmp_11__ ;
  uschar *tmp_12__ ;
  uschar *tmp_13__ ;
  uschar *tmp_14__ ;
  uschar *tmp_15__ ;
  uschar *tmp_16__ ;
  uschar *tmp_17__ ;
  uschar *tmp_18__ ;
  uschar *tmp_19__ ;
  uschar *tmp_20__ ;
  uschar *tmp_21__ ;
  uschar *tmp_22__ ;
  uschar *tmp_23__ ;
  uschar *tmp_24__ ;
  uschar *tmp_25__ ;
  uschar *tmp_26__ ;
  uschar *tmp_27__ ;
  uschar *tmp_28__ ;
  uschar *tmp_29__ ;
  uschar *tmp_30__ ;
  register int i_0__ ;
  int ketoffset ;
  int len_0__ ;
  uschar *bralink ;
  register uschar *ket ;
  uschar *tmp_31__ ;
  int offset ;
  uschar *tmp_32__ ;
  uschar *tmp_33__ ;
  uschar *tmp_34__ ;
  uschar *tmp_35__ ;
  uschar *tmp_36__ ;
  int offset_0__ ;
  uschar *tmp_37__ ;
  uschar *tmp_38__ ;
  uschar *tmp_39__ ;
  int oldlinkoffset ;
  int offset_1__ ;
  uschar *bra ;
  uschar *tmp_40__ ;
  uschar *tmp_41__ ;
  uschar *tmp_42__ ;
  int set ;
  int unset ;
  int *optset ;
  uschar *tmp_43__ ;
  uschar const   *tmp_44__ ;
  uschar *tmp_45__ ;
  uschar *tmp_46__ ;
  int tmp_47__ ;
  int tmp_48__ ;
  BOOL tmp_49__ ;
  uschar *tc ;
  uschar *tmp_50__ ;
  uschar *tmp_51__ ;
  uschar *tmp_52__ ;
  uschar *tmp_53__ ;

  {
  condcount = 0;
  subcountlits = 0;
  code = (*codeptr);
  ptr_SLICE = (*ptrptr);
  previous = (uschar *)((void *)0);
  if((options & 512) != 0) greedy_default = 1;
  else greedy_default = 0;
  greedy_non_default = greedy_default ^ 1;
  prevreqchar = -1;
  (*reqchar) = prevreqchar;
  (*countlits) = 0;
  while (INF__>0) {
    //while (1) {
    c = (int )(*ptr_SLICE);
    if ((options & 8) != 0) {
      if (((int )(*(cd->ctypes + c)) & 1) != 0) {
        //goto Cont__;
      }
      if (c == 35) {
	while (INF__>0) {
	  //while (1) {
          ptr_SLICE ++;
          c = (int )(*ptr_SLICE);
          if (c != 0) {
            if (! (c != 10)) {
              break;
            }
          } else {
            break;
          }
        }
        //goto Cont__;
      }
    }
    switch (c) {
    case 0: ;
    case 124: ;
    case 41: 
    (*codeptr) = code;
    (*ptrptr) = ptr_SLICE;
    return (1);
    case 94: 
    previous = (uschar *)((void *)0);
    tmp = code;
    code ++;
    (*tmp) = 13;
    break;
    case 36: 
    previous = (uschar *)((void *)0);
    tmp_0__ = code;
    code ++;
    (*tmp_0__) = 14;
    break;
    case 46: 
    previous = code;
    tmp_1__ = code;
    code ++;
    (*tmp_1__) = 15;
    break;
    case 91: 
    previous = code;
    tmp_2__ = code;
    code ++;
    (*tmp_2__) = 53;
    ptr_SLICE ++;
    c = (int )(*ptr_SLICE);
    if (c == 94) {
      negate_class = 1;
      ptr_SLICE ++;
      c = (int )(*ptr_SLICE);
    } else {
      negate_class = 0;
    }
    class_charcount = 0;
    class_lastchar = -1;
    memset((void *)(class), 0, 32 * sizeof(uschar ));
    while (INF__>0) {
    // while (1) {
      if (c == 0) {
        (*errorptr) = "missing terminating ] for character class";
        //goto FAILED;
      }
      if (c == 91) {
        if ((int )(*(ptr_SLICE + 1)) == 58) {
          //goto _L;
        } else {
          if ((int )(*(ptr_SLICE + 1)) == 46) {
            //goto _L;
          } else {
            if ((int )(*(ptr_SLICE + 1)) == 61) {
              _L:  
              tmp_3__ = check_posix_syntax(ptr_SLICE, & tempptr, cd);
              if (tmp_3__) {
                local_negate = 0;
                cbits = cd->cbits;
                if ((int )(*(ptr_SLICE + 1)) != 58) {
                  (*errorptr) = "POSIX collating elements are not supported";
                  //goto FAILED;
                }
                ptr_SLICE += 2;
                if ((int )(*ptr_SLICE) == 94) {
                  local_negate = 1;
                  ptr_SLICE ++;
                }
                posix_class = check_posix_name(ptr_SLICE, tempptr - ptr_SLICE);
                if (posix_class < 0) {
                  (*errorptr) = "unknown POSIX class name";
                  //goto FAILED;
                }
                if ((options & 1) != 0) {
                  if (posix_class <= 2) {
                    posix_class = 0;
                  }
                }
                posix_class *= 3;
                i = 0;
                while (i < 3) {
                  taboffset = (int )posix_class_maps[posix_class + i];
                  if (taboffset < 0) {
                    break;
                  }
                  if (local_negate) {
                    c = 0;
                    while (c < 32) {
                      class[c] = (unsigned char )((int )class[c] |  ((int )(*(cbits +
                                                                               (c +
                                                                                taboffset)))));
                      c ++;
                    }
                  } else {
                    c = 0;
                    while (c < 32) {
                      class[c] = (unsigned char )((int )class[c] | (int )(*(cbits +
                                                                            (c + taboffset))));
                      c ++;
                    }
                  }
                  i ++;
                }
                ptr_SLICE = tempptr + 1;
                class_charcount = 10;
                //goto Cont___0__;
              }
            }
          }
        }
      }
      if (c == 92) {
        c = check_escape(& ptr_SLICE, errorptr, (*brackets), options, 1, cd);
        if (- c == 3) {
          c = '\b';
        } else {
          if (c < 0) {
            cbits_0__ = cd->cbits;
            class_charcount = 10;
            switch (- c) {
            case 5: 
            c = 0;
            while (c < 32) {
              class[c] = (unsigned char )((int )class[c] | (int )(*(cbits_0__ + (c +
                                                                                 64))));
              c ++;
            }
            //goto Cont___0__;
            case 4: 
            c = 0;
            while (c < 32) {
              class[c] = (unsigned char )((int )class[c] |  ((int )(*(cbits_0__ +
                                                                       (c + 64)))));
              c ++;
            }
            //goto Cont___0__;
            case 9: 
            c = 0;
            while (c < 32) {
              class[c] = (unsigned char )((int )class[c] | (int )(*(cbits_0__ + (c +
                                                                                 160))));
              c ++;
            }
            //goto Cont___0__;
            case 8: 
            c = 0;
            while (c < 32) {
              class[c] = (unsigned char )((int )class[c] |  ((int )(*(cbits_0__ +
                                                                       (c + 160)))));
              c ++;
            }
            //goto Cont___0__;
            case 7: 
            c = 0;
            while (c < 32) {
              class[c] = (unsigned char )((int )class[c] | (int )(*(cbits_0__ + c)));
              c ++;
            }
            //goto Cont___0__;
            case 6: 
            c = 0;
            while (c < 32) {
              class[c] = (unsigned char )((int )class[c] |  ((int )(*(cbits_0__ +
                                                                       c))));
              c ++;
            }
            //goto Cont___0__;
            default: 
            (*errorptr) = "invalid escape sequence in character class";
            //goto FAILED;
            }
          }
        }
      }
      if ((int )(*(ptr_SLICE + 1)) == 45) {
        if ((int )(*(ptr_SLICE + 2)) != 93) {
          ptr_SLICE += 2;
          d = (int )(*ptr_SLICE);
          if (d == 0) {
            (*errorptr) = "missing terminating ] for character class";
            //goto FAILED;
          }
          if (d == 92) {
            oldptr = ptr_SLICE;
            d = check_escape(& ptr_SLICE, errorptr, (*brackets), options, 1, cd);
            if (d < 0) {
              if (d == -3) {
                d = '\b';
              } else {
                ptr_SLICE = oldptr - 2;
                //goto SINGLE_CHARACTER;
              }
            }
          }
          if (d < c) {
            (*errorptr) = "range out of order in character class";
            //goto FAILED;
          }
          while (c <= d) {
            class[c / 8] = (unsigned char )((int )class[c / 8] | (1 << (c & 7)));
            if ((options & 1) != 0) {
              uc = (int )(*(cd->fcc + c));
              class[uc / 8] = (unsigned char )((int )class[uc / 8] | (1 << (uc & 7)));
            }
            class_charcount ++;
            class_lastchar = c;
            c ++;
          }
          //goto Cont___0__;
        }
      }
      SINGLE_CHARACTER: 
      class[c / 8] = (unsigned char )((int )class[c / 8] | (1 << (c & 7)));
      if ((options & 1) != 0) {
        c = (int )(*(cd->fcc + c));
        class[c / 8] = (unsigned char )((int )class[c / 8] | (1 << (c & 7)));
      }
      class_charcount ++;
      class_lastchar = c;
      Cont___0__:  
      ptr_SLICE ++;
      c = (int )(*ptr_SLICE);
      if (! (c != 93)) {
        break;
      }
    }
    if (class_charcount == 1) {
      if (class_lastchar >= 0) {
        if (negate_class) {
          (*(code + -1)) = 17;
        } else {
          (*(code + -1)) = 16;
          tmp_4__ = code;
          code ++;
          (*tmp_4__) = 1;
        }
        tmp_5__ = code;
        code ++;
        (*tmp_5__) = (unsigned char )class_lastchar;
      } else {
        //goto _L_0__;
      }
    } else {
      _L_0__:  
      if (negate_class) {
        c = 0;
        while (c < 32) {
          (*(code + c)) = (unsigned char )( ((int )class[c]));
          c ++;
        }
      } else {
        memcpy((void *)code, (void const   *)(class),
               32);
      }
      code += 32;
    }
    break;
    case 123: 
    tmp_6__ = is_counted_repeat(ptr_SLICE + 1, cd);
    if (! tmp_6__) {
      //goto NORMAL_CHAR;
    }
    ptr_SLICE = read_repeat_counts(ptr_SLICE + 1, & repeat_min, & repeat_max, errorptr, cd);
    if ((unsigned int )(*errorptr) != (unsigned int )((void *)0)) {
      //goto FAILED;
    }
    //goto REPEAT;
    case 42: 
    repeat_min = 0;
    repeat_max = -1;
    //goto REPEAT;
    case 43: 
    repeat_min = 1;
    repeat_max = -1;
    //goto REPEAT;
    case 63: 
    repeat_min = 0;
    repeat_max = 1;
    REPEAT: 
    if ((unsigned int )previous == (unsigned int )((void *)0)) {
      (*errorptr) = "nothing to repeat";
      //goto FAILED;
    }
    if ((int )(*(ptr_SLICE + 1)) == 63) {
      repeat_type = greedy_non_default;
      ptr_SLICE ++;
    } else {
      repeat_type = greedy_default;
    }
    if ((int )(*previous) == 16) {
      len = (int )(*(previous + 1));
      if (repeat_min == 0) {
        (*reqchar) = prevreqchar;
      }
      (*countlits) += repeat_min - 1;
      if (len == 1) {
        c = (int )(*(previous + 2));
        code = previous;
      } else {
        c = (int )(*(previous + (len + 1)));
        (*(previous + 1)) = (uschar )((int )(*(previous + 1)) - 1);
        code --;
      }
      op_type = 0;
      //goto OUTPUT_SINGLE_REPEAT;
    } else {
      if ((int )(*previous) == 17) {
        op_type = 9;
        c = (int )(*(previous + 1));
        code = previous;
        //goto OUTPUT_SINGLE_REPEAT;
      } else {
        if ((int )(*previous) < 10) {
          //goto _L_7__;
        } else {
          if ((int )(*previous) == 15) {
            _L_7__:  
            op_type = 18;
            c = (int )(*previous);
            code = previous;
            OUTPUT_SINGLE_REPEAT: 
            if (repeat_max == 0) {
              //goto END_REPEAT;
            }
            repeat_type += op_type;
            if (repeat_min == 0) {
              if (repeat_max == -1) {
                tmp_7__ = code;
                code ++;
                (*tmp_7__) = (unsigned char )(18 + repeat_type);
              } else {
                if (repeat_max == 1) {
                  tmp_8__ = code;
                  code ++;
                  (*tmp_8__) = (unsigned char )(22 + repeat_type);
                } else {
                  tmp_9__ = code;
                  code ++;
                  (*tmp_9__) = (unsigned char )(24 + repeat_type);
                  tmp_10__ = code;
                  code ++;
                  (*tmp_10__) = (unsigned char )(repeat_max >> 8);
                  tmp_11__ = code;
                  code ++;
                  (*tmp_11__) = (unsigned char )(repeat_max & 255);
                }
              }
            } else {
              if (repeat_min == 1) {
                if (repeat_max == -1) {
                  tmp_12__ = code;
                  code ++;
                  (*tmp_12__) = (unsigned char )(20 + repeat_type);
                } else {
                  //goto _L_1__;
                }
              } else {
                _L_1__:  
                if (repeat_min != 1) {
                  tmp_13__ = code;
                  code ++;
                  (*tmp_13__) = (unsigned char )(26 + op_type);
                  tmp_14__ = code;
                  code ++;
                  (*tmp_14__) = (unsigned char )(repeat_min >> 8);
                  tmp_15__ = code;
                  code ++;
                  (*tmp_15__) = (unsigned char )(repeat_min & 255);
                } else {
                  if ((int )(*previous) == 16) {
                    if ((unsigned int )code == (unsigned int )previous) {
                      code += 2;
                    } else {
                      (*(previous + 1)) = (uschar )((int )(*(previous + 1)) + 1);
                    }
                  } else {
                    if ((int )(*previous) == 17) {
                      code ++;
                    }
                  }
                }
                if (repeat_max < 0) {
                  tmp_16__ = code;
                  code ++;
                  (*tmp_16__) = (unsigned char )c;
                  tmp_17__ = code;
                  code ++;
                  (*tmp_17__) = (unsigned char )(18 + repeat_type);
                } else {
                  if (repeat_max != repeat_min) {
                    tmp_18__ = code;
                    code ++;
                    (*tmp_18__) = (unsigned char )c;
                    repeat_max -= repeat_min;
                    tmp_19__ = code;
                    code ++;
                    (*tmp_19__) = (unsigned char )(24 + repeat_type);
                    tmp_20__ = code;
                    code ++;
                    (*tmp_20__) = (unsigned char )(repeat_max >> 8);
                    tmp_21__ = code;
                    code ++;
                    (*tmp_21__) = (unsigned char )(repeat_max & 255);
                  }
                }
              }
            }
            tmp_22__ = code;
            code ++;
            (*tmp_22__) = (unsigned char )c;
          } else {
            if ((int )(*previous) == 53) {
              //goto _L_6__;
            } else {
              if ((int )(*previous) == 54) {
                _L_6__:  
                if (repeat_max == 0) {
                  code = previous;
                  //goto END_REPEAT;
                }
                if (repeat_min == 0) {
                  if (repeat_max == -1) {
                    tmp_23__ = code;
                    code ++;
                    (*tmp_23__) = (unsigned char )(45 + repeat_type);
                  } else {
                    //goto _L_4__;
                  }
                } else {
                  _L_4__:  
                  if (repeat_min == 1) {
                    if (repeat_max == -1) {
                      tmp_24__ = code;
                      code ++;
                      (*tmp_24__) = (unsigned char )(47 + repeat_type);
                    } else {
                      //goto _L_3__;
                    }
                  } else {
                    _L_3__:  
                    if (repeat_min == 0) {
                      if (repeat_max == 1) {
                        tmp_25__ = code;
                        code ++;
                        (*tmp_25__) = (unsigned char )(49 + repeat_type);
                      } else {
                        //goto _L_2__;
                      }
                    } else {
                      _L_2__:  
                      tmp_26__ = code;
                      code ++;
                      (*tmp_26__) = (unsigned char )(51 + repeat_type);
                      tmp_27__ = code;
                      code ++;
                      (*tmp_27__) = (unsigned char )(repeat_min >> 8);
                      tmp_28__ = code;
                      code ++;
                      (*tmp_28__) = (unsigned char )(repeat_min & 255);
                      if (repeat_max == -1) {
                        repeat_max = 0;
                      }
                      tmp_29__ = code;
                      code ++;
                      (*tmp_29__) = (unsigned char )(repeat_max >> 8);
                      tmp_30__ = code;
                      code ++;
                      (*tmp_30__) = (unsigned char )(repeat_max & 255);
                    }
                  }
                }
              } else {
                if ((int )(*previous) >= 70) {
                  //goto _L_5__;
                } else {
                  if ((int )(*previous) == 65) {
                    //goto _L_5__;
                  } else {
                    if ((int )(*previous) == 66) {
                      _L_5__:  
                      ketoffset = 0;
                      len_0__ = code - previous;
                      bralink = (uschar *)((void *)0);
                      if (repeat_max == -1) {
                        ket = previous;
			while (INF__>0) {
			  //while (1) {
                          ket += ((int )(*(ket + 1)) << 8) + (int )(*(ket + 2));
                          if (! ((int )(*ket) != 57)) {
                            break;
                          }
                        }
                        ketoffset = code - ket;
                      }
                      if (repeat_min == 0) {
                        if (subcountlits > 0) {
                          (*reqchar) = prevreqchar;
                          (*countlits) -= subcountlits;
                        }
                        if (repeat_max == 0) {
                          code = previous;
                          //goto END_REPEAT;
                        }
                        if (repeat_max <= 1) {
                          memmove((void *)(previous + 1), (void const   *)previous,
                                  (unsigned int )len_0__);
                          code ++;
                          tmp_31__ = previous;
                          previous ++;
                          (*tmp_31__) = (unsigned char )(68 + repeat_type);
                        } else {
                          memmove((void *)(previous + 4), (void const   *)previous,
                                  (unsigned int )len_0__);
                          code += 4;
                          tmp_32__ = previous;
                          previous ++;
                          (*tmp_32__) = (unsigned char )(68 + repeat_type);
                          tmp_33__ = previous;
                          previous ++;
                          (*tmp_33__) = 70;
                          if ((unsigned int )bralink == (unsigned int )((void *)0)) {
                            offset = 0;
                          } else {
                            offset = previous - bralink;
                          }
                          bralink = previous;
                          tmp_34__ = previous;
                          previous ++;
                          (*tmp_34__) = (unsigned char )(offset >> 8);
                          tmp_35__ = previous;
                          previous ++;
                          (*tmp_35__) = (unsigned char )(offset & 255);
                        }
                        repeat_max --;
                      } else {
                        i_0__ = 1;
                        while (i_0__ < repeat_min) {
                          memcpy((void *)code, (void const   *)previous,
                                 (unsigned int )len_0__);
                          code += len_0__;
                          i_0__ ++;
                        }
                        if (repeat_max > 0) {
                          repeat_max -= repeat_min;
                        }
                      }
                      if (repeat_max >= 0) {
                        i_0__ = repeat_max - 1;
                        while (i_0__ >= 0) {
                          tmp_36__ = code;
                          code ++;
                          (*tmp_36__) = (unsigned char )(68 + repeat_type);
                          if (i_0__ != 0) {
                            tmp_37__ = code;
                            code ++;
                            (*tmp_37__) = 70;
                            if ((unsigned int )bralink == (unsigned int )((void *)0)) {
                              offset_0__ = 0;
                            } else {
                              offset_0__ = code - bralink;
                            }
                            bralink = code;
                            tmp_38__ = code;
                            code ++;
                            (*tmp_38__) = (unsigned char )(offset_0__ >> 8);
                            tmp_39__ = code;
                            code ++;
                            (*tmp_39__) = (unsigned char )(offset_0__ & 255);
                          }
                          memcpy((void *)code, (void const   *)previous,
                                 (unsigned int )len_0__);
                          code += len_0__;
                          i_0__ --;
                        }
                        while ((unsigned int )bralink > (unsigned int )((void *)0)) {
			  // while ((unsigned int )bralink != (unsigned int )((void *)0)) {
                          offset_1__ = (code - bralink) + 1;
                          bra = code - offset_1__;
                          oldlinkoffset = ((int )(*(bra + 1)) << 8) + (int )(*(bra +
                                                                               2));
                          if (oldlinkoffset == 0) {
                            bralink = (uschar *)((void *)0);
                          } else {
                            bralink = bralink - oldlinkoffset;
                          }
                          tmp_40__ = code;
                          code ++;
                          (*tmp_40__) = 57;
                          tmp_41__ = code;
                          code ++;
                          (*(bra + 1)) = (unsigned char )(offset_1__ >> 8);
                          (*tmp_41__) = (*(bra + 1));
                          tmp_42__ = code;
                          code ++;
                          (*(bra + 2)) = (unsigned char )(offset_1__ & 255);
                          (*tmp_42__) = (*(bra + 2));
                        }
                      } else {
                        (*(code + - ketoffset)) = (unsigned char )(58 + repeat_type);
                      }
                    } else {
                      (*errorptr) = "internal error: unexpected repeat";
                      //goto FAILED;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    END_REPEAT: 
    previous = (uschar *)((void *)0);
    break;
    case 40: 
    newoptions = options;
    condref = -1;
    ptr_SLICE ++;
    if ((int )(*ptr_SLICE) == 63) {
      ptr_SLICE ++;
      switch ((int )(*ptr_SLICE)) {
      case 35: 
      ptr_SLICE ++;
      //      while ((int )(*ptr_SLICE) != 41) {
      while ((int )(*ptr_SLICE) > 41) {
        ptr_SLICE ++;
      }
      //goto Cont__;
      case 58: 
      bravalue = 70;
      ptr_SLICE ++;
      break;
      case 40: 
      bravalue = 66;
      ptr_SLICE ++;
      if (((int )(*(cd->ctypes + (*ptr_SLICE))) & 4) != 0) {
        condref = (int )(*ptr_SLICE) - 48;
	while (INF__>0) {
	  //while (1) {
          ptr_SLICE ++;
          if (! ((int )(*ptr_SLICE) != 41)) {
            break;
          }
          condref = (condref * 10 + (int )(*ptr_SLICE)) - 48;
        }
        if (condref == 0) {
          (*errorptr) = "invalid condition (?(0)";
          //goto FAILED;
        }
        ptr_SLICE ++;
      } else {
        ptr_SLICE --;
      }
      break;
      case 61: 
      bravalue = 60;
      ptr_SLICE ++;
      break;
      case 33: 
      bravalue = 61;
      ptr_SLICE ++;
      break;
      case 60: 
      ptr_SLICE ++;
      switch ((int )(*ptr_SLICE)) {
      case 61: 
      bravalue = 62;
      ptr_SLICE ++;
      break;
      case 33: 
      bravalue = 63;
      ptr_SLICE ++;
      break;
      default: 
      (*errorptr) = "unrecognized character after (?<";
      //goto FAILED;
      }
      break;
      case 62: 
      bravalue = 65;
      ptr_SLICE ++;
      break;
      case 82: 
      tmp_43__ = code;
      code ++;
      (*tmp_43__) = 55;
      ptr_SLICE ++;
      //goto Cont__;
      default: 
      unset = 0;
      set = unset;
      optset = & set;
      while (INF__>0) {
	//while (1) {
        if ((int )(*ptr_SLICE) != 41) {
          if (! ((int )(*ptr_SLICE) != 58)) {
            break;
          }
        } else {
          break;
        }
        tmp_44__ = ptr_SLICE;
        ptr_SLICE ++;
        switch ((int )(*tmp_44__)) {
        case 45: 
        optset = & unset;
        break;
        case 105: 
        (*optset) |= 1;
        break;
        case 109: 
        (*optset) |= 2;
        break;
        case 115: 
        (*optset) |= 4;
        break;
        case 120: 
        (*optset) |= 8;
        break;
        case 85: 
        (*optset) |= 512;
        break;
        case 88: 
        (*optset) |= 64;
        break;
        default: 
        (*errorptr) = "unrecognized character after (?";
        //goto FAILED;
        }
      }
      newoptions = (options | set) &  unset;
      if ((int )(*ptr_SLICE) == 41) {
        if ((options & 13421) != 0) {
          if ((options & 7) != (newoptions & 7)) {
            tmp_45__ = code;
            code ++;
            (*tmp_45__) = 12;
            tmp_46__ = code;
            code ++;
            (*optchanged) = newoptions & 7;
            (*tmp_46__) = (unsigned char )(*optchanged);
          }
        }
        options = newoptions;
        previous = (uschar *)((void *)0);
        //goto Cont__;
      }
      bravalue = 70;
      ptr_SLICE ++;
      }
    } else {
      (*brackets) ++;
      if ((*brackets) > 99) {
        (*errorptr) = "too many capturing parenthesized sub-patterns";
        //goto FAILED;
      }
      bravalue = 70 + (*brackets);
    }
    if (bravalue >= 65) {
      previous = code;
    } else {
      previous = (uschar *)((void *)0);
    }
    (*code) = (unsigned char )bravalue;
    tempcode = code;
    if (bravalue == 62) {
      tmp_47__ = 1;
    } else {
      if (bravalue == 63) {
        tmp_47__ = 1;
      } else {
        tmp_47__ = 0;
      }
    }
    if ((options & 7) != (newoptions & 7)) {
      tmp_48__ = newoptions & 7;
    } else {
      tmp_48__ = -1;
    }
    tmp_49__ = compile_regex(options | 13421, tmp_48__, brackets, & tempcode,
                             & ptr_SLICE, errorptr, tmp_47__, condref, & subreqchar, & subcountlits,
                             cd);
    if (! tmp_49__) {
      //goto FAILED;
    }
    if (bravalue == 66) {
      tc = code;
      condcount = 0;
      while (INF__>0) {
	//while (1) {
        condcount ++;
        tc += ((int )(*(tc + 1)) << 8) | (int )(*(tc + 2));
        if (! ((int )(*tc) != 57)) {
          break;
        }
      }
      if (condcount > 2) {
        (*errorptr) = "conditional group contains more than two branches";
        //goto FAILED;
      }
    }
    if (subreqchar > 0) {
      if (bravalue >= 70) {
        //goto _L_8__;
      } else {
        if (bravalue == 65) {
          //goto _L_8__;
        } else {
          if (bravalue == 60) {
            //goto _L_8__;
          } else {
            if (bravalue == 66) {
              if (condcount == 2) {
                _L_8__:  
                prevreqchar = (*reqchar);
                (*reqchar) = subreqchar;
                if (bravalue != 60) {
                  (*countlits) += subcountlits;
                }
              }
            }
          }
        }
      }
    }
    code = tempcode;
    if ((int )(*ptr_SLICE) != 41) {
      (*errorptr) = "missing )";
      //goto FAILED;
    }
    break;
    case 92: 
    tempptr = ptr_SLICE;
    c = check_escape(& ptr_SLICE, errorptr, (*brackets), options, 0, cd);
    if (c < 0) {
      if (- c >= 12) {
        previous = code;
        tmp_50__ = code;
        code ++;
        (*tmp_50__) = 54;
        tmp_51__ = code;
        code ++;
        (*tmp_51__) = (unsigned char )(- c - 12);
      } else {
        if (- c > 3) {
          if (- c < 10) {
            previous = code;
          } else {
            previous = (uschar *)((void *)0);
          }
        } else {
          previous = (uschar *)((void *)0);
        }
        tmp_52__ = code;
        code ++;
        (*tmp_52__) = (unsigned char )(- c);
      }
      //goto Cont__;
    }
    ptr_SLICE = tempptr;
    c = '\\';
    NORMAL_CHAR: 
    default: 
    previous = code;
    (*code) = 16;
    code += 2;
    length = 0;
    while (INF__>0) {
    //while (1) {
      if ((options & 8) != 0) {
        if (((int )(*(cd->ctypes + c)) & 1) != 0) {
          //goto Cont___1__;
        }
        if (c == 35) {
	  while (INF__>0) {
	    //while (1) {
            ptr_SLICE ++;
            c = (int )(*ptr_SLICE);
            if (c != 0) {
              if (! (c != 10)) {
                break;
              }
            } else {
              break;
            }
          }
          if (c == 0) {
            break;
          }
          //goto Cont___1__;
        }
      }
      if (c == 92) {
        tempptr = ptr_SLICE;
        c = check_escape(& ptr_SLICE, errorptr, (*brackets), options, 0, cd);
        if (c < 0) {
          ptr_SLICE = tempptr;
          break;
        }
      }
      tmp_53__ = code;
      code ++;
      (*tmp_53__) = (unsigned char )c;
      length ++;
      Cont___1__:  
      if (length < 255) {
        ptr_SLICE ++;
        c = (int )(*ptr_SLICE);
        if (! (((int )(*(cd->ctypes + c)) & 128) == 0)) {
          break;
        }
      } else {
        break;
      }
    }
    if (length > 1) {
      prevreqchar = (int )(*(code + -2));
    } else {
      prevreqchar = (*reqchar);
    }
    (*reqchar) = (int )(*(code + -1));
    (*countlits) += length;
    (*(previous + 1)) = (unsigned char )length;
    if (length < 255) {
      ptr_SLICE --;
    }
    break;
    }
    Cont__:  
    ptr_SLICE ++;
  }
  FAILED: 
  (*ptrptr) = ptr_SLICE;
  return (0);
}
}

void main() {
  char const   *pattern;
  int options;
  char const   **errorptr;
  int *erroroffset; 
  unsigned char const   *tables;
  
  pcre_compile(pattern,options,errorptr,erroroffset,tables);
  _SLICE(ptr_SLICE);
}
