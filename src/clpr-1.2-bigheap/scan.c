/***************************************************************
 *  CLP(R)                                                     *
 *  (c) Copyright International Business Machines Corporation  *
 *  (1989) 1991, 1992 All Rights Reserved                      *
 *  Version: 1.2b                                              *
 *  File: scan.c                                               *
 ***************************************************************/

#include <setjmp.h>

#include "standard.h"
#include "config.h"
#include "parse.h"
#include "symbols.h"

#define MAX_BUF	    (511)          /* max line length */

#define class(bits, no) ((bits << 4)| no)
#define CLASS_NO_MASK   (0xF)

#define CASE 0       
#if CASE
#define mask_class_no(x)		((x) & CLASS_NO_MASK)
#define mask_class_bits(x)		((x) & ~CLASS_NO_MASK)
#else
#define mask_class_no(x)		(x)
#define mask_class_bits(x)		((x) & ~CLASS_NO_MASK)
#endif

#define UC   class(0x1,0)	  /* Upper case alphabetic */
#define UL   class(0x2,1)	  /* Underline */
#define LC   class(0x4,2)	  /* Lower case alphabetic */
#define N    class(0x8,3)	  /* Digit */
#define QT   class(0x10,4)	  /* Single quote */
#define DC   class(0x20,5)    /* Double quote */
#define SY   class(0x40,6)	  /* Symbol character */
#define SL   class(0x80,7)	  /* Solo character */
#define BK   class(0x100,8)	  /* Brackets & friends */
#define BS   class(0x200,9)	  /* Blank space */
#define ENDF class(0x400,10)  /* EOF */
#define IGN  class(0x800, 11)

struct {
	FILE *stream;
	char filename[64];
	char line_buf[MAX_BUF];
	int	used, lineno, old_len, line_pos;
	char ch;
} stream_tab[MAX_STREAM+5];

static int cur_stream_no = -1;

char *cur_filename;
FILE *cur_stream;
char ch;
char close_quote;
int tok_type;
char tok_c;
PTERM *tok_ptr;

static char buffer[MAX_BUF];
int COMMENT_NEST = 1;
static char unread_buf[MAX_BUF];
static int unread_cnt = 0;
static char line_buf[MAX_BUF];
static int old_len = 0, line_pos = 0;
static int 	lineno = 1;

int comma_flg = FALSE;   /* ',' is a functor, not arg separator */
int bar_flg = FALSE;     /* TRUE in [A | B], otherwise treated as functor */

extern int START_USER_SESSION;

/*----------------------------------------------------- ascii ---------------*/

int ascii_classes[] = {

/* nul soh stx etx eot enq ack bel  bs  ht  nl  vt  np  cr  so  si */
    ENDF, BS, BS, BS, BS, BS, BS, BS, BS, BS, BS, BS, BS, BS, BS, BS,

/* dle dc1 dc2 dc3 dc4 nak syn etb can  em sub esc  fs  gs  rs  us */
    BS, BS, BS, BS, BS, BS, BS, BS, BS, BS, BS, BS, BS, BS, BS, BS,

/*  sp   !   "   #   $   %   &   '   (   )   *   +   ,   -   .   /  */
    BS, SL, DC,  SL, LC, SL, SY, QT, BK, BK, SY, SY, SL, SY, SY, SY,

/*  0   1   2   3   4   5   6   7   8   9   :   ;   <   =   >   ? */
    N,  N,  N,  N,  N,  N,  N,  N,  N,  N, SY, SL, SY, SY, SY, SY,

/*  @   A   B   C   D   E   F   G   H   I   J   K   L   M   N   O */
   SY, UC, UC, UC, UC, UC, UC, UC, UC, UC, UC, UC, UC, UC, UC, UC,

/*  P   Q   R   S   T   U   V   W   X   Y   Z   [   \   ]   ^   _ */
   UC, UC, UC, UC, UC, UC, UC, UC, UC, UC, UC, BK, SY, BK, SY, UL,

/*  `   a   b   c   d   e   f   g   h   i   j   k   l   m   n   o */
   SY, LC, LC, LC, LC, LC, LC, LC, LC, LC, LC, LC, LC, LC, LC, LC,

/*  p   q   r   s   t   u   v   w   x   y   z   {   |   }   ~  del */
   LC, LC, LC, LC, LC, LC, LC, LC, LC, LC, LC, SY, SL, SY, SY,  BS };

 
/*----------------------------------------------------- ebcdic --------------*/

int ebcdic_classes[] = {
/* 0 */
/* NUL SOH SIX ETX SEL HT  RNL DEL GE  SPS RPT VT  FF  CR  SO  SI    */
   ENDF, BS, BS, BS, BS, BS, BS, BS, BS, BS, BS, BS, BS, BS, BS, BS,
/* 16 */
/* DLE DC1 DC2 DC3 RES NL  BS  POC CAN EM  UBS CU1 IFS IGS IRS IUS   */
   BS, BS, BS, BS, BS, BS, BS, BS, BS, ENDF, BS, BS, BS, BS, BS, BS,
/* 32 */
/* DS  SOS FS  WUS BYP LF  ETB ESC RES RES SM  FMT RES ENQ ACK BEL   */
   BS, BS, BS, BS, BS, BS, BS, BS, BS, BS, BS, BS, BS, BS, BS, BS,
/* 48 */
/* RES RES SYN IR  PP  TRN NBS EOT SBS IT  RFF CU3 DC4 NAK RES SUB   */
   BS, BS, BS, BS, BS, BS, BS, BS, BS, BS, BS, BS, BS, BS, BS, BS,
/* 64 */
/* SP  RSP RES RES RES RES RES RES RES RES c   .   <   (   +   |     */
   BS, BS, BS, BS, BS, BS, BS, BS, BS, BS, SY, SY, SY, BK, SY, SL,
/* 80 */
/* &   RES RES RES RES RES RES RES RES RES !   $   *   )   ;   not   */
   SY, BS, BS, BS, BS, BS, BS, BS, BS, BS, SL, LC, SY, BK, SL, SY,
/* 96 */
/* -   /   NON NON NON NON NON NON NON NON |   ,   %   _   >   ?     */
   SY, SY, BS, BS, BS, BS, BS, BS, BS, BS, SL, SL, SL, UL, SY, SY,
/* 112 */
/* NON NON NON NON NON NON NON NON NON `   :   #   @   '   =   "     */
   BS, BS, BS, BS, BS, BS, BS, BS, BS, SY, SY, SL, SY, QT, SY, DC,
/* 128 */
/* NON a   b   c   d   e   f   g   h   i   NON NON NON NON NON NON   */
   BS, LC, LC, LC, LC, LC, LC, LC, LC, LC, BS, BS, BS, BS, BS, BS,
/* 144 */
/* NON j   k   l   m   n   o   p   q   r   NON NON NON NON NON NON   */
   BS, LC, LC, LC, LC, LC, LC, LC, LC, LC, BS, BS, BS, BS, BS, BS,
/* 160 */
/* NON ~   s   t   u   v   w   x   y   z   NON NON NON [ NON NON   */
   BS, SY, LC, LC, LC, LC, LC, LC, LC, LC, BS, BS, BS, BK, BS, BS,
/* 176 */
/* NON NON NON NON NON NON NON NON NON NON NON NON NON ] NON NON   */
   BS, BS, BS, BS, BS, BS, BS, BS, BS, BS, BS, BS, BS, BK, BS, BS,
/* 192 */	
/* {   A   B   C   D   E   F   G   H   I   NON NON NON NON NON NON   */
   SY, UC, UC, UC, UC, UC, UC, UC, UC, UC, BS, BS, BS, BS, BS, BS,
/* 208 */
/* }   J   K   L   M   N   O   P   Q   R   NON NON NON NON NON NON   */
   SY, UC, UC, UC, UC, UC, UC, UC, UC, UC, BS, BS, BS, BS, BS, BS,
/* 224 */
/* \   NON S   T   U   V   W   X   Y   Z   NON NON NON NON NON NON   */
   SY, UC, UC, UC, UC, UC, UC, UC, UC, UC, BS, BS, BS, BS, BS, BS,
/* 240 */
/* 0   1   2   3   4   5   6   7   8   9   |   NON NON NON NON EO    */
   N , N , N , N , N , N , N , N , N , N , SL, BS, BS, BS, BS, BS };
 
#ifdef EBCDIC
int *chtype = ebcdic_classes;
#else
int *chtype = ascii_classes;
#endif

char peek();
char readchar();

extern char *emalloc();
extern char *str_space();

extern int name_hash;
extern struct HASHNODE *tok_hnode;
extern FILE *outfile;

extern int debug_flg;
extern jmp_buf err_readterm;

extern PTERM *null_list;
extern char *cons_str;

extern PTERM *lookup_var();
extern PTERM *lookup_name();
extern PTERM *lookup_const();
extern PTERM *new_real();
extern PTERM *new_str();
extern PTERM *new_pt_emptylist();

extern struct HASHNODE *hnode_emptylist;
extern PTERM *null_list;

/*---------------------------------------------------------------------------*/

init_scanner()
{
int i;
	for (i = 0; i < MAX_STREAM; i++) stream_tab[i].used = FALSE;
}

close_input(stream)
FILE *stream;
{
int i;
	for (i = 0; i < MAX_STREAM; i++) 
		if (stream_tab[i].used && stream_tab[i].stream == stream) {
			stream_tab[i].used = FALSE;
			return TRUE;
		}
	return FALSE;
}

new_input(stream, name)
FILE *stream;
char *name;
{
int found, i, free_slot;

	for (found = FALSE, free_slot = -1, i=0; i < MAX_STREAM; i++) {
		if (stream_tab[i].used) {
			if ( stream_tab[i].stream == stream) {
				found = TRUE;
				break;
			} 
		} else 
			free_slot = i; 
	}
	if (stream != cur_stream && cur_stream_no >= 0 && stream_tab[cur_stream_no].used) {
		stream_tab[cur_stream_no].lineno = lineno;
		stream_tab[cur_stream_no].old_len = old_len;
		stream_tab[cur_stream_no].line_pos = line_pos;
		stream_tab[cur_stream_no].ch = ch;
		if (line_pos)
			strncpy(stream_tab[cur_stream_no].line_buf, line_buf, line_pos);
		else
			strncpy(stream_tab[cur_stream_no].line_buf, line_buf, old_len);
	}
	if (found) {
		if (cur_stream != stream)
			ch = stream_tab[i].ch;
		cur_stream_no = i;
		cur_stream = stream_tab[i].stream;
		cur_filename = stream_tab[i].filename;
		lineno = stream_tab[i].lineno;
		old_len = stream_tab[i].old_len;
		line_pos = stream_tab[i].line_pos;
		if (line_pos) strncpy(line_buf, stream_tab[i].line_buf, old_len);
		else strncpy(line_buf, stream_tab[i].line_buf, old_len);
	} else {
		if (free_slot == -1) fatal("no more i/o streams");
		stream_tab[free_slot].stream = cur_stream = stream;
		strncpy(stream_tab[free_slot].filename, cur_filename = name, 63);
		stream_tab[free_slot].used = TRUE;
		stream_tab[free_slot].ch = ' ';
		cur_stream_no = free_slot;
		old_len = 0;
		line_pos = 0;
		lineno = 1;
		unreadchar(127);
		readchar();
	}
}

static int lookahead_flag = FALSE;

char readchar() /*** returns '\0' on EOF ***/
{
register int c;
	if (unread_cnt > 0) {
		c = unread_buf[--unread_cnt];
/* if (START_USER_SESSION) {printf("READ1(%d) ",c); fflush(stdout); } */
	} else if ((c = getc(cur_stream)) == EOF)  c = '\0';
	if (c == '\n') {
		lineno++;
		old_len = line_pos;
		line_pos = 0;
	} else 
	if (line_pos < MAX_BUF) line_buf[line_pos++] = c;
	else {
		old_len = line_pos;
		line_pos = 0;
		line_buf[line_pos++] = c;
	}
	ch = c;
/* if (START_USER_SESSION) { printf("RD(%d) ",c); fflush(stdout); } */
	return c;
}

unreadchar(c) /*** NULL for EOF ***/
register char c;
{
	if (c != '\0') {
		if (unread_cnt >= MAX_BUF) fatal("too many pushbacks");
		unread_buf[unread_cnt++]=c;
		if (c == '\n') lineno--;
		if (line_pos) line_pos--;
	}
}

char peek() /*** just look, not touch ***/
{
register char c1, c2;
	c1 = ch;
	c2 = readchar();
	unreadchar(c2);
	ch = c1;
	return c2;
}

get_name(s) /*** stores a NAME in s, NAME is either variable or symbolic ***/
register char *s;
{
register char c;
register int hash_sum;
	hash_sum = 0;
	c = ch;
	do {
		*s++ = c;
		hash_sum += c; 
		c = readchar();
	} while (chtype[c] & mask_class_bits(UC | UL | LC | N));
	*s = '\0';
	return hash_sum;
}

/************************************************************
 *	top level call in scanner; returns tok_type (eg. VAR);
 *	tok_ptr contains a pointer to the PTERM constructed;
 *	tok_c contains the character scanned for those characters 
 *	    which are single (SL);
 ************************************************************/

scan()
{
register char c;
char *s;
double tens, intpart, fracpart, num;
int sign = 1, esign, expart;
int level;
int hash_sum;

START:
	c = ch;
/* if (START_USER_SESSION) { printf("(FIRST=%d) ",c); fflush(stdout); } */
	while (chtype[c] == BS) c = readchar();

	/********************************/
	switch(mask_class_no(chtype[c])) {
	/********************************/

	case mask_class_no(UC):
	case mask_class_no(UL):
		tok_ptr = lookup_var(buffer, get_name(buffer));
		return(tok_type = VAR);
	case mask_class_no(LC):
		tok_ptr = lookup_name(buffer, get_name(buffer)); 
/* if (START_USER_SESSION) {printf("NAME(%s) ", buffer); fflush(stdout); } */
		return(tok_type = NAME);
	case mask_class_no(SY):
		s = buffer;
		if (ch == '.' &&
				(chtype[peek()] == BS || chtype[peek()] == ENDF)) {
			readchar();
			tok_c = '.';
			return(tok_type = PUNC);
		} else if (c == '/' && peek() == '*') {
			level = 0;
		START_COMMENT:
				readchar();
				if (COMMENT_NEST) level++;
			WITHIN_COMMENT:
				if (COMMENT_NEST)
					while ((c = readchar()) != '/' && 
						c != '*' && chtype[c] != ENDF);
				else
					while ((c = readchar()) != '*' && 
						chtype[c] != ENDF);
				
				if (ch == '*' && peek() == '/') {
					readchar();
					readchar();
					if (!COMMENT_NEST || --level == 0) goto START;
				} else if (COMMENT_NEST && ch == '/' && peek() == '*')
					goto START_COMMENT;
				else if (chtype[ch] == ENDF)
					fatal("unexpected end of file in comment");
				goto WITHIN_COMMENT;
		} 
		c = ch;
		hash_sum = 0;
		do {
			if (c == '/') {
				if (peek() == '*') {
					/* BUG: oops
					unreadchar('/');
					*/
					break;
				} 
			}
			*s++ =c;
			hash_sum += c;
		} while (chtype[(c=readchar())] == SY);
		*s = '\0';
		tok_ptr = lookup_name(buffer, hash_sum); 
		tok_type = NAME;
		return(tok_type = NAME);
	case mask_class_no(N):
		intpart = fracpart = 0;
		expart = 0; esign = 1;
		c = ch;
		do {
			intpart = intpart*10+(c-'0');
		} while (chtype[(c = readchar())] == N);
		if (c == '.' && chtype[peek()] == N) {
			tens = 0.1;	
			c = readchar();
			do {
				fracpart += tens*(c-'0');
				tens *= 0.1;
			} while (chtype[(c = readchar())] == N);
		}
		if (c == 'e') {
			if (readchar() == '-') {
				esign = -1;
				readchar();
			} else {
				if (ch == '+') readchar();	
				esign = 1;
			}
			if (chtype[ch] == N) 
				do 
					expart = expart*10+(ch-'0');
				while (chtype[readchar()] == N);
		}
		num = sign*(intpart+fracpart)*pow(10.0,(double) esign*expart);
		tok_ptr = new_real(num);
		return(tok_type = REAL);
	case mask_class_no(QT):
	case mask_class_no(DC):
		c = close_quote = ch;
		hash_sum = 0;
		for (s = buffer; (c = readchar()) != close_quote && chtype[c] != ENDF;
			 	*s++ = c, hash_sum += c);
		*s='\0';
		readchar();
		if (chtype[c] == ENDF) 
			synerr("unexpected end of file within quotes");
/*
		else if (close_quote == '"') {
			tok_ptr = new_str(buffer);
			return(tok_type = STR);
		} else	{
*/
		else { /* strings disabled - converted to literals */
			tok_ptr=lookup_name(buffer, hash_sum);
			return(tok_type = NAME);
		}
	case mask_class_no(SL):
		if (c == '%') {
			while ((c=readchar()) != '\n' && (chtype[c] != ENDF));
			if (c == '\n') {
				readchar();
				goto START;
			} else return(ENDFILE);
		} else if (ch == '#' && chtype[peek()] == LC) {
			tok_ptr=lookup_const(buffer, get_name(buffer));
			if (!tok_ptr) synerr("unknown special constant");
			return(tok_type = REAL);
		}
		readchar();
		tok_c = c;
		if (c == ',' && comma_flg) return(tok_type=PUNC);
		if (c == '|' && bar_flg) return(tok_type=PUNC);
		buffer[0]=c;
		buffer[1]='\0';
		tok_ptr=lookup_name(buffer, (int) c);
		return(tok_type=NAME);
	case mask_class_no(BK):
		tok_c = c;
		c = readchar();
		if (tok_c == '[' && c == ']') {
			readchar();
			tok_ptr = new_pt_emptylist();
			tok_hnode = hnode_emptylist;
			return(tok_type = NAME);
		}
		return(tok_type = PAREN);
	case mask_class_no(ENDF):
		return(tok_type = ENDFILE);
	default:
		synerr("illegal character");
		return 0; /* quiet gcc */
	}
}

myisdigit(c)
char c;
{
	return(chtype[c] == N);
}

is_punc(punc)
char punc;
{
	if (tok_type == PUNC && tok_c == punc)
		return(TRUE);
	else	return(FALSE);
}

synerr(s) /*** if error, jump to readterm in parser ***/
char *s;
{
int i;
	if (line_pos == 0 && old_len > 0) {
		printf("Syntax error, %s:%d : %s\n", cur_filename, lineno - 1, s);
		for (i = 0; i < old_len; i++) putchar(line_buf[i]);
	} else {
		printf("Syntax error, %s:%d : %s\n",cur_filename,lineno,s);
		for (i = 0; i < line_pos; i++) putchar(line_buf[i]);
	}
	printf("<--\n");
	while (!is_punc('.') && tok_type != ENDFILE) scan();
	longjmp(err_readterm,TRUE);
}

sum_str(s)
register char *s;
{
register int c;
	c = 0;
	while (*s) c+= *s++;
	return c;
}

readline(s, n)
char *s;
int n;
{
int i;

	n--;
	readchar();
	for (i=0; ch != '\n' && i < n; i++) {
		*s++ = ch;
		readchar();
	}
	if (i == n) {
		while (ch != '\n' && ch)
			readchar();
	}
	*s = '\0';
}

the_lineno()
{
	if (ch == '\n') return lineno-1;
	else return lineno;
}

char *the_filename()
{
	return cur_filename;
}

char get0()
{
	char c;

	c = ch;
	if (c == 127) {
		do {
		} while ((c = readchar()) == 127);
	} 
	if (c == '\n') unreadchar(127); 
	readchar(); 
	return c;
}

void gobble_nl()
{
	if (chtype[ch] == BS) {
		unreadchar(127);
		readchar();
	}
}

void ungetchar(c)
char c;
{
	unreadchar(ch);
	ch = c;
}

