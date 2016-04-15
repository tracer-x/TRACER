% This program just reads the input file and writes the same file but
% each term in a new line.

% For option -rev_prog in tracer script

main(InFile,OutFile):-
	set_counter(terms,1),
	read_terms(InFile,OutFile).

	
read_terms(InFile,OutFile) :- 
	seeing(Old),      /* save for later */ 
        see(InFile),      /* open this file for read */ 
	telling(OldOut),  /* save for later */ 
        tell(OutFile),    /* open this file for write*/ 
        repeat, 
        read(Data),       /* read from File */ 
        process(Data),    
        seen,             /* close File */ 
        see(Old),         /* previous read source */       
        told,             /* close File */ 
	tell(OldOut),
        counter_value(terms,XX),
	printf("Number of terms read % \n",[XX]),
        !.                /* stop now */ 
 
process('?-'(end)) :- !. 
process(C) :-  
	write_file(C),
	fail.

write_file(X):-
	add_counter(terms,1),
	write(X), write('.'),nl.



