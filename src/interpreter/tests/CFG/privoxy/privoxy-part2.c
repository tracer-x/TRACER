
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
void *memcpy(void *  dest , void const   *  src , size_t n ) {}
void *memmove(void *dest , void const   *src , size_t n ) {}
void *memset(void *s , int c , size_t n ) {}
char *strdup(char const   *s )  {}
void free(void *ptr ) {}
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
/* extern void *memcpy(void *  __dest , void const   *  __src , size_t __n ) ; */
/* extern void *memmove(void *__dest , void const   *__src , size_t __n ) ; */
/* extern void *memset(void *__s , int __c , size_t __n ) ; */
/* extern char *strdup(char const   *__s )  ; */
/* extern void free(void *__ptr ) ; */
/* extern void **pcre_malloc(size_t  a) ; */
/* extern void *pcre_free(void * a) ; */
/* extern BOOL is_anchored(uschar const   *code , int *options ) ; */
/* extern int find_firstchar(uschar const   *code , int *options ) ; */
/* extern BOOL is_startline(uschar const   *code ) ; */
/* extern int find_fixedlength(uschar *code , int options ) ; */

// Global variables
unsigned char pcre_default_tables[1088]  ;
int const   posix_class_maps[39]  ;

int INF;

static BOOL compile_regex(int options , int optchanged , int *brackets , uschar **codeptr ,
                          uschar const   **ptrptr , char const   **errorptr , BOOL lookbehind ,
                          int condref , int *reqchar , int *countlits , compile_data *cd ) 
{ register uschar const   *ptr ;
  register uschar *code ;
  register uschar *last_branch ;
  register uschar *start_bracket ;
  register uschar *reverse_count ;
  register int oldoptions ;
  register int branchreqchar ;
  register int branchcountlits ;
  register uschar *tmp ;
  register uschar *tmp___0 ;
  register int length ;
  register uschar *tmp___1 ;
  register uschar *tmp___2 ;
  register uschar *tmp___3 ;
  register uschar *tmp___4 ;
  register uschar *tmp___5 ;
  register BOOL tmp___6 ;
  register uschar *tmp___7 ;
  register uschar *tmp___8 ;
  register uschar *tmp___9 ;
  register uschar *tmp___10 ;
  register uschar *tmp___11 ;

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
    tmp___0 = code;
    code ++;
    (*tmp___0) = (unsigned char )condref;
  }
  while (INF>0) {
    // while (1) {
    if (optchanged >= 0) {
      tmp___1 = code;
      code ++;
      (*tmp___1) = 12;
      tmp___2 = code;
      code ++;
      (*tmp___2) = (unsigned char )optchanged;
      options = (options & -8) | optchanged;
    }
    if (lookbehind) {
      tmp___3 = code;
      code ++;
      (*tmp___3) = 64;
      reverse_count = code;
      tmp___4 = code;
      code ++;
      (*tmp___4) = 0;
      tmp___5 = code;
      code ++;
      (*tmp___5) = 0;
    }
    tmp___6 = compile_branch(options, brackets, & code, & ptr, errorptr, & optchanged,
                             & branchreqchar, & branchcountlits, cd);
    if (! tmp___6) {
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
      tmp___7 = code;
      code ++;
      (*tmp___7) = 57;
      tmp___8 = code;
      code ++;
      (*tmp___8) = (unsigned char )(length >> 8);
      tmp___9 = code;
      code ++;
      (*tmp___9) = (unsigned char )(length & 255);
      if (optchanged >= 0) {
        tmp___10 = code;
        code ++;
        (*tmp___10) = 12;
        tmp___11 = code;
        code ++;
        (*tmp___11) = (unsigned char )oldoptions;
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
{ register real_pcre *re ;
  register int length ;
  register int runlength ;
  register int c ;
  register int reqchar ;
  register int countlits ;
  register int bracount ;
  register int top_backref ;
  register int branch_extra ;
  register int branch_newextra ;
  register unsigned int brastackptr ;
  register size_t size ;
  register uschar *code ;
  register uschar const   *ptr ;
  register compile_data compile_block ;
  int brastack[200] ;
  uschar bralenstack[200] ;
  register int min ;
  register int max ;
  register int class_charcount ;
  register uschar const   *save_ptr ;
  register int refnum ;
  register BOOL tmp ;
  register BOOL tmp___0 ;
  register int ch ;
  register int tmp___1 ;
  register BOOL tmp___2 ;
  register int set ;
  register int unset ;
  register int *optset ;
  register unsigned int tmp___3 ;
  register int minval ;
  register int maxval ;
  register int duplength ;
  register BOOL tmp___4 ;
  register uschar const   *saveptr ;
  register uschar *tmp___6 ;
  register int temp_options ;
  register int ch___0 ;
  register int tmp___7 ;
  register BOOL tmp___8 ;
  register BOOL tmp___9 ;

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
  while (INF>0) {
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
	while (INF>0) {
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
    tmp___0 = is_counted_repeat(ptr + 1, & compile_block);
    if (! tmp___0) {
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
          //goto _L___1;
        }
      }
    } else {
      _L___1:  
      if (min == 1) {
        if (max == -1) {
          length ++;
        } else {
          //goto _L___0;
        }
      } else {
        _L___0:  
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
    while (INF>0) {
      //while (1) {
      if ((int )(*ptr) == 92) {
        tmp___1 = check_escape(& ptr, errorptr, bracount, options, 1, & compile_block);
        ch = tmp___1;
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
          tmp___2 = is_counted_repeat(ptr + 2, & compile_block);
          if (tmp___2) {
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
                  //goto _L___2;
                }
              }
            } else {
              _L___2:  
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
      while (INF>0) {
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
      while (INF>0) {
	//while (1) {
        c = (int )(*ptr);
        switch (c) {
        case 105: 
        (*optset) |= 1;
        //goto __Cont;
        case 109: 
        (*optset) |= 2;
        //goto __Cont;
        case 115: 
        (*optset) |= 4;
        //goto __Cont;
        case 120: 
        (*optset) |= 8;
        //goto __Cont;
        case 88: 
        (*optset) |= 64;
        //goto __Cont;
        case 85: 
        (*optset) |= 512;
        //goto __Cont;
        case 45: 
        optset = & unset;
        //goto __Cont;
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
        __Cont:  
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
    tmp___3 = brastackptr;
    brastackptr ++;
    brastack[tmp___3] = length;
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
      tmp___4 = is_counted_repeat(ptr + 2, & compile_block);
      if (tmp___4) {
        ptr = read_repeat_counts(ptr + 2, & minval, & maxval, errorptr, & compile_block);
        if ((unsigned int )(*errorptr) != (unsigned int )((void *)0)) {
          //goto PCRE_ERROR_RETURN;
        }
      } else {
        //goto _L___3;
      }
    } else {
      _L___3:  
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
    while (INF>0) {
    //while (1) {
      if ((options & 8) != 0) {
        if (((int )(*(compile_block.ctypes + c)) & 1) != 0) {
          //goto __Cont___0;
        }
        if (c == 35) {
	  while (INF>0) {
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
          //goto __Cont___0;
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
      __Cont___0:  
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
  tmp___6 = code;
  code ++;
  (*tmp___6) = 0;
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
    tmp___9 = is_anchored((uschar const   *)(re->code), & temp_options);
    if (tmp___9) {
      re->options = re->options | 16;
    } else {
      tmp___7 = find_firstchar((uschar const   *)(re->code), & temp_options);
      ch___0 = tmp___7;
      if (ch___0 >= 0) {
        re->first_char = (unsigned char )ch___0;
        re->options = re->options | 10737;
      } else {
        tmp___8 = is_startline((uschar const   *)(re->code));
        if (tmp___8) {
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
{ register int repeat_type ;
  register int op_type ;
  register int repeat_min ;
  register int repeat_max ;
  register int bravalue ;
  register int length ;
  register int greedy_default ;
  register int greedy_non_default ;
  register int prevreqchar ;
  register int condcount ;
  register int subcountlits ;
  register int c ;
  register uschar *code ;
  register uschar *tempcode ;
  register uschar const   *ptr_SLICE ;
  register uschar const   *tempptr ;
  register uschar *previous ;
  uschar class[32] ;
  register BOOL negate_class ;
  register int class_charcount ;
  register int class_lastchar ;
  register int newoptions ;
  register int condref ;
  register int subreqchar ;
  register uschar *tmp ;
  register uschar *tmp___0 ;
  register uschar *tmp___1 ;
  register uschar *tmp___2 ;
  register BOOL local_negate ;
  register int posix_class ;
  register int i ;
  register uschar const   *cbits ;
  register int taboffset ;
  register BOOL tmp___3 ;
  register uschar const   *cbits___0 ;
  register int d ;
  register uschar const   *oldptr ;
  register int uc ;
  register uschar *tmp___4 ;
  register uschar *tmp___5 ;
  register BOOL tmp___6 ;
  register int len ;
  register uschar *tmp___7 ;
  register uschar *tmp___8 ;
  register uschar *tmp___9 ;
  register uschar *tmp___10 ;
  register uschar *tmp___11 ;
  register uschar *tmp___12 ;
  register uschar *tmp___13 ;
  register uschar *tmp___14 ;
  register uschar *tmp___15 ;
  register uschar *tmp___16 ;
  register uschar *tmp___17 ;
  register uschar *tmp___18 ;
  register uschar *tmp___19 ;
  register uschar *tmp___20 ;
  register uschar *tmp___21 ;
  register uschar *tmp___22 ;
  register uschar *tmp___23 ;
  register uschar *tmp___24 ;
  register uschar *tmp___25 ;
  register uschar *tmp___26 ;
  register uschar *tmp___27 ;
  register uschar *tmp___28 ;
  register uschar *tmp___29 ;
  register uschar *tmp___30 ;
  register int i___0 ;
  register int ketoffset ;
  register int len___0 ;
  register uschar *bralink ;
  register uschar *ket ;
  register uschar *tmp___31 ;
  register int offset ;
  register uschar *tmp___32 ;
  register uschar *tmp___33 ;
  register uschar *tmp___34 ;
  register uschar *tmp___35 ;
  register uschar *tmp___36 ;
  register int offset___0 ;
  register uschar *tmp___37 ;
  register uschar *tmp___38 ;
  register uschar *tmp___39 ;
  register int oldlinkoffset ;
  register int offset___1 ;
  register uschar *bra ;
  register uschar *tmp___40 ;
  register uschar *tmp___41 ;
  register uschar *tmp___42 ;
  register int set ;
  register int unset ;
  register int *optset ;
  register uschar *tmp___43 ;
  register uschar const   *tmp___44 ;
  register uschar *tmp___45 ;
  register uschar *tmp___46 ;
  register int tmp___47 ;
  register int tmp___48 ;
  register BOOL tmp___49 ;
  register uschar *tc ;
  register uschar *tmp___50 ;
  register uschar *tmp___51 ;
  register uschar *tmp___52 ;
  register uschar *tmp___53 ;

  {
  condcount = 0;
  subcountlits = 0;
  code = (*codeptr);
  ptr_SLICE = (*ptrptr);
  previous = (uschar *)((void *)0);
  //greedy_default = (options & 512) != 0;
  if(options & 512) greedy_default = 1; else greedy_default = 0;
  greedy_non_default = greedy_default ^ 1;
  prevreqchar = -1;
  (*reqchar) = prevreqchar;
  (*countlits) = 0;
  while (INF>0) {
    //while (1) {
    c = (int )(*ptr_SLICE);
    if ((options & 8) != 0) {
      if (((int )(*(cd->ctypes + c)) & 1) != 0) {
        //goto __Cont;
      }
      if (c == 35) {
	while (INF>0) {
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
        //goto __Cont;
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
    tmp___0 = code;
    code ++;
    (*tmp___0) = 14;
    break;
    case 46: 
    previous = code;
    tmp___1 = code;
    code ++;
    (*tmp___1) = 15;
    break;
    case 91: 
    previous = code;
    tmp___2 = code;
    code ++;
    (*tmp___2) = 53;
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
    while (INF>0) {
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
              tmp___3 = check_posix_syntax(ptr_SLICE, & tempptr, cd);
              if (tmp___3) {
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
                //goto __Cont___0;
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
            cbits___0 = cd->cbits;
            class_charcount = 10;
            switch (- c) {
            case 5: 
            c = 0;
            while (c < 32) {
              class[c] = (unsigned char )((int )class[c] | (int )(*(cbits___0 + (c +
                                                                                 64))));
              c ++;
            }
            //goto __Cont___0;
            case 4: 
            c = 0;
            while (c < 32) {
              class[c] = (unsigned char )((int )class[c] |  ((int )(*(cbits___0 +
                                                                       (c + 64)))));
              c ++;
            }
            //goto __Cont___0;
            case 9: 
            c = 0;
            while (c < 32) {
              class[c] = (unsigned char )((int )class[c] | (int )(*(cbits___0 + (c +
                                                                                 160))));
              c ++;
            }
            //goto __Cont___0;
            case 8: 
            c = 0;
            while (c < 32) {
              class[c] = (unsigned char )((int )class[c] |  ((int )(*(cbits___0 +
                                                                       (c + 160)))));
              c ++;
            }
            //goto __Cont___0;
            case 7: 
            c = 0;
            while (c < 32) {
              class[c] = (unsigned char )((int )class[c] | (int )(*(cbits___0 + c)));
              c ++;
            }
            //goto __Cont___0;
            case 6: 
            c = 0;
            while (c < 32) {
              class[c] = (unsigned char )((int )class[c] |  ((int )(*(cbits___0 +
                                                                       c))));
              c ++;
            }
            //goto __Cont___0;
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
          //goto __Cont___0;
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
      __Cont___0:  
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
          tmp___4 = code;
          code ++;
          (*tmp___4) = 1;
        }
        tmp___5 = code;
        code ++;
        (*tmp___5) = (unsigned char )class_lastchar;
      } else {
        //goto _L___0;
      }
    } else {
      _L___0:  
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
    tmp___6 = is_counted_repeat(ptr_SLICE + 1, cd);
    if (! tmp___6) {
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
          //goto _L___7;
        } else {
          if ((int )(*previous) == 15) {
            _L___7:  
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
                tmp___7 = code;
                code ++;
                (*tmp___7) = (unsigned char )(18 + repeat_type);
              } else {
                if (repeat_max == 1) {
                  tmp___8 = code;
                  code ++;
                  (*tmp___8) = (unsigned char )(22 + repeat_type);
                } else {
                  tmp___9 = code;
                  code ++;
                  (*tmp___9) = (unsigned char )(24 + repeat_type);
                  tmp___10 = code;
                  code ++;
                  (*tmp___10) = (unsigned char )(repeat_max >> 8);
                  tmp___11 = code;
                  code ++;
                  (*tmp___11) = (unsigned char )(repeat_max & 255);
                }
              }
            } else {
              if (repeat_min == 1) {
                if (repeat_max == -1) {
                  tmp___12 = code;
                  code ++;
                  (*tmp___12) = (unsigned char )(20 + repeat_type);
                } else {
                  //goto _L___1;
                }
              } else {
                _L___1:  
                if (repeat_min != 1) {
                  tmp___13 = code;
                  code ++;
                  (*tmp___13) = (unsigned char )(26 + op_type);
                  tmp___14 = code;
                  code ++;
                  (*tmp___14) = (unsigned char )(repeat_min >> 8);
                  tmp___15 = code;
                  code ++;
                  (*tmp___15) = (unsigned char )(repeat_min & 255);
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
                  tmp___16 = code;
                  code ++;
                  (*tmp___16) = (unsigned char )c;
                  tmp___17 = code;
                  code ++;
                  (*tmp___17) = (unsigned char )(18 + repeat_type);
                } else {
                  if (repeat_max != repeat_min) {
                    tmp___18 = code;
                    code ++;
                    (*tmp___18) = (unsigned char )c;
                    repeat_max -= repeat_min;
                    tmp___19 = code;
                    code ++;
                    (*tmp___19) = (unsigned char )(24 + repeat_type);
                    tmp___20 = code;
                    code ++;
                    (*tmp___20) = (unsigned char )(repeat_max >> 8);
                    tmp___21 = code;
                    code ++;
                    (*tmp___21) = (unsigned char )(repeat_max & 255);
                  }
                }
              }
            }
            tmp___22 = code;
            code ++;
            (*tmp___22) = (unsigned char )c;
          } else {
            if ((int )(*previous) == 53) {
              //goto _L___6;
            } else {
              if ((int )(*previous) == 54) {
                _L___6:  
                if (repeat_max == 0) {
                  code = previous;
                  //goto END_REPEAT;
                }
                if (repeat_min == 0) {
                  if (repeat_max == -1) {
                    tmp___23 = code;
                    code ++;
                    (*tmp___23) = (unsigned char )(45 + repeat_type);
                  } else {
                    //goto _L___4;
                  }
                } else {
                  _L___4:  
                  if (repeat_min == 1) {
                    if (repeat_max == -1) {
                      tmp___24 = code;
                      code ++;
                      (*tmp___24) = (unsigned char )(47 + repeat_type);
                    } else {
                      //goto _L___3;
                    }
                  } else {
                    _L___3:  
                    if (repeat_min == 0) {
                      if (repeat_max == 1) {
                        tmp___25 = code;
                        code ++;
                        (*tmp___25) = (unsigned char )(49 + repeat_type);
                      } else {
                        //goto _L___2;
                      }
                    } else {
                      _L___2:  
                      tmp___26 = code;
                      code ++;
                      (*tmp___26) = (unsigned char )(51 + repeat_type);
                      tmp___27 = code;
                      code ++;
                      (*tmp___27) = (unsigned char )(repeat_min >> 8);
                      tmp___28 = code;
                      code ++;
                      (*tmp___28) = (unsigned char )(repeat_min & 255);
                      if (repeat_max == -1) {
                        repeat_max = 0;
                      }
                      tmp___29 = code;
                      code ++;
                      (*tmp___29) = (unsigned char )(repeat_max >> 8);
                      tmp___30 = code;
                      code ++;
                      (*tmp___30) = (unsigned char )(repeat_max & 255);
                    }
                  }
                }
              } else {
                if ((int )(*previous) >= 70) {
                  //goto _L___5;
                } else {
                  if ((int )(*previous) == 65) {
                    //goto _L___5;
                  } else {
                    if ((int )(*previous) == 66) {
                      _L___5:  
                      ketoffset = 0;
                      len___0 = code - previous;
                      bralink = (uschar *)((void *)0);
                      if (repeat_max == -1) {
                        ket = previous;
			while (INF>0) {
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
                                  (unsigned int )len___0);
                          code ++;
                          tmp___31 = previous;
                          previous ++;
                          (*tmp___31) = (unsigned char )(68 + repeat_type);
                        } else {
                          memmove((void *)(previous + 4), (void const   *)previous,
                                  (unsigned int )len___0);
                          code += 4;
                          tmp___32 = previous;
                          previous ++;
                          (*tmp___32) = (unsigned char )(68 + repeat_type);
                          tmp___33 = previous;
                          previous ++;
                          (*tmp___33) = 70;
                          if ((unsigned int )bralink == (unsigned int )((void *)0)) {
                            offset = 0;
                          } else {
                            offset = previous - bralink;
                          }
                          bralink = previous;
                          tmp___34 = previous;
                          previous ++;
                          (*tmp___34) = (unsigned char )(offset >> 8);
                          tmp___35 = previous;
                          previous ++;
                          (*tmp___35) = (unsigned char )(offset & 255);
                        }
                        repeat_max --;
                      } else {
                        i___0 = 1;
                        while (i___0 < repeat_min) {
                          memcpy((void *)code, (void const   *)previous,
                                 (unsigned int )len___0);
                          code += len___0;
                          i___0 ++;
                        }
                        if (repeat_max > 0) {
                          repeat_max -= repeat_min;
                        }
                      }
                      if (repeat_max >= 0) {
                        i___0 = repeat_max - 1;
                        while (i___0 >= 0) {
                          tmp___36 = code;
                          code ++;
                          (*tmp___36) = (unsigned char )(68 + repeat_type);
                          if (i___0 != 0) {
                            tmp___37 = code;
                            code ++;
                            (*tmp___37) = 70;
                            if ((unsigned int )bralink == (unsigned int )((void *)0)) {
                              offset___0 = 0;
                            } else {
                              offset___0 = code - bralink;
                            }
                            bralink = code;
                            tmp___38 = code;
                            code ++;
                            (*tmp___38) = (unsigned char )(offset___0 >> 8);
                            tmp___39 = code;
                            code ++;
                            (*tmp___39) = (unsigned char )(offset___0 & 255);
                          }
                          memcpy((void *)code, (void const   *)previous,
                                 (unsigned int )len___0);
                          code += len___0;
                          i___0 --;
                        }
                        while ((unsigned int )bralink > (unsigned int )((void *)0)) {
			  // while ((unsigned int )bralink != (unsigned int )((void *)0)) {
                          offset___1 = (code - bralink) + 1;
                          bra = code - offset___1;
                          oldlinkoffset = ((int )(*(bra + 1)) << 8) + (int )(*(bra +
                                                                               2));
                          if (oldlinkoffset == 0) {
                            bralink = (uschar *)((void *)0);
                          } else {
                            bralink = bralink - oldlinkoffset;
                          }
                          tmp___40 = code;
                          code ++;
                          (*tmp___40) = 57;
                          tmp___41 = code;
                          code ++;
                          (*(bra + 1)) = (unsigned char )(offset___1 >> 8);
                          (*tmp___41) = (*(bra + 1));
                          tmp___42 = code;
                          code ++;
                          (*(bra + 2)) = (unsigned char )(offset___1 & 255);
                          (*tmp___42) = (*(bra + 2));
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
      //goto __Cont;
      case 58: 
      bravalue = 70;
      ptr_SLICE ++;
      break;
      case 40: 
      bravalue = 66;
      ptr_SLICE ++;
      if (((int )(*(cd->ctypes + (*ptr_SLICE))) & 4) != 0) {
        condref = (int )(*ptr_SLICE) - 48;
	while (INF>0) {
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
      tmp___43 = code;
      code ++;
      (*tmp___43) = 55;
      ptr_SLICE ++;
      //goto __Cont;
      default: 
      unset = 0;
      set = unset;
      optset = & set;
      while (INF>0) {
	//while (1) {
        if ((int )(*ptr_SLICE) != 41) {
          if (! ((int )(*ptr_SLICE) != 58)) {
            break;
          }
        } else {
          break;
        }
        tmp___44 = ptr_SLICE;
        ptr_SLICE ++;
        switch ((int )(*tmp___44)) {
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
            tmp___45 = code;
            code ++;
            (*tmp___45) = 12;
            tmp___46 = code;
            code ++;
            (*optchanged) = newoptions & 7;
            (*tmp___46) = (unsigned char )(*optchanged);
          }
        }
        options = newoptions;
        previous = (uschar *)((void *)0);
        //goto __Cont;
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
      tmp___47 = 1;
    } else {
      if (bravalue == 63) {
        tmp___47 = 1;
      } else {
        tmp___47 = 0;
      }
    }
    if ((options & 7) != (newoptions & 7)) {
      tmp___48 = newoptions & 7;
    } else {
      tmp___48 = -1;
    }
    tmp___49 = compile_regex(options | 13421, tmp___48, brackets, & tempcode,
                             & ptr_SLICE, errorptr, tmp___47, condref, & subreqchar, & subcountlits,
                             cd);
    if (! tmp___49) {
      //goto FAILED;
    }
    if (bravalue == 66) {
      tc = code;
      condcount = 0;
      while (INF>0) {
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
        //goto _L___8;
      } else {
        if (bravalue == 65) {
          //goto _L___8;
        } else {
          if (bravalue == 60) {
            //goto _L___8;
          } else {
            if (bravalue == 66) {
              if (condcount == 2) {
                _L___8:  
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
        tmp___50 = code;
        code ++;
        (*tmp___50) = 54;
        tmp___51 = code;
        code ++;
        (*tmp___51) = (unsigned char )(- c - 12);
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
        tmp___52 = code;
        code ++;
        (*tmp___52) = (unsigned char )(- c);
      }
      //goto __Cont;
    }
    ptr_SLICE = tempptr;
    c = '\\';
    NORMAL_CHAR: 
    default: 
    previous = code;
    (*code) = 16;
    code += 2;
    length = 0;
    while (INF>0) {
    //while (1) {
      if ((options & 8) != 0) {
        if (((int )(*(cd->ctypes + c)) & 1) != 0) {
          //goto __Cont___1;
        }
        if (c == 35) {
	  while (INF>0) {
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
          //goto __Cont___1;
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
      tmp___53 = code;
      code ++;
      (*tmp___53) = (unsigned char )c;
      length ++;
      __Cont___1:  
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
    __Cont:  
    ptr_SLICE ++;
  }
  FAILED: 
  (*ptrptr) = ptr_SLICE;
  return (0);
}
}

void main() {
  register char const   *pattern;
  register int options;
  register char const   **errorptr;
  register int *erroroffset; 
  register unsigned char const   *tables;
  
  pcre_compile(pattern,options,errorptr,erroroffset,tables);
  _SLICE(ptr_SLICE);
}
