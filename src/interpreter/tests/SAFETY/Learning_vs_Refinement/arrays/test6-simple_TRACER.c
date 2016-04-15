// SAFE

typedef struct __FILE { int BLAST_FLAG; } FILE ;
extern int *malloc(int t);

int *get_stderr() {
    int *f;
    if (*f == 1){
    	return f;
    } /*else {
    STUCK: goto STUCK;
    }*/
}

int *fopen(char *fname){
  int *f = malloc(sizeof(FILE));
  *f = 1;
  return f;
}

int fclose (int *f){
  _ABORT(*f == 0);
  *f = 0;
}

void fprintf(int *f) {
  _ABORT(*f==0);
}

void main() {
  int *f;
  char *outfile;
  //  while (1) {
  if (outfile!=0) {
    f = fopen(outfile);
  } else {
    f = get_stderr();
  }
  fprintf(f);
  fclose(f);
  //  } /*end while*/
}
