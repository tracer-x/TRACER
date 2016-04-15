/*  -*- Last-Edit:  Mon Dec  7 10:31:51 1992 by Tarak S. Goradia; -*- */

extern void	exit();
# include <stdio.h>

void	Caseerror();

typedef char	bool;
typedef char	character;

bool
getline(s, maxsize)
char	*s;
int	maxsize;
{
    char *result = malloc(sizeof(char) * maxsize);
    //result = fgets(s, maxsize, stdin);
    int iii=0;
    while(iii < maxsize) {
        char tmp;
        CREST_char(tmp);
        result[iii] = tmp;
        iii++;
    }
    return (result != 0);
}
int
addstr(c, outset, j, maxset)
char	c;
char	*outset;
int	*j;
int	maxset;
{
    bool	result;
    if (*j >= maxset)
	result = 0;
    else {
	outset[*j] = c;
	*j = *j + 1;
	result = 1;
    }
    return result;
}

char
esc(s, i)
char 	*s;
int	*i;
{
    char	result;
    if (s[*i] != '@')
	result = s[*i];
    else
	if (s[*i + 1] == '\0')
	    result = '@';
	else 
	{
	    *i = *i + 1;
	    if (s[*i] == 'n')
		result = 10;
	    else
		if (s[*i] == 't')
		    result = 9;
		else
		    result = s[*i];
	}
    return result;
}

void change();

 void
dodash(delim, src, i, dest, j, maxset)
char	delim;
char	*src;
int	*i;
char	*dest;
int	*j;
int	maxset;
{
    int	k;
    bool	junk;
    char	escjunk;

    while ((src[*i] != delim) && (src[*i] != '\0')) 
    {
	if (src[*i] == '@') {
	    escjunk = esc(src, i);
	    junk = addstr(escjunk, dest, j, maxset);
	} else	
	    if (src[*i] != '-')
		junk = addstr(src[*i], dest, j, maxset);
	    else if (*j <= 1 || src[*i + 1] == '\0')
		junk = addstr('-', dest, j, maxset);
	    else if ((isalnum(src[*i - 1])) && (isalnum(src[*i + 1])) 
		&& (src[*i - 1] <= src[*i + 1]))
		{
		    for (k = src[*i-1]+1; k<=src[*i+1]; k++) 
		    {
			junk = addstr(k, dest, j, maxset);
		    }	
		    *i = *i + 1;	
		} 
	    else	
		junk = addstr('-', dest, j, maxset);
	(*i) = (*i) + 1;
    }
}

bool
getccl(arg, i, pat, j)
char	*arg;
int	*i;
char	*pat;
int	*j;
{
    int	jstart;
    bool	junk;

    *i = *i + 1;
    if (arg[*i] == '^') {
	junk = addstr('!', pat, j, 100);
	*i = *i + 1;
    } else
	junk = addstr('[', pat, j, 100);
    jstart = *j;
    junk = addstr(0, pat, j, 100);
    dodash(']', arg, i, pat, j, 100);
    pat[jstart] = *j - jstart - 1;
    return (arg[*i] == ']');
}

 void
stclose(pat, j, lastj)
char	*pat;
int	*j;
int	lastj;
{
    int	jt;
    int	jp;
    bool	junk;


    for (jp = *j - 1; jp >= lastj ; jp--) 
    {
	jt = jp + 1;
	junk = addstr(pat[jp], pat, &jt, 100);
    }
    *j = *j + 1;
    pat[lastj] = '*';
}

bool in_set_2(c)
char c;
{
  return (c == '%' || c == '$' || c == '*');
}      

bool in_pat_set(c)
char c;
{
  return (   c == 'c' || c == '%'  || c == '$' || c == '?' 
          || c == '['     || c == '!' || c == '*');
}      

int
makepat(arg, start, delim, pat)
char	*arg;
int	start;
char	delim;
char	*pat;
{
    int	result;
    int	i, j, lastj, lj;
    bool	done, junk;
    bool	getres;
    char	escjunk;

    j = 0;
    i = start;
    lastj = 0;
    done = 0;
    while ((!done) && (arg[i] != delim) && (arg[i] != '\0')) {
	lj = j;
	if ((arg[i] == '?'))
	    junk = addstr('?', pat, &j, 100);
	else if ((arg[i] == '%') && (i == start))
	    junk = addstr('%', pat, &j, 100);
	else if ((arg[i] == '$') && (arg[i+1] == delim))
	    junk = addstr('$', pat, &j, 100);
	else if ((arg[i] == '[')) 
	{
	    getres = getccl(arg, &i, pat, &j);
	    done = (bool)(getres == 0);
	} 
	else if ((arg[i] == '*') && (i > start)) 
	{
	    lj = lastj;
	    if (in_set_2(pat[lj]))
		done = 1;
	    else
		stclose(pat, &j, lastj);
	} 
	else 
	{
	    junk = addstr('c', pat, &j, 100);
	    escjunk = esc(arg, &i);
	    junk = addstr(escjunk, pat, &j, 100);
	}
	lastj = lj;
	if ((!done))
	    i = i + 1;
    }	
    junk = addstr('\0', pat, &j, 100);
    if ((done) || (arg[i] != delim))
	result = 0;
    else
	if ((!junk))
	    result = 0;
	else
	    result = i;
    return result;
}

int
getpat(arg, pat)
char*	arg;
char*	pat;
{
    int	makeres;

    makeres = makepat(arg, 0, '\0', pat);
    return (makeres > 0);
}

int
makesub(arg, from, delim, sub)
	char*	arg;
	int	from;
	character	delim;
	char*	sub;
{
    int  result;
    int	i, j;
    bool	junk;
    character	escjunk;

    j = 0;
    i = from;
    while ((arg[i] != delim) && (arg[i] != '\0')) {
	if ((arg[i] == (unsigned)('&')))
	    junk = addstr(-1, sub, &j, 100);
	else {
	    escjunk = esc(arg, &i);
	    junk = addstr(escjunk, sub, &j, 100);
	}
	i = i + 1;
    }
    if (arg[i] != delim)
	result = 0;
    else {
	junk = addstr('\0', &(*sub), &j, 100);
	if ((!junk))
	    result = 0;
	else
	    result = i;
    }	
    return result;
}

bool
getsub(arg, sub)
	char*	arg;
	char*	sub;
{
    int	makeres;

    makeres = makesub(arg, 0, '\0', sub);
    return (makeres > 0);
}

void subline();

 bool
locate(c, pat, offset)
	character	c;
	char *	pat;
	int	offset;
{
    int	i;
    bool flag;

    flag = 0;
    i = offset + pat[offset];
    while ((i > offset))
    {
	if (c == pat[i]) {
	    flag = 1;
	    i = offset;
	} else
	    i = i - 1;
    }
    return flag;
}

bool
omatch(lin, i, pat, j)
	char*	lin;
	int	*i;
	char*	pat;
	int	j;
{
    char	advance;
    bool result;
    
    advance = -1;
    if ((lin[*i] == '\0'))
	result = 0;
    else 
    {
	if (!in_pat_set(pat[j]))
	{
	    abort();	
	} else
	{
	     switch (pat[j]) 
	     {			
	     case 'c':
		 if (lin[*i] == pat[j + 1])
		     advance = 1;
		 break ;	
	     case '%':
		 if (*i == 0)
		     advance = 0;
		 break ;
	     case '?':
		 if (lin[*i] != 10)
		     advance = 1;
		 break ;
	     case '$':
		 if (lin[*i] == 10)
		     advance = 0;
		 break ;
	     case '[':
		 if (locate(lin[*i], pat, j + 1))
		     advance = 1;	
		 break ;
	     case '!':
		 if ((lin[*i] != 10) && (!locate(lin[*i], pat, j+1)))
		     advance = 1;	
		 break ;
	     default:
		 Caseerror(pat[j]);
	     };
	 }	
    }
    if ((advance >= 0)) 
    {
	*i = *i + advance;
	result = 1;
    } else
	result = 0;
    return result;
}


patsize(pat, n)
	char*	pat;
	int	n;
{
    int size;
    if (!in_pat_set(pat[n])) {
	abort();
    } else
	switch (pat[n]) 
	{
	case 'c': size = 2; break;
	    
	case '%':  case '$':  case '?':
	    size = 1;
	    break;
	case '[':  case '!':
	    size = pat[n + 1] + 2;
	    break ;
	case '*':
	    size = 1;
	    break ;
	default:
	    Caseerror(pat[n]);
	}
    return size;
}

int
amatch(lin, offset, pat, j)
	char*	lin;
	int	offset;
	char*	pat;
	int	j;
{
    int	i, k;
    bool	result, done;

    done = 0;
    while ((!done) && (pat[j] != '\0'))
	if ((pat[j] == '*')) {
	    j = j + patsize(pat, j);
	    i = offset;
	    while ((!done) && (lin[i] != '\0')) {
		result = omatch(lin, &i, pat, j);
		if (!result)	
		    done = 1;
	    }
	    done = 0;
	    while ((!done) && (i >= offset)) {
		k = amatch(lin, i, pat, j + patsize(pat, j));
		if ((k >= 0))
		    done = 1;
		else
		    i = i - 1;
	    }
	    offset = k;
	    done = 1;
	} else {
	    result = omatch(lin, &offset, pat, j);
	    if ((!result)) {	
		offset = -1;
		done = 1;
	    } else
		j = j + patsize(pat, j);
	}
     return offset;
}

void
putsub(lin, s1, s2, sub)
  char *	lin;
  int	s1, s2;
  char *	sub;
{
    int	i;
    int		j;

    i = 0;
    while ((sub[i] != '\0')) {
	if ((sub[i] == -1))
	    for (j = s1; j < s2; j++) 
	    {
	    }	
	else	
	{
	}
	i = i + 1;
    }
}

void
subline(lin, pat, sub)
 char	*lin;
 char   *pat;
 char   *sub;
{	
	int	i, lastm, m;

	lastm = -1;
	i = 0;
	while ((lin[i] != '\0')) 
	{
	    m = amatch(lin, i, pat, 0);
	    if ((m >= 0) && (lastm != m)) {
		putsub(lin, i, m, sub);
		lastm = m;
	    }
	    if ((m == -1) || (m == i)) {
		i = i + 1;
	    } else
		i = m;
	}
}

 void
change(pat, sub)
char *pat, *sub;
{
    char line[100];
    bool result;
    
    result = getline(line, 100);
    while ((result)) {
	subline(line, pat, sub);
	result = getline(line, 100);
    }
}

main(argc, argv)
int	argc;
char	*argv[];
{
   char pat[100], sub[100];
   bool result;
    CREST_int(argc);
    while(iii < 5) {
        char tmp;
        CREST_char(tmp);
        argv[iii] = tmp;
    }

   if (argc < 2) 
   {
       exit(1);
   };

   result = getpat(argv[1], pat);
   if (!result)
   {
       exit(2);
   }

   if (argc >= 3)
   {
       result = getsub(argv[2], sub);
       if (!result)
       {	
	   exit(3);
       }
   } else
   {
       sub[0] = '\0';
   }
   
   change(pat, sub);
   return 0;
}

void
Caseerror(n)
	int	n;
{
	exit(4);
}
