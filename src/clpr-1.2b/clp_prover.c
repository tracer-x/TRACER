/* 
   This file is a wrapper for calling clp-prover, a tool for
   interpolant generation implemented by Andrey Rybalchenko.
*/

#include "clp_prover.h"
#include <errno.h>

int mygetline(char line[], int max)
{
	int nch = 0;
	int c;
	max = max - 1;  /* leave room for '\0' */
	while((c = getchar()) != EOF) {
		if(c == '\n')
			break;
		if(nch < max) {
			line[nch] = c;
			nch = nch + 1;
		}
	}
	if(c == EOF && nch == 0) {
		return EOF;
	}
	line[nch] = '\0';
	return nch;
}

int stdoutbak, stdinbak;

int outbound[2];  // from parent to child
int inbound[2];   // from child to parent

void save_normal_fildes() {
	stdoutbak = dup(STDOUT_FILENO);
	stdinbak = dup(STDIN_FILENO);
}

void restore_normal_fildes() {
	if(dup2(stdoutbak, STDOUT_FILENO) == -1)
		fatal("dup2 error restoring stdout");
	if(dup2(stdinbak, STDIN_FILENO) == -1)
		fatal("dup2 error restoring stdin");

	close(stdoutbak);
	close(stdinbak);
}

void my_dup() {
	if(dup2(outbound[1], STDOUT_FILENO) == -1)
		fatal("dup2 error outbound[1]");
	if(dup2(inbound[0], STDIN_FILENO) == -1)
		fatal("dup2 error inbound[0]");
}

void clp_prover_start() {
	char line[MAX_CLPPROVER];

	// Create the pipe
	if(pipe(outbound) == -1  || pipe(inbound) == -1) {
		if(errno == EMFILE) fatal("process has too many files open");
		if(errno == ENFILE) fatal("system has too many files open");
		fatal("unknown pipe error");
	}

	// fork() requires twice the amount of the parent memory. This can
	// happen even when fork() is immediately followed by an exec() call that
	// would release most of that extra memory.
	// In my machine, if I use fork() i get ENOMEM error.
	// vfork() solves this problem but it may introduce new problems
	// with several threads (deadlock). Anyway, this is not a problem for us.
	switch (vfork()) {
	case -1: 
		if (errno == EAGAIN)
			fatal("Fork error. No enough resources to create a new process.");
		if (errno == ENOMEM)
			fatal("Fork error. The process requires more space.");

	case  0:  // CHILD
		if(dup2(outbound[0] , STDIN_FILENO) == -1)
			fatal("dup2 error");
		if(dup2(inbound[1]  , STDOUT_FILENO) == -1)
			fatal("dup2 error");

		close(outbound[1]); 
		close(inbound[0]); 
		close(outbound[0]);
		close(inbound[1]);

		char *base_path = getenv("TRACER_PATH");
		char *path = malloc(strlen(base_path) + 50);
		sprintf(path, "%s/lib/clp-prover", base_path);
		if(execl(path, "clp-prover", NULL) == -1){
			fprintf(stderr, "is the path to clpprover correct? %s\n", path);
			fatal("execl Error!");
		}

		// exec call should never return
		fatal("execl Error!");

	default: // PARENT
		// Set non-buffered output on stdout
		setvbuf(stdout,(char*)NULL,_IONBF,0);	
		setvbuf(stderr,(char*)NULL,_IONBF,0);	

		close(outbound[0]);
		close(inbound[1]);

		save_normal_fildes();
		my_dup();

		// set option to print ast in clpprover
		printf("print_interpolant_ast.\n");
		fflush(stdout);

		// read preamble
		mygetline(line, MAX_CLPPROVER);
		mygetline(line, MAX_CLPPROVER);
		mygetline(line, MAX_CLPPROVER);

		restore_normal_fildes();

		fprintf(stderr, "clpprover started!\n");
	}
}

int clp_prover_interpolate(char *a, char* b, hash_table_t * varstable)
{
	char line[MAX_CLPPROVER];
	int SAT;

	save_normal_fildes();
	my_dup();

	printf("interpolate([%s],[%s]).\n", a, b);
	fflush(stdout);

	mygetline(line, MAX_CLPPROVER);

	SAT = (strcmp(line,"satisfiable_input") == 0);
	if(!SAT) convertCLPProverToCLPR(varstable);
	else fprintf(stderr, "SAT query\n");

	restore_normal_fildes();

	return SAT;
}

void clp_prover_exit() {
	int status;
	char line[MAX_CLPPROVER];

	save_normal_fildes();
	my_dup();

	printf("exit.\n");
	fflush(stdout);

	while(mygetline(line,MAX_CLPPROVER) != -1 );
	wait(&status);

	close(outbound[1]); 
	close(inbound[0]); 

	restore_normal_fildes();
	fprintf(stderr, "clpprover closed!\n");
}
