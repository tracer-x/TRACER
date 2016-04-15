typedef struct __FILE{ 
  int BLAST_FLAG; 
}FILE ;

extern void *malloc(int t);
extern void errorFn() {}

FILE *get_stderr() {
    FILE *f = (FILE *)malloc(sizeof(FILE));
/*
    f->BLAST_FLAG = 1; return f;
*/
    if (f->BLAST_FLAG==1) {
      return f;
    } else {
      //STUCK: goto STUCK;
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
  }
}
/* Pointer analysis: [Steensgaard, field-insensitive] */
/*  points-to-set([fname, outfile]) */
/*  points-to-set([f->BLAST_FLAG, f->BLAST_FLAG, f->BLAST_FLAG, f->BLAST_FLAG]) */
/*  points-to-set([&(f->BLAST_FLAG), f, f, f, f, ret$get_stderr, ret$fopen,  */
/*                 &(f->BLAST_FLAG), &(f->BLAST_FLAG), f,  */
/* 		&(f->BLAST_FLAG), malloc0, malloc1]) */

/* Pointer analysis: [Steensgaard, field-sensitive] */
/*  points-to-set([fname, outfile]) */
/*  points-to-set([f->BLAST_FLAG, f->BLAST_FLAG, f->BLAST_FLAG, f->BLAST_FLAG]) */
/*  points-to-set([f, f, f, f, ret$get_stderr, ret$fopen, f, malloc0, malloc1]) */
/*  points-to-set([&(f->BLAST_FLAG), &(f->BLAST_FLAG), &(f->BLAST_FLAG), &(f->BLAST_FLAG)]) */


