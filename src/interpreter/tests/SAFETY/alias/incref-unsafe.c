//UNSAFE
//NO new preds found with FLAT + INCREF, works with CF + incref ...

typedef struct __FILE { int BLAST_FLAG; } FILE ;
extern void *malloc(int t);
void errorFn() { 
  // ERROR: goto ERROR; 
  _TRACER_abort(1);
}

FILE *get_stderr() {
    FILE *f = (FILE *)malloc(sizeof(FILE));
/*
    f->BLAST_FLAG = 1; return f;
*/
    if (f->BLAST_FLAG==1) {
    	return f;
    } else {
STUCK: goto STUCK;
    }
}

FILE *fopen (char *fname) {
    FILE *f = (FILE *)malloc(sizeof(FILE));
    f->BLAST_FLAG = 1; return f; 
}

int fclose (FILE *f) {
    if (f->BLAST_FLAG==0) {
	errorFn(); 
    }
    f->BLAST_FLAG = 0;
}

void fprintf(FILE *f) {
    if (f->BLAST_FLAG==0) {
	errorFn(); 
    } 
}

int main() {
    FILE *f, *out;
    char *outfile;
    while (1) {
    if (outfile!=0) {
	f = fopen(outfile);
        //out = f; 
    } else {
    	f = get_stderr();
        //out = f; 
    }
    //fprintf(out);
    fprintf(f);
    fclose(f);
    fprintf(f); //bug
    }
}
