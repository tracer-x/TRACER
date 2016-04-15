/* =================================================
 * ========= Global vars/ typedefs =================
 * =================================================
 */

typedef unsigned int size_t;

unsigned char eolbyte;
int filename_mask;
int out_before;
int out_after;

struct option
{
  char *name;
  int has_arg;
  int *flag;
  int val;
};

int show_help;

char const short_options[] ; // vijay - initialization not needed (unused var)

struct option long_options[] ; // vijay - initialization not needed (unused var)

char const *matcher;
int show_version;

int out_invert;

struct re_pattern_buffer
{
  unsigned char *buffer;
  unsigned long int allocated;
  unsigned long int used;
  unsigned long int syntax;
  char *fastmap;
  char * translate;
  size_t re_nsub;
  unsigned can_be_null;// : 1;
  unsigned regs_allocated;// : 2;
  unsigned fastmap_accurate;// : 1;
  unsigned no_sub;// : 1;
  unsigned not_bol;// : 1;
  unsigned not_eol;// : 1;
  unsigned newline_anchor;// : 1;
};

struct re_pattern_buffer regexbuf;

unsigned long int re_syntax_options;
unsigned long int syntax_bits, syntax_bits_set;
int case_fold;
unsigned char eolbyte_1;

static char re_syntax_table[256];

typedef struct
{
  long begalt_offset;
  long fixup_alt_jump;
  long inner_group_offset;
  long laststart_offset;
  unsigned regnum;
} compile_stack_elt_t;

typedef struct
{
  compile_stack_elt_t *stack;
  unsigned size;
  unsigned avail;
} compile_stack_type;

char *optarg;
int optind;


int first;

/* =================================================
 * ====== Extern functions implemented ad-hoc ======
 * =================================================
 */

int malloc (int size) {
	if(size == 0)
		return 0;
	return 1; // some non-zero value
}

int realloc (unsigned char *buf, int size) {
	buf = 0; // free buf
	if(size == 0)
		return 0;
	return 2; // return some non-zero value
}

// only works for char array of size 2 terminated by \0 (in other words, only 1 char), which is just what is needed
int strcoll(char a[], char b[]) {
	return a[0] - b[0];
}

int printf(char *s) {
	return 0; // does nothing
}

/* =================================================
 * == Modified grep.c according to antlr/unfolder ==
 * =================================================
 */

void init() {
	optind = 1;
	first = 1;
}

void
setmatcher (char const *m)
{
  // vijay - check always succeeds
  // if (matcher && strcmp (matcher, m) != 0)
  //   fatal (_("conflicting matchers specified"), 0);
  matcher = m;
}

/* vijay - simulating function to parse command line options
 * first pass - return 'G'
 * second pass - return -1
 */

int
getopt_long (int argc, char *const *argv, const char *optstring, const struct option *longopts, int *longind)
{
	if (first) {
		first = 0;
		optind++;
		return 71; // ascii of 'G'
	}
	else
		return -1;
}

/* unsigned long int */
/* re_set_syntax (syntax) */
/*     unsigned long int syntax; */

unsigned long int re_set_syntax (unsigned long int syntax)
{
  unsigned long int ret = re_syntax_options;
  re_syntax_options = syntax;
  return ret;
}

void
dfasyntax (unsigned long int bits, int fold, int eol)
{
  syntax_bits_set = 1;
  syntax_bits = bits;
  case_fold = fold;
  eolbyte_1 = eol;
}

/* const char * */
/* re_compile_pattern (pattern, length, bufp) */
/*      int pattern[]; */
/*      size_t length; */
/*      struct re_pattern_buffer *bufp; */

const char * re_compile_pattern (int pattern[], size_t length, struct re_pattern_buffer *bufp)
{
  int ret;
  bufp->regs_allocated = 0;
  bufp->no_sub = 0;
  bufp->newline_anchor = 1;

  // vijay - bug trail ends with this call
  ret = regex_compile(pattern, length, re_syntax_options, bufp);
}

char *
xmalloc (size_t size)
{
  char *result;

  result = malloc (size);
  if (size && !result)
	printf("some error message like out of memory\n");
  return result;
}

void
init_syntax_once ()
{
   register int c;
   int done = 0;

   if (done)
     return;
   //bzero (re_syntax_table, sizeof re_syntax_table);

   for (c = 0; c < 256; ++c)
     if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122)) // previously was: if(ISALNUM(c))
	re_syntax_table[c] = 1;

   re_syntax_table[95] = 1; // ascii of '_'

   done = 1;
}


/* int */
/* regex_compile (pattern, size, syntax, bufp) */
/*      int pattern[]; */
/*      size_t size; */
/*      unsigned long int syntax; */
/*      struct re_pattern_buffer *bufp; */

int regex_compile (int pattern[], size_t size, unsigned long int syntax, struct re_pattern_buffer * bufp)
{
  unsigned char c, c1;
  const char *p1;
  unsigned char *b;
  compile_stack_type compile_stack;
  // int *p = pattern;
  int pend = size; // this will change our while loop's condition below // previously was: const char *pend = pattern + size;
  char * translate = bufp->translate;
  unsigned char *pending_exact = 0;
  unsigned char *laststart = 0;
  unsigned char *begalt;
  const char *beg_interval;
  unsigned char *fixup_alt_jump = 0;
  int i = 0; // counter for while loop

  unsigned regnum = 0;

  compile_stack.stack = xmalloc (32 * 5); // was: sizeof(compile_stack_elt_t));
  if (compile_stack.stack == 0)
    return -1;

  compile_stack.size = 32;
  compile_stack.avail = 0;

  bufp->syntax = syntax;
  bufp->fastmap_accurate = 0;
  bufp->not_bol = bufp->not_eol;
  bufp->not_eol = 0;

  bufp->used = 0;

  bufp->re_nsub = 0;

   init_syntax_once ();

  if (bufp->allocated == 0)
    {
      if (bufp->buffer)
		{
          bufp->buffer = realloc(bufp->buffer, 32 * 1); // was: 32 * sizeof(unsigned char));
        }
      else
        {
          bufp->buffer = malloc (32 * 1); // was: 32 * sizeof(unsigned char));
        }
      if (!bufp->buffer) return (-1);

      bufp->allocated = 32;
    }

  b = bufp->buffer;
  begalt = b;

  while (i < size) // (p != pend) // the loop condition will always be true, but the bug is hit during the first iteration itself
    {
     // PATFETCH (c);
     c = pattern[i]; i++;// c = (unsigned char) *p++;

      switch (c)
        {
			// vijay - this is the only case that is relevant
        case 91: // ascii of '['
          {
            // boolean had_char_class = false;
			int had_char_class = 0;

            if /* (p == pend) */ (i == size) return (-2);
	    	// GET_BUFFER_SPACE (34);
            laststart = b;
            //BUF_PUSH (*p == '^' ? charset_not : charset);
		    *b++ = (unsigned char) (12);

            p1 = pattern;
           // BUF_PUSH ((1 << BYTEWIDTH) / BYTEWIDTH);
    		*b++ = (unsigned char) (10000);
           // bzero (b, (1 << BYTEWIDTH) / BYTEWIDTH);
            //if ((re_opcode_t) b[-2] == charset_not
             //   && (syntax & 2822))
              //SET_LIST_BIT ('\n');

            while(1) // was: for (;;)
              {
                if /* (p == pend) */ (i == size) return (-2);

                //PATFETCH (c);
			    c = pattern[i]; i++; // c = (unsigned char) *p++;

                if (pattern[i] == 45 && pattern[i+1] != 93) //true // ascii of '-' and ']' respectively
                  {
                    int ret;

                    // PATFETCH (c1);
    				c1 = pattern[i]; i++;// c1 = (unsigned char) *p++;

					// vijay - bug trail ends with this call
                    ret = compile_range (/* &p */ pattern, pend, translate, syntax, b);
				  }
			  }
		  }
		}
	}
}

/* int */
/* compile_range (p_ptr, pend, translate, syntax, b) */
/*     /\* const int **p_ptr, *pend; *\/ */
/* 	int p_ptr[], pend; */
/*     char * translate; */
/*     unsigned long int syntax; */
/*     unsigned char *b; */

int
compile_range (int p_ptr[], int pend, char * translate, unsigned long int syntax, unsigned char * b)

{
  unsigned this_char;

  // const int *p = *p_ptr;
  int ret;
  char range_start[2];
  char range_end[2];
  char ch[2];
  int temp1, temp2;

  if (pend == 0) // (p == pend)
    return -3;

  range_start[0] = p_ptr[1];  range_start[1] = 0; // ascii of '\0'
  range_end[0]   = p_ptr[3];  range_end[1]   = 0; // ascii of '\0'

  // (*p_ptr)++;

  ret = syntax & 1234; // vijay - dummy. previously was: syntax & RE_NO_EMPTY_RANGES ? REG_ERANGE : REG_NOERROR; (all constants)

  for (this_char = 0; this_char <= 16 /* 256 */  /* (unsigned char) */ -1 ; this_char++)
    {
      ch[0] = this_char;  ch[1] = 0; // ascii for '\0' or NULL

	  // separating function call from block condition
	  temp1 = strcoll(range_start, ch);
	  temp2 = strcoll(ch, range_end);

	  _TRACER_abort(temp1 <= 0 &&  temp2 <= 0);
	  //_ABORT(temp1 ==7);
	  // if (temp1 <= 0 &&  temp2 <= 0) ERROR: goto ERROR;
	  /*
      if ( temp1 <= 0 &&  temp2 <= 0)
	{
	  // SET_LIST_BIT (TRANSLATE (this_char));
	  // ret = REG_NOERROR; // vijay - this is the original line and the line below is the seeded bug
	  ret = syntax & 1234; // used to be syntax & REG_NOERROR (some constant) so it can be replaced with arbitrary constant
	  printf("BUG HIT!\n");
	  exit(1);
	}
	  */
    }

  return ret;
}

void
Gcompile (int pattern [], size_t size)
{
  const char *err;

  // re_set_syntax(RE_SYNTAX_GREP | RE_HAT_LISTS_NOT_NEWLINE); // vijay - obtained from printf
  re_set_syntax((unsigned long int) 2822);
  dfasyntax((unsigned long int) 2822, 0, eolbyte);

  // vijay - bug trail ends with this call
  err = re_compile_pattern(pattern, size, &regexbuf);

  //if ((err = re_compile_pattern(pattern, size, &regexbuf)) != 0)
  //  fatal(err, 0);
}

void
usage (int status)
{
	printf("useless printout from usage\n");
	// exit(1);
}

int
main (int argc, char **argv)
{
  int keys[5]; // char *keys;
  size_t keycc, oldcc, keyalloc;
  int with_filenames;
  int opt, cc, status;
  int default_context;
  unsigned digit_args_val;

  init(); // initialize global variables

  *argv = "target4"; // argv[0] = "target4";
  
  // keys = 0;
  keycc = 0;
  with_filenames = 0;
  eolbyte = 10; // ascii for '\n';
  filename_mask = 1; // was: ~0

  out_before = -1;
  out_after = -1;
  default_context = 0;
  digit_args_val = 0;


  // bindtextdomain (PACKAGE, LOCALEDIR); // vijay - uses functions from libintl.h (no souce code available)
  // textdomain (PACKAGE); // anyways, PACKAGE and LOCALEDIR are not used anywhere for bug trail

  // vijay - useless call because first argument is 0 and prepend... does nothing
  // prepend_default_options (getenv ("GREP_OPTIONS"), &argc, &argv);

  // separating function call from block condition
  opt = getopt_long (argc, argv, short_options, long_options, 0);
  while ( opt
	 != -1) {
    switch (opt)
      {
		  // vijay - this is the only case that is relevant
      case 71: // ascii of 'G'
	setmatcher ("grep");
	break;
      }
  	opt = getopt_long (argc, argv, short_options, long_options, 0);
  }


  if (out_after < 0) //true
    out_after = default_context;
  if (out_before < 0) //true
    out_before = default_context;

  if (! matcher) //false
    matcher = "grep";

  if (show_version) //false
    {
      printf ("vijay - some useless output\n");
    }

  if (show_help) //false
    usage (0);

  if (keys) //false
    {
      if (keycc == 0)
        out_invert = out_invert ^ 1;
      else
        --keycc;
    }
  else
    if (optind < argc) //true
      {
	// keys = argv[optind++];
	keycc = 5; //strlen (keys);
      }
    else
      usage (2);

  // vijay - sets up the function pointer but we already know it's going to call Gcompile, so we'll just make the call directly
  // if (!install_matcher (matcher) && !install_matcher ("default")) //false
  //  abort ();
  // (*compile)(keys, keycc); // vijay - bug trail ends with this call

  // grounding inputs before call
  keys[0] = 91; // [
  keys[1] = 49; //   1
  keys[2] = 45; //     -
  keys[3] = 53; //       5
  keys[4] = 93; //         ]
  keycc = 5;

  Gcompile(keys, keycc);
}
