struct LogHash {
   char *channel ;
   int logtype ;
   char *filename ;
   FILE *logfile ;
   struct LogHash *next ;
};

static struct LogHash *log_table[40]  ;


/* Main structure of the code */
void main(){

  read_cfg(); // read a configuration file
  dofork();   // fork a child process
  run();      //  run the server application 

}

read_cfg{
  yyparse{    // parse the file
     ----------------------------------------------
    |  add_log  // add entries into a hash table   |
     ----------------------------------------------
  }
}

run{
  read_server{
    read_server_reply_str{ // reply to client
     ------------------------------------------------
    | rem_log  // delete entries from the hash table |
     ------------------------------------------------
	  }
  }
  read_client{
    muh_commands{
      rehash{
	clear_logs{ // delete all entries from the hash table
	}
      }
    }
    
  }
}

/*
   The key for proving safety is to remember things done in add_log
   since rem_log depends on them
*/


/*
  This code takes the global hash table "log_table" and add a new
  element into it.
  
  KEY: each element inserted is of type "LogHash". Moreover, each
  element has a field called "logfile" which is of type "FILE" and
  where one of its subfields (_BLAST_FLAG) IS ALWAYS 1 (i.e., "file is
  open")
 */

void add_log(char *log_channel , char *logfile , int logtype___0 ) 
{ char *channel ;
  int multi ;
  int tmp ;
  char *tmp___0 ;
  struct LogHash *ptr ;
  struct LogHash *temp_ptr ;
  struct LogHash *last_ptr ;
  unsigned int hashval ;
  int tmp___1 ;
  size_t tmp___3 ;


  /* BEGIN IRRELEVANT CODE */
  multi = 0;
  if (! log_channel) return;

  // Compare strings log_channel and "*". If zero then they are equal
  tmp = _xstrcmp((char const   *)log_channel, (char const   *)"*",
                 (char const   *)"log.c", 46);
  if (tmp == 0) {
      global_logtype = logtype___0;
      open_logfiles_global();
      return;
  }
  // Search for the first occurrence of ","
  tmp___0 = strchr((char const   *)log_channel, (int )',');
  if (tmp___0) {
      multi = 1;
  }
  /* END IRRELEVANT CODE */


  // Get first token from the channel
  channel = strtok((char * )log_channel,
                   (char const   *)((char const   *)","));

  // while-loop iterates over each channel returned by strtok.
  while (channel) {
    last_ptr = (struct LogHash *)((void *)0);
    hashval = hash_channel(channel);
    temp_ptr = log_table[hashval];
    // while-loop to go to the end of linked list associated to the
    // hashed value.
    while (temp_ptr) {
      tmp___1 = _xstrcasecmp((char const   *)channel,
			     (char const   *)temp_ptr->channel,
			     (char const   *)"log.c", 71);
      if (tmp___1 == 0) {
	// If element already in the list then return
        return;
      }
      last_ptr = temp_ptr;
      temp_ptr = temp_ptr->next;
    }

    ///////////////////////////////////////////////////////////////
    // ptr contains the new element to be inserted in log_table
    ///////////////////////////////////////////////////////////////
    // xcalloc allocates 1 element of size struct LogHash and
    // initializes the value to 0.
    ptr = (struct LogHash *)xcalloc(1, sizeof(struct LogHash ));

    // Here to add the field "channel"
    ptr->channel = strdup((char const   *)channel);
    // Here to add the field "logtype"
    ptr->logtype = logtype___0;
    // Here to add the field "filename"    
    if (logfile) {
      if (multi) {
        tmp___3 = strlen((char const   *)channel);
        logfile = (char *)xmalloc(tmp___3 + 5);
        sprintf((char * )logfile,
                (char const   * )((char const   *)"%s.log"),
                channel);
        ptr->filename = logfile;
      } else {
        ptr->filename = strdup((char const   *)logfile);
      }
    }
    else {
      tmp___3 = strlen((char const   *)channel);
      logfile = (char *)xmalloc(tmp___3 + 5);
      sprintf((char *    )logfile,
              (char const   *   )((char const   *)"%s.log"),
              channel);
      ptr->filename = logfile;
    }

    if (last_ptr) {
      // if more than one element
      last_ptr->next = ptr;
    } 
    else {
      // if no elements
      log_table[hashval] = ptr;
    }
    //////////////////////////////////////////////////
    // Here to add the file "logfile" (RELEVANT CODE)
    //////////////////////////////////////////////////
    open_logfile(ptr);

    // Read next token for the next iteration
    channel = strtok((char *    )((char *)((void *)0)),
                     (char const   * )((char const   *)","));
  } // outer while loop
}

void open_logfile(struct LogHash *ptr ) 
{ char *tmp ;
  int tmp___0 ;

  tmp___0 = find_channel(ptr->channel);
  if (tmp___0 >= 0) {
    ptr->logfile = fopen((char const   * )((char const   *)ptr->filename),
                         (char const   * )((char const   *)"a"));
    /////////////////////////////////////////////////////////////////
    if (ptr->logfile != (FILE *)0) {
      (ptr->logfile)->__BLAST_FLAG = 1;
    }
    /////////////////////////////////////////////////////////////////
    tmp = get_logtimestamp();
    write_logentry(ptr, "Session Start: %s\n", tmp);
  }
  return;
}

void rem_log(char *channel ) 
{ struct LogHash *ptr ;
  struct LogHash *next_ptr ;
  unsigned int hashval ;
  char *tmp ;
  int tmp___0 ;
  char *tmp___1 ;
  int tmp___2 ;

  next_ptr = (struct LogHash *)((void *)0);
  hashval = hash_channel(channel);
  ptr = log_table[hashval];
  // while-loop
  while (ptr) {
    tmp___0 = _xstrcasecmp((char const   *)channel,
                           (char const   *)ptr->channel,
                           (char const   *)"log.c", 158);
    if (tmp___0 == 0) { 
      if (ptr->logfile) {
	tmp = get_logtimestamp();
	write_logentry(ptr, "Session Close: %s\n\n", tmp);
	//////////////////////////////////////////////////////////
	/* 
	   BLAST will report unsafe here. The main reason is "ptr" is an
	   element of the hash table "log_table". Then, to be safe the
	   open must be already opened (i.e., ptr->logfile)->__BLAST_FLAG==1)
           But this information is gone.
	 */
	if (! ((ptr->logfile)->__BLAST_FLAG == 1)) {
	  __error__();
	}
	//////////////////////////////////////////////////////////	
	fflush(ptr->logfile);
	if ((ptr->logfile)->__BLAST_FLAG == 1) {
	  (ptr->logfile)->__BLAST_FLAG = 0;
	} else 
	  __error__();
        fclose(ptr->logfile);
        ptr->logfile = (FILE *)((void *)0);
      }
      return;
    }
    ptr = ptr->next;
  } // end while-loop


  if (! global_logtype) 
    return;

  // Here similar stuff with th global log_table
  ptr = global_log_table[hashval];
  while (ptr) {
    next_ptr = ptr->next;
    tmp___2 = _xstrcasecmp((char const   *)channel,
                           (char const   *)ptr->channel,
                           (char const   *)"log.c", 183);
    if (tmp___2 == 0) {
      if (ptr->logfile) {
        tmp___1 = get_logtimestamp();
        write_logentry(ptr, "Session Close: %s\n\n", tmp___1);
	  //# 96 "spec.work"
        if ((ptr->logfile)->__BLAST_FLAG == 1) {
          (ptr->logfile)->__BLAST_FLAG = 0;
        } else {
	/* 
	   BLAST will report unsafe here. 
	*/
          __error__();
	}

        fclose(ptr->logfile);
      }
      if (ptr->channel) {
        free((void *)ptr->channel);
        ptr->channel = (char *)((void *)0);
      }
      if (ptr->logfile) {
        free((void *)ptr->logfile);
        ptr->logfile = (FILE *)((void *)0);
      }
      if (ptr) {
        free((void *)ptr);
        ptr = (struct LogHash *)((void *)0);
      }
    }
    ptr = next_ptr;
  }
  return;
}

void clear_logs(void) 
{ struct LogHash *ptr ;
  struct LogHash *next_ptr ;
  int i ;
  char *tmp ;
  char *tmp___0 ;

  i = 0;
  while (i < 40) {
    ptr = log_table[i];
    while (ptr) {
      next_ptr = ptr->next;
      if (ptr->logfile) {
        tmp = get_logtimestamp();
        write_logentry(ptr, "Session Close: %s\n\n", tmp);
	//# 96 "spec.work"
        if ((ptr->logfile)->__BLAST_FLAG == 1) {
          (ptr->logfile)->__BLAST_FLAG = 0;
        } else {
	  // RELEVANT CODE
          __error__();
        }

        fclose(ptr->logfile);
      }
      xfree((void *)ptr->channel);
      xfree((void *)ptr->filename);
      xfree((void *)ptr);
      ptr = next_ptr;
    } // end inner while

    ptr = global_log_table[i];
    while (ptr) {
      next_ptr = ptr->next;
      if (ptr->logfile) {
        tmp___0 = get_logtimestamp();
        write_logentry(ptr, "Session Close: %s\n\n", tmp___0);
	//# 96 "spec.work"
	if ((ptr->logfile)->__BLAST_FLAG == 1) {
	  (ptr->logfile)->__BLAST_FLAG = 0;
	} else {
	  __error__();
	}
        fclose(ptr->logfile);
      }
      xfree((void *)ptr->channel);
      xfree((void *)ptr->filename);
      xfree((void *)ptr);
      ptr = next_ptr;
    }
    log_table[i] = (struct LogHash *)((void *)0);
    global_log_table[i] = (struct LogHash *)((void *)0);
    i ++;
  }
  return;
}


//# 251
void close_logs(void) 
{ struct LogHash *ptr ;
  struct LogHash *next_ptr ;
  int i ;
  char *tmp ;
  char *tmp___0 ;

  i = 0;
  while (i < 40) {
    ptr = log_table[i];
    while (ptr) {
      next_ptr = ptr->next;
      if (ptr->logfile) {
        tmp = get_logtimestamp();
        write_logentry(ptr, "Session Close: %s\n\n", tmp);
	//# 96 "spec.work"
        if ((ptr->logfile)->__BLAST_FLAG == 1) {
          (ptr->logfile)->__BLAST_FLAG = 0;
        } else {
          __error__();
        }

        fclose(ptr->logfile);
        ptr->logfile = (FILE *)((void *)0);
      }
      ptr = next_ptr;
    } // inner loop
    ptr = global_log_table[i];

    while (ptr) {
      next_ptr = ptr->next;
      if (ptr->logfile) {
        tmp___0 = get_logtimestamp();
        write_logentry(ptr, "Session Close: %s\n\n", tmp___0);
	//# 96 "spec.work"
        if ((ptr->logfile)->__BLAST_FLAG == 1) {
	  //# 97
          (ptr->logfile)->__BLAST_FLAG = 0;
        } else {
	  //# 98
          __error__();
        }
        fclose(ptr->logfile);
      }
      xfree((void *)ptr->channel);
      xfree((void *)ptr->filename);
      xfree((void *)ptr);
      ptr = next_ptr;
    }
    global_log_table[i] = (struct LogHash *)((void *)0);
    i ++;
  } // end outer while
  return;
}
