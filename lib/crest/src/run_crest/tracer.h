#ifndef TRACER_H__
#define TRACER_H__

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
#include "base/symbolic_interpreter.h"

using namespace std;
using namespace crest;

void tracer_load(char*);
void tracer_exit();
void tracer_paths_stats();
void tracer_infeasible_path(const SymbolicPath &, int, vector<branch_id_t>);
void tracer_feasible_path(const SymbolicPath &);
void RunTracer(const vector<value_t>&, const SymbolicExecution *);
int subsumedTurnaround(const SymbolicExecution *, size_t, vector<branch_id_t>);
int repeated(const SymbolicPath &);
void reset_time_executing_latest_path();
void add_time_executing_latest_path(time_t);
void indicateSubsumedTurnaround();
void indicateNonSubsumedTurnaround();
void enablePrint();
int is_running_cfg();
#endif // TRACER_H__
