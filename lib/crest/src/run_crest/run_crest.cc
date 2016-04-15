// Copyright (c) 2008, Jacob Burnim (jburnim@cs.berkeley.edu)
//
// This file is part of CREST, which is distributed under the revised
// BSD license.  A copy of this license can be found in the file LICENSE.
//
// This program is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See LICENSE
// for details.

#include <assert.h>
#include <stdio.h>
#include <sys/time.h>

#include "run_crest/concolic_search.h"
#include "run_crest/tracer.h"

/* TRACER      : enable/disable integration with TRACER (no subsumption) */
/* SUBSUMPTION : when TRACER=1, take advantage of subsumption */
int TRACER = 0;
int SUBSUMPTION = 0;
int INTERPOLANT = 0; /* 0 = SP, 1 = WP */
int FAST_VERIFICATION = 1;

int running_dfs = 0; // if DFS, to turn off repeated check
int running_cfg = 0; // if CFG, to turn on prediction check
int is_running_cfg() { return running_cfg; }

int main(int argc, char* argv[]) {
  if (argc < 4) {
    fprintf(stderr,
            "Syntax: run_crest <program> "
            "<number of iterations> "
            "-<strategy> [strategy options] [traceropt] [-fv]\n");
    fprintf(stderr,
            "  Strategies include: "
            "dfs, cfg, random, uniform_random, random_input \n");
    fprintf(stderr,
            "  traceropt includes: "
            "-tracersp -tracerwp \n");
    fprintf(stderr,
            "  provide -fv for fast verification\n");
    return 1;
  }

  if(argc >= 5) {
      TRACER = 1;
      string traceropt = argv[4];
      if(traceropt == "-tracersp") INTERPOLANT = 0;
      else if(traceropt == "-tracerwp") INTERPOLANT = 1;
      else return 1;

      if(argc == 6) {
          string fv = argv[5];
          if(fv == "-fv") FAST_VERIFICATION = 1;
      }
  }

  string prog = argv[1];
  int num_iters = atoi(argv[2]);
  string search_type = argv[3];

  // Initialize the random number generator.
  struct timeval tv;
  gettimeofday(&tv, NULL);
  //srand((tv.tv_sec * 1000000) + tv.tv_usec);
  srand(1234);

  tracer_load(argv[1]);
  crest::Search* strategy;
  if (search_type == "-random") {
    strategy = new crest::RandomSearch(prog, num_iters);
  } else if (search_type == "-random_input") {
    strategy = new crest::RandomInputSearch(prog, num_iters);
  } else if (search_type == "-dfs") {
      running_dfs = 1;
      strategy = new crest::BoundedDepthFirstSearch(prog, num_iters, 1000000);
  } else if (search_type == "-cfg") {
      running_cfg = 1;
    strategy = new crest::CfgHeuristicSearch(prog, num_iters);
  } else if (search_type == "-cfg_baseline") {
    strategy = new crest::CfgBaselineSearch(prog, num_iters);
  } else if (search_type == "-hybrid") {
    strategy = new crest::HybridSearch(prog, num_iters, 100);
  } else if (search_type == "-uniform_random") {
      strategy = new crest::UniformRandomSearch(prog, num_iters, 100000000);
  } else {
    fprintf(stderr, "Unknown search strategy: %s\n", search_type.c_str());
    return 1;
  }

  strategy->Run();

  delete strategy;
  tracer_paths_stats();
  tracer_exit();
  return 0;
}





// This part provides the interface for communication between 
// CREST and TRACER. Author: Vijay

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <unistd.h>
#include <vector>
#include <string>
#include <sys/wait.h>
#include <string.h>
#include <errno.h>

#include "base/basic_types.h"

#define MAX_CLPR 1024
#define MAX_PATH_SIZE 256

#define PREFIX_SUBSUMED_AT     "prefix subsumed at"
#define is_clpr_prompt(line,n) (line[n-2] == '?' && line[n-1] == '-')
#define prefix_subsumed(s)     (strstr(s, PREFIX_SUBSUMED_AT)!= NULL)
#define is_subsumed_path(s)    (strstr(s, "SUBSUMED PATH:") != NULL)
#define is_repeated_path(s)    (strstr(s, "REPEATED PATH:") != NULL)
#define fv_was_triggered(s)    (strstr(s, "STARTING FAST VERIFICATION") != NULL)
#define fv_success(s)          (strstr(s, "Fast verification SUCCESS") != NULL)
#define is_subsumed_turnaround(s) (strstr(s, "SUBSUMED CREST TURN-AROUND:")!= NULL)
#define is_tracer_safe(line)   (strncmp(line, safe, sizeof(safe)-1) == 0)
#define contains(lst,x)        (std::find(lst.begin(), lst.end(), x) != lst.end())

using namespace std;
using namespace crest;

void fatal(string s) {
    fprintf(stderr, "%s\n", s.c_str());
    exit(1);
}

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

            if(is_clpr_prompt(line, nch)) {
                line[nch] = '\0';
                return EOF; /* this is "end of file" for now */
            }
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

void tracer_load(char *p) {
    if(!TRACER) return;

	char line[MAX_CLPR];
    char *base_path;
    char path[256];
    char prog[256];

	// Create the pipe
	if(pipe(outbound) == -1  || pipe(inbound) == -1) {
		if(errno == EMFILE) fatal("process has too many files open");
		if(errno == ENFILE) fatal("system has too many files open");
		fatal("unknown pipe error");
	}

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

		base_path = getenv("TRACER_PATH");
		sprintf(path, "%s/bin/tracer", base_path);
        sprintf(prog, "%s.cil.c", p);
        
		if(execl(path, "tracer", "safety", prog, "-testing_crest", "y",
                "-minmax", "y", "-convert-strict-ineq", "y", "-debug", "0", "-intp", 
                ((INTERPOLANT == 0)? "sp" : "ndwp"), NULL) == -1){
			fprintf(stderr, "is the path to TRACER correct? %s\n", path);
			fatal("execl error");
		}

		// exec call should never return
		fatal("execl error");

	default: // PARENT
		// Set non-buffered output on stdout
		setvbuf(stdout,(char*)NULL,_IONBF,0);	
		setvbuf(stderr,(char*)NULL,_IONBF,0);	

		close(outbound[0]);
		close(inbound[1]);

        fflush(stdout);
		save_normal_fildes();
		my_dup();

        while(mygetline(line,MAX_CLPR) != EOF) {
            restore_normal_fildes();
            fprintf(stdout, "%s\n", line);
            save_normal_fildes();
            my_dup();
        }

        if(FAST_VERIFICATION) {
            printf("set_counter(fast_verification,1).\n");
            fflush(stdout);
        while(mygetline(line,MAX_CLPR) != EOF) {
            restore_normal_fildes();
            fprintf(stdout, "%s\n", line);
            save_normal_fildes();
            my_dup();
        }

        }
		restore_normal_fildes();

		fprintf(stderr, "TRACER started!\n");
	}
}

void tracer_exit() {
    if(!TRACER) return;

	int status;
	char line[MAX_CLPR];

	save_normal_fildes();
	my_dup();

	printf("halt.\n");
	fflush(stdout);

	while(mygetline(line,MAX_CLPR) != EOF);
	wait(&status);

	close(outbound[1]); 
	close(inbound[0]); 

	restore_normal_fildes();
	fprintf(stderr, "TRACER closed!\n");
}

/*
void tracer_run_with_inputs(vector<value_t> inputs) {
	char line[MAX_CLPR];
    char s[512];
    unsigned int i;

    sprintf(s, "%llu", inputs[0]);
    for(i=1; i < inputs.size(); i++) {
        char t[64];
        sprintf(t, ",%llu", inputs[i]);
        strcat(s, t);
    }

    printf("TRACER :: calling run_with_inputs(%s).\n", s);

	save_normal_fildes();
	my_dup();

	printf("run_with_inputs(%s).\n", s);
	fflush(stdout);

	while(mygetline(line,MAX_CLPR) != EOF);

	restore_normal_fildes();

    printf("TRACER :: executed call\n");
}
*/

char safe[] = "TRACER: the program is SAFE";

void tracer_infeasible_path(const SymbolicPath &path, int kkk /* flip point */,
        vector<branch_id_t> paired_branch_) {
    if(!TRACER) return;
    if(FAST_VERIFICATION) return;

    /* --- generate path with flipped branch --- */
    fprintf(stdout, "CREST tried to flip at branch %d into %d, failed\n", 
        path.branches()[path.constraints_idx()[kkk]],
        paired_branch_[path.branches()[path.constraints_idx()[kkk]]]);
    SymbolicPath flippedPath;
    for(size_t jjj = 0; jjj < path.branches().size(); jjj++) {
        if(jjj == path.constraints_idx()[kkk]) {
            flippedPath.Push(paired_branch_[path.branches()[path.constraints_idx()[kkk]]]);
            break; // since the path is infeasible, no point adding more ids
        }
        flippedPath.Push(path.branches()[jjj]);
    }

    /* --- inform TRACER this is an infeasible Crest path... --- */
	save_normal_fildes();
	my_dup();
    printf("set_counter(crest_infeasible_path,1).\n");
    fflush(stdout);
	restore_normal_fildes();
    
    /* --- ... and just run tracer_feasible_path on the flipped path --- */
    tracer_feasible_path(flippedPath);

	save_normal_fildes();
	my_dup();
    printf("set_counter(crest_infeasible_path,0).\n");
    fflush(stdout);
	restore_normal_fildes();
    
    return;
}

int print = 1;
void enablePrint() {
    print = 1;
}

time_t time_executing_latest_path = 0;
void add_time_executing_latest_path(time_t t) {
    time_executing_latest_path += t;
}
void reset_time_executing_latest_path() {
    time_executing_latest_path = 0;
}

int latest_turnaround_was_subsumed = 0;
void indicateSubsumedTurnaround() { latest_turnaround_was_subsumed = 1; }
void indicateNonSubsumedTurnaround() { latest_turnaround_was_subsumed = 0; }

vector<unsigned*> executed_paths;
vector<SymbolicPath> subsumed_prefixes;

void store_subsumed_prefix(char *line, const SymbolicPath &path) {
    // read from line the index at which path was subsumed
    strtok(line, ":");
    size_t idx = atoi(strtok(NULL, ":"));
    SymbolicPath subsumed_prefix;

    // form the prefix of the path up until that index and store it
    for (size_t i=0; i < path.branches().size(); i++) {
        if (path.branches()[i] < 0) continue;
        subsumed_prefix.Push(path.branches()[i]);
        if (subsumed_prefix.branches().size() == idx)
            break;
    }

    subsumed_prefixes.push_back(subsumed_prefix);
}

int check_subsumed_prefix(SymbolicPath& prefix) {
    for (size_t i=0; i < subsumed_prefixes.size(); i++) {
        SymbolicPath path = subsumed_prefixes[i];
        if (path.branches().size() != prefix.branches().size())
            continue;
        int match = 1;
        for (size_t j=0; j < path.branches().size(); j++) {
            if (path.branches()[j] != prefix.branches()[j]) {
                match = 0;
                break;
            }
        }
        if (match) return 1;
    }
    return 0;
}

time_t total_unwasted_time = 0;
int subsumedTurnaround(const SymbolicExecution* ex, size_t branch_idx,
    vector<branch_id_t> paired_branch) {
    if(!TRACER) return 0;

    const SymbolicPath& path = ex->path();
    SymbolicPath prefix;

    /* branch_idx is the index of the _constraint_ that is going to be flipped. 
     * idx is the index of the branch (on the path) that is going to be flipped */
    size_t idx = path.constraints_idx()[branch_idx];
    vector<branch_id_t> branch_ids = path.branches();

    if (idx >= branch_ids.size()) // sanity check
        fatal("something is not right..\n");

    for (size_t i=0; i < idx; i++) {
        if (branch_ids[i] > 0)
            prefix.Push(branch_ids[i]);
        if (check_subsumed_prefix(prefix)) {
            return 1;
        }
    }
    prefix.Push(paired_branch[branch_ids[idx]]);
    int ret = check_subsumed_prefix(prefix);

    return ret;
}

int subsumed(const SymbolicPath &path) {
    if (!TRACER) return 0;

    SymbolicPath prefix;
    for (size_t i=0; i < path.branches().size(); i++) {
        if (path.branches()[i] < 0) continue;
        prefix.Push(path.branches()[i]);
        if (check_subsumed_prefix(prefix))
            return 1;
    }
    return 0;
}

unsigned* encode_path(const SymbolicPath &path) {
    vector<branch_id_t> branches = path.branches();
    unsigned *p = (unsigned *) malloc(MAX_PATH_SIZE/8);
    assert(p);
    for (size_t i=0; i < MAX_PATH_SIZE/(8*sizeof(unsigned)); i++)
        p[i] = 0;
    unsigned j = 0, shift = 0;
    for (size_t i=0; i < branches.size(); i++) {
        if (branches[i] < 0) continue;
        p[j] |= (branches[i] % 2); /* odd-if even-else */
        shift++;
        if (shift < 8*sizeof(unsigned))
            p[j] <<= 1;
        else { j++; shift = 0; }
    }
    return p;
}

int time_repeated_path_check = 0;
int repeated(const SymbolicPath &path) {
    if (!TRACER || running_dfs) return 0;

    time_t t1 = time(NULL);
    unsigned *p = encode_path(path);
    int rep = 0;
    for(size_t i=0; i < executed_paths.size(); i++) {
        unsigned *p1 = executed_paths[i];
        size_t j;
        for (j=0; j < MAX_PATH_SIZE/(8*sizeof(unsigned)); j++)
            if (p[j] != p1[j]) break;
        if (j == MAX_PATH_SIZE/(8*sizeof(unsigned))) {
            rep = 1;
            break;
        }
    }
    time_repeated_path_check = time(NULL) - t1;
    return rep;
}

void add_non_repeated_path(const SymbolicPath &path) {
    if (running_dfs) return;

    executed_paths.push_back(encode_path(path));
}

void tracer_feasible_path(const SymbolicPath &path) {
    if(!TRACER) return;

    /* note: static var initialization is done only once */
    static int fast_verification_count = 0;
    static int fast_verification_success = 0;
    static int nsubsumed = 0;
    static int n_unique_paths = 0;

    if (print)
    fprintf(stderr, 
            "Useful time: %lds subsumed: %d unique: %d ", 
            total_unwasted_time, nsubsumed, n_unique_paths);
    print = 0;

    int rep = repeated(path);
    if(!rep) {
        add_non_repeated_path(path);
        n_unique_paths++;
    }

    // latest **turn-around** was subsumed, benefit provided. don't add
    // any timing because this is real benefit due to subsumption
    if (latest_turnaround_was_subsumed) {
        if (!rep) nsubsumed++;
        return;
    }

    // check if path is repeated. if yes, quasi-benefit provided
    // so add time_repeated_path_check and return. otherwise
    // add time to execute latest path and proceed to TRACER (below)
    if(rep) {
        //nsubsumed++;
        total_unwasted_time += time_repeated_path_check;
        return;
    }
    else total_unwasted_time += time_executing_latest_path;

    // the path (NOT the turn-around that resulted in the path)
    // goes into a subsumed tree: quick fix to avoid the
    // num. visited children > num. children error)
    // but **DO NOT increment nsubsumed**, as it's not a benefit provided
    if (subsumed(path)) {
        return;
    }

	char line[MAX_CLPR];
    char s[8192] = ""; // the entire CREST path
    unsigned int i;

    vector<branch_id_t> branch_ids = path.branches();

    for(i=0; i < branch_ids.size(); i++) {
        if(branch_ids[i] < 0) continue;

        char t[8];
        sprintf(t, "%d", branch_ids[i]);

        if(strlen(s) >= sizeof(s) - sizeof(t))
            fatal("CREST path too big\n");
        if(s[0] != '\0') strcat(s, ",");
        strcat(s, t);
    }

	save_normal_fildes();
	my_dup();
    printf("run_crest_feasible_path([%s]).\n", s);
	fflush(stdout);

    time_t mytime1 = time(NULL);

	while(mygetline(line,MAX_CLPR) != EOF) {
        //restore_normal_fildes();
        //fprintf(stdout, "%s\n", line);
        if (fv_was_triggered(line))
            fast_verification_count++;
        if (fv_success(line))
            fast_verification_success++;
        if (prefix_subsumed(line))
            store_subsumed_prefix(line, path);
        //save_normal_fildes();
        //my_dup();
    }

    time_t mytime = time(NULL);
    total_unwasted_time += mytime - mytime1;

	restore_normal_fildes();

    return;
}

void tracer_paths_stats() {
    if(!TRACER) return;

	char line[MAX_CLPR];

	save_normal_fildes();
	my_dup();

    printf("print_crest_paths_stats.\n");
	fflush(stdout);

	while(mygetline(line,MAX_CLPR) != EOF) {
        restore_normal_fildes();
        fprintf(stdout, "%s\n", line);
        save_normal_fildes();
        my_dup();
    }

	restore_normal_fildes();
}
