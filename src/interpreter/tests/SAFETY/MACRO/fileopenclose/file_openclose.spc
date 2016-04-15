#include "file_openclose.h"

event {
	after
	pattern { $1 = fopen($2, $3); }
	action { if ($1!=0) $1->__BLAST_FLAG  = 1; }
}

event {
	after
	pattern { $1 = fdopen($2, $3); }
	action { $1->__BLAST_FLAG  = 1; }
}
event {
	pattern { $4 = fgets($1, $2, $3); }
	guard { $3->__BLAST_FLAG == 1 }
	action { }
}
event {
	pattern { fflush($1); }
	guard { $1->__BLAST_FLAG == 1 }
	action { }
}
event {
	pattern { fputs($1, $2); }
	guard { $2->__BLAST_FLAG == 1 }
	action { }
}
event {
	pattern { fprintf($1, $2); }
	guard { /*$1 == stderr || $1 == stdout ||*/ $1->__BLAST_FLAG == 1 }
	action { }
}

event {
	pattern { fprintf($1, $2,$3); }
	guard { /* $1 == stderr || $1 == stdout || */ $1->__BLAST_FLAG == 1 }
	action { }
}
event {
	pattern { fprintf($1, $2,$3,$4); }
	guard { /* $1 == stderr || $1 == stdout || */ $1->__BLAST_FLAG == 1 }
	action { }
}
event {
	pattern { fprintf($1, $2,$3,$4,$5); }
	guard { /* $1 == stderr || $1 == stdout || */ $1->__BLAST_FLAG == 1 }
	action { }
}
event {
	pattern { fprintf($1, $2,$3,$4,$5,$6); }
	guard { /* $1 == stderr || $1 == stdout || */ $1->__BLAST_FLAG == 1 }
	action { }
}
event {
	pattern { fclose($1); }
	guard { $1->__BLAST_FLAG == 1 }
	action { $1->__BLAST_FLAG = 0; }
}

event {
	after
	pattern { $1 = get_stderr(); }
	action { $1->__BLAST_FLAG = 1; }
}
event {
	after
	pattern { $1 = get_stdout(); }
	action { $1->__BLAST_FLAG = 1; }
}

event {
	after
	pattern { $1 = get_stdin(); }
	action { $1->__BLAST_FLAG = 1; }
}
event {
	after
	pattern { exit($1); }
	action { {while (1) ;} }
}
