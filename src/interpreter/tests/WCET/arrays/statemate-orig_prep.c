# 1 "statemate-orig.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "statemate-orig.c"
# 35 "statemate-orig.c"
static char Bitlist[64];
# 56 "statemate-orig.c"
unsigned long tm_entered_EINSCHALTSTROM_MESSEN_BLOCK_ERKENNUNG_CTRLch_BLOCK_ERKENNUNG_CTRL__N_copy;




unsigned long tm_entered_WIEDERHOLSPERRE_FH_TUERMODUL_CTRLexited_BEREIT_FH_TUERMODUL_CTRL;
unsigned long tm_entered_WIEDERHOLSPERRE_FH_TUERMODUL_CTRL;
unsigned long sc_FH_TUERMODUL_CTRL_2375_2 ;
unsigned long sc_FH_TUERMODUL_CTRL_2352_1 ;
unsigned long sc_FH_TUERMODUL_CTRL_2329_1 ;
int FH_TUERMODUL_CTRL__N;
int FH_TUERMODUL_CTRL__N_copy;
int FH_TUERMODUL_CTRL__N_old;
unsigned long sc_FH_TUERMODUL_CTRL_1781_10 ;
unsigned long sc_FH_TUERMODUL_CTRL_1739_10 ;
int FH_TUERMODUL__POSITION ;
int FH_TUERMODUL__I_EIN ;
int FH_TUERMODUL__I_EIN_old;
int FH_DU__MFH;
int FH_DU__MFH_copy;
int FH_DU__POSITION ;
int FH_DU__I_EIN ;
int FH_DU__I_EIN_old;
int BLOCK_ERKENNUNG_CTRL__I_EIN_MAX;
int BLOCK_ERKENNUNG_CTRL__I_EIN_MAX_copy;
int BLOCK_ERKENNUNG_CTRL__N;
int BLOCK_ERKENNUNG_CTRL__N_copy;
int BLOCK_ERKENNUNG_CTRL__N_old;
char FH_TUERMODUL_CTRL__INREVERS2;
char FH_TUERMODUL_CTRL__INREVERS2_copy;
char FH_TUERMODUL_CTRL__INREVERS1;
char FH_TUERMODUL_CTRL__INREVERS1_copy;
char FH_TUERMODUL_CTRL__FT ;
char FH_TUERMODUL__SFHZ_ZENTRAL ;
char FH_TUERMODUL__SFHZ_ZENTRAL_old;
char FH_TUERMODUL__SFHZ_MEC ;
char FH_TUERMODUL__SFHZ_MEC_old;
char FH_TUERMODUL__SFHA_ZENTRAL ;
char FH_TUERMODUL__SFHA_ZENTRAL_old;
char FH_TUERMODUL__SFHA_MEC ;
char FH_TUERMODUL__SFHA_MEC_old;
char FH_TUERMODUL__KL_50 ;
char FH_TUERMODUL__BLOCK;
char FH_TUERMODUL__BLOCK_copy;
char FH_TUERMODUL__BLOCK_old;
char FH_TUERMODUL__FT ;
char FH_TUERMODUL__SFHZ;
char FH_TUERMODUL__SFHZ_copy;
char FH_TUERMODUL__SFHZ_old;
char FH_TUERMODUL__SFHA;
char FH_TUERMODUL__SFHA_copy;
char FH_TUERMODUL__SFHA_old;
char FH_TUERMODUL__MFHZ;
char FH_TUERMODUL__MFHZ_copy;
char FH_TUERMODUL__MFHZ_old;
char FH_TUERMODUL__MFHA;
char FH_TUERMODUL__MFHA_copy;
char FH_TUERMODUL__MFHA_old;
char FH_TUERMODUL__EKS_LEISTE_AKTIV ;
char FH_TUERMODUL__EKS_LEISTE_AKTIV_old;
char FH_TUERMODUL__COM_OPEN ;
char FH_TUERMODUL__COM_CLOSE ;
char FH_DU__KL_50 ;
char FH_DU__S_FH_FTZU;
char FH_DU__S_FH_FTAUF;
char FH_DU__FT ;
char FH_DU__EKS_LEISTE_AKTIV ;
char FH_DU__EKS_LEISTE_AKTIV_old;
char FH_DU__S_FH_TMBFAUFCAN;
char FH_DU__S_FH_TMBFAUFCAN_copy;
char FH_DU__S_FH_TMBFAUFCAN_old;
char FH_DU__S_FH_TMBFZUCAN;
char FH_DU__S_FH_TMBFZUCAN_copy;
char FH_DU__S_FH_TMBFZUCAN_old;
char FH_DU__S_FH_TMBFZUDISC ;
char FH_DU__S_FH_TMBFZUDISC_old;
char FH_DU__S_FH_TMBFAUFDISC ;
char FH_DU__S_FH_TMBFAUFDISC_old;
char FH_DU__S_FH_ZUDISC ;
char FH_DU__S_FH_AUFDISC ;
char FH_DU__DOOR_ID ;
char FH_DU__BLOCK;
char FH_DU__BLOCK_copy;
char FH_DU__BLOCK_old;
char FH_DU__MFHZ;
char FH_DU__MFHZ_copy;
char FH_DU__MFHZ_old;
char FH_DU__MFHA;
char FH_DU__MFHA_copy;
char FH_DU__MFHA_old;




unsigned long time;
char stable;
char step;

char NICHT_INITIALISIERT_NICHT_INITIALISIERT_next_state;
char ZENTRAL_KINDERSICHERUNG_CTRL_next_state;
char MEC_KINDERSICHERUNG_CTRL_next_state;
char KINDERSICHERUNG_CTRL_KINDERSICHERUNG_CTRL_next_state;
char B_FH_TUERMODUL_CTRL_next_state;
char A_FH_TUERMODUL_CTRL_next_state;
char WIEDERHOLSPERRE_FH_TUERMODUL_CTRL_next_state;
char INITIALISIERT_FH_TUERMODUL_CTRL_next_state;
char TIPP_SCHLIESSEN_FH_TUERMODUL_CTRL_next_state;
char MANUELL_SCHLIESSEN_FH_TUERMODUL_CTRL_next_state;
char OEFFNEN_FH_TUERMODUL_CTRL_next_state;
char SCHLIESSEN_FH_TUERMODUL_CTRL_next_state;
char FH_STEUERUNG_DUMMY_FH_STEUERUNG_DUMMY_next_state;
char EINKLEMMSCHUTZ_CTRL_EINKLEMMSCHUTZ_CTRL_next_state;
char BEWEGUNG_BLOCK_ERKENNUNG_CTRL_next_state;
char BLOCK_ERKENNUNG_CTRL_BLOCK_ERKENNUNG_CTRL_next_state;


void interface(void)
{
   if ((Bitlist)[(4)])
   tm_entered_WIEDERHOLSPERRE_FH_TUERMODUL_CTRL = time;
   if ((Bitlist)[(4)] || (Bitlist)[(6)])
   tm_entered_WIEDERHOLSPERRE_FH_TUERMODUL_CTRLexited_BEREIT_FH_TUERMODUL_CTRL = time;
   if ((sc_FH_TUERMODUL_CTRL_2375_2 != 0) && (time - sc_FH_TUERMODUL_CTRL_2375_2 >= 0.5))
   {
      FH_TUERMODUL__MFHA_copy = 0;
      sc_FH_TUERMODUL_CTRL_2375_2 = 0;

   }
   if ((sc_FH_TUERMODUL_CTRL_2352_1 != 0) && (time - sc_FH_TUERMODUL_CTRL_2352_1 >= 0.5))
   {
      FH_TUERMODUL__MFHZ_copy = 0;
      sc_FH_TUERMODUL_CTRL_2352_1 = 0;

   }
   if ((sc_FH_TUERMODUL_CTRL_2329_1 != 0) && (time - sc_FH_TUERMODUL_CTRL_2329_1 >= 0.5))
   {
      FH_TUERMODUL__MFHZ_copy = 0;
      sc_FH_TUERMODUL_CTRL_2329_1 = 0;

   }
   if ((sc_FH_TUERMODUL_CTRL_1781_10 != 0) && (time - sc_FH_TUERMODUL_CTRL_1781_10 >= 0.5))
   {
      sc_FH_TUERMODUL_CTRL_1781_10 = 0;

   }
   if ((sc_FH_TUERMODUL_CTRL_1739_10 != 0) && (time - sc_FH_TUERMODUL_CTRL_1739_10 >= 0.5))
   {
      sc_FH_TUERMODUL_CTRL_1739_10 = 0;

   }
   if (((Bitlist)[(0)] || BLOCK_ERKENNUNG_CTRL__N != BLOCK_ERKENNUNG_CTRL__N_old))
   tm_entered_EINSCHALTSTROM_MESSEN_BLOCK_ERKENNUNG_CTRLch_BLOCK_ERKENNUNG_CTRL__N_copy = time;


}


void init(void)
{
    tm_entered_EINSCHALTSTROM_MESSEN_BLOCK_ERKENNUNG_CTRLch_BLOCK_ERKENNUNG_CTRL__N_copy = 0;
    tm_entered_WIEDERHOLSPERRE_FH_TUERMODUL_CTRLexited_BEREIT_FH_TUERMODUL_CTRL = 0;
    tm_entered_WIEDERHOLSPERRE_FH_TUERMODUL_CTRL = 0;
   NICHT_INITIALISIERT_NICHT_INITIALISIERT_next_state = 0;
   ZENTRAL_KINDERSICHERUNG_CTRL_next_state = 0;
   MEC_KINDERSICHERUNG_CTRL_next_state = 0;
   KINDERSICHERUNG_CTRL_KINDERSICHERUNG_CTRL_next_state = 0;
   B_FH_TUERMODUL_CTRL_next_state = 0;
   A_FH_TUERMODUL_CTRL_next_state = 0;
   WIEDERHOLSPERRE_FH_TUERMODUL_CTRL_next_state = 0;
   INITIALISIERT_FH_TUERMODUL_CTRL_next_state = 0;
   TIPP_SCHLIESSEN_FH_TUERMODUL_CTRL_next_state = 0;
   MANUELL_SCHLIESSEN_FH_TUERMODUL_CTRL_next_state = 0;
   OEFFNEN_FH_TUERMODUL_CTRL_next_state = 0;
   SCHLIESSEN_FH_TUERMODUL_CTRL_next_state = 0;
   FH_STEUERUNG_DUMMY_FH_STEUERUNG_DUMMY_next_state = 0;
   EINKLEMMSCHUTZ_CTRL_EINKLEMMSCHUTZ_CTRL_next_state = 0;
   BEWEGUNG_BLOCK_ERKENNUNG_CTRL_next_state = 0;
   BLOCK_ERKENNUNG_CTRL_BLOCK_ERKENNUNG_CTRL_next_state = 0;


}



void generic_KINDERSICHERUNG_CTRL(void)
{
   if ((Bitlist)[(10)])
   {
      switch (KINDERSICHERUNG_CTRL_KINDERSICHERUNG_CTRL_next_state)
      {
         case 1 :
         {
            if (!(FH_TUERMODUL__SFHA_ZENTRAL || FH_TUERMODUL__SFHZ_ZENTRAL))
            {
               stable = 0;
                FH_TUERMODUL__SFHZ_copy = 0;
                 FH_TUERMODUL__SFHA_copy = 0;

               KINDERSICHERUNG_CTRL_KINDERSICHERUNG_CTRL_next_state = 3;
               ZENTRAL_KINDERSICHERUNG_CTRL_next_state = 0;
               break;
            }
            switch (ZENTRAL_KINDERSICHERUNG_CTRL_next_state)
            {
               case 1 :
               {
                  if ((FH_TUERMODUL__SFHA_ZENTRAL && !(FH_TUERMODUL__SFHA_ZENTRAL_old)))
                  {
                     stable = 0;
                      FH_TUERMODUL__SFHA_copy = 1;

                     ZENTRAL_KINDERSICHERUNG_CTRL_next_state = 1;
                     break;
                  }
                  if ((FH_TUERMODUL__SFHZ_ZENTRAL && !(FH_TUERMODUL__SFHZ_ZENTRAL_old)))
                  {
                     stable = 0;
                      FH_TUERMODUL__SFHZ_copy = 1;

                     ZENTRAL_KINDERSICHERUNG_CTRL_next_state = 1;
                     break;
                  }
                  if ((!(FH_TUERMODUL__SFHA_ZENTRAL) && FH_TUERMODUL__SFHA_ZENTRAL_old))
                  {
                     stable = 0;
                      FH_TUERMODUL__SFHA_copy = 0;

                     ZENTRAL_KINDERSICHERUNG_CTRL_next_state = 1;
                     break;
                  }
                  if ((!(FH_TUERMODUL__SFHZ_ZENTRAL) && FH_TUERMODUL__SFHZ_ZENTRAL_old))
                  {
                     stable = 0;
                      FH_TUERMODUL__SFHZ_copy = 0;

                     ZENTRAL_KINDERSICHERUNG_CTRL_next_state = 1;
                     break;
                  }
                  break;
               }
               default:
               {
                  stable = 0;
                  break;
               }
            }
            break;
         }
         case 2 :
         {
            if (!(FH_TUERMODUL__SFHA_MEC || FH_TUERMODUL__SFHZ_MEC))
            {
               stable = 0;
                FH_TUERMODUL__SFHZ_copy = 0;
                 FH_TUERMODUL__SFHA_copy = 0;

               KINDERSICHERUNG_CTRL_KINDERSICHERUNG_CTRL_next_state = 3;
               MEC_KINDERSICHERUNG_CTRL_next_state = 0;
               break;
            }
            switch (MEC_KINDERSICHERUNG_CTRL_next_state)
            {
               case 1 :
               {
                  if ((FH_TUERMODUL__SFHA_MEC && !(FH_TUERMODUL__SFHA_MEC_old)))
                  {
                     stable = 0;
                      FH_TUERMODUL__SFHA_copy = 1;

                     MEC_KINDERSICHERUNG_CTRL_next_state = 1;
                     break;
                  }
                  if ((FH_TUERMODUL__SFHZ_MEC && !(FH_TUERMODUL__SFHZ_MEC_old)))
                  {
                     stable = 0;
                      FH_TUERMODUL__SFHZ_copy = 1;

                     MEC_KINDERSICHERUNG_CTRL_next_state = 1;
                     break;
                  }
                  if ((!(FH_TUERMODUL__SFHA_MEC) && FH_TUERMODUL__SFHA_MEC_old))
                  {
                     stable = 0;
                      FH_TUERMODUL__SFHA_copy = 0;

                     MEC_KINDERSICHERUNG_CTRL_next_state = 1;
                     break;
                  }
                  if ((!(FH_TUERMODUL__SFHZ_MEC) && FH_TUERMODUL__SFHZ_MEC_old))
                  {
                     stable = 0;
                      FH_TUERMODUL__SFHZ_copy = 0;

                     MEC_KINDERSICHERUNG_CTRL_next_state = 1;
                     break;
                  }
                  break;
               }
               default:
               {
                  stable = 0;
                  break;
               }
            }
            break;
         }
         case 3 :
         {
            if ((!FH_TUERMODUL__KL_50) && (FH_TUERMODUL__SFHZ_MEC && FH_TUERMODUL__SFHA_MEC))
            {
               stable = 0;
                 FH_TUERMODUL__SFHZ_copy = 1;
                 FH_TUERMODUL__SFHA_copy = 1;

               KINDERSICHERUNG_CTRL_KINDERSICHERUNG_CTRL_next_state = 2;
               break;
            }
            if ((!FH_TUERMODUL__KL_50) && (FH_TUERMODUL__SFHZ_MEC && !FH_TUERMODUL__SFHA_MEC))
            {
               stable = 0;
                 FH_TUERMODUL__SFHZ_copy = 1;

               KINDERSICHERUNG_CTRL_KINDERSICHERUNG_CTRL_next_state = 2;
               break;
            }
            if ((!FH_TUERMODUL__KL_50) && (!FH_TUERMODUL__SFHZ_MEC && FH_TUERMODUL__SFHA_MEC))
            {
               stable = 0;
                 FH_TUERMODUL__SFHA_copy = 1;

               KINDERSICHERUNG_CTRL_KINDERSICHERUNG_CTRL_next_state = 2;
               break;
            }
            if ((!FH_TUERMODUL__SFHZ_ZENTRAL && FH_TUERMODUL__SFHA_ZENTRAL && !FH_TUERMODUL__KL_50))
            {
               stable = 0;
                FH_TUERMODUL__SFHA_copy = 1;

               KINDERSICHERUNG_CTRL_KINDERSICHERUNG_CTRL_next_state = 1;
               break;
            }
            if ((FH_TUERMODUL__SFHZ_ZENTRAL && FH_TUERMODUL__SFHA_ZENTRAL))
            {
               stable = 0;
                FH_TUERMODUL__SFHA_copy = 1;
                 FH_TUERMODUL__SFHZ_copy = 1;

               KINDERSICHERUNG_CTRL_KINDERSICHERUNG_CTRL_next_state = 1;
               break;
            }
            if ((FH_TUERMODUL__SFHZ_ZENTRAL && !FH_TUERMODUL__SFHA_ZENTRAL && !FH_TUERMODUL__KL_50))
            {
               stable = 0;
                FH_TUERMODUL__SFHZ_copy = 1;

               KINDERSICHERUNG_CTRL_KINDERSICHERUNG_CTRL_next_state = 1;
               break;
            }
            break;
         }
         default:
         {
            stable = 0;
            KINDERSICHERUNG_CTRL_KINDERSICHERUNG_CTRL_next_state = 3;
            break;
         }
      }
   }
}

void generic_FH_TUERMODUL_CTRL(void)
{
   if (!(Bitlist)[(13)] && (Bitlist)[(15)] && !(Bitlist)[(14)])
   {
      (Bitlist)[(4)] = 0;
      (Bitlist)[(6)] = 0;
   }
   if ((Bitlist)[(13)])
   {
      if (!(Bitlist)[(10)])
      {
         KINDERSICHERUNG_CTRL_KINDERSICHERUNG_CTRL_next_state = 3;
      }
      (Bitlist)[(11)] = 0;
      if (!(Bitlist)[(19)])
      {
         (Bitlist)[(0)] = 0;
         BLOCK_ERKENNUNG_CTRL_BLOCK_ERKENNUNG_CTRL_next_state = 1;
      }
      (Bitlist)[(20)] = 0;
      (Bitlist)[(11)] = 1;
      (Bitlist)[(20)] = 1;
      switch (B_FH_TUERMODUL_CTRL_next_state)
      {
         case 1 :
         {
            if ((FH_TUERMODUL_CTRL__N == 59 && !(FH_TUERMODUL_CTRL__N_old == 59)))
            {
               stable = 0;

               B_FH_TUERMODUL_CTRL_next_state = 3;
               INITIALISIERT_FH_TUERMODUL_CTRL_next_state = 3;
               break;
            }
            break;
         }
         case 2 :
         {
            if (((FH_TUERMODUL__BLOCK && !(FH_TUERMODUL__BLOCK_old))) && ((FH_TUERMODUL__MFHZ)))
            {
               stable = 0;
               FH_TUERMODUL__MFHZ_copy = 0;
               sc_FH_TUERMODUL_CTRL_2329_1 = time;

               B_FH_TUERMODUL_CTRL_next_state = 3;
               INITIALISIERT_FH_TUERMODUL_CTRL_next_state = 3;
               break;
            }
            switch (NICHT_INITIALISIERT_NICHT_INITIALISIERT_next_state)
            {
               case 1 :
               {
                  if (!(FH_TUERMODUL__SFHZ))
                  {
                     stable = 0;
                     FH_TUERMODUL__MFHZ_copy = 0;

                     NICHT_INITIALISIERT_NICHT_INITIALISIERT_next_state = 3;
                     break;
                  }
                  break;
               }
               case 2 :
               {
                  if (!(FH_TUERMODUL__SFHA))
                  {
                     stable = 0;
                     FH_TUERMODUL__MFHA_copy = 0;

                     NICHT_INITIALISIERT_NICHT_INITIALISIERT_next_state = 3;
                     break;
                  }
                  break;
               }
               case 3 :
               {
                  if ((FH_TUERMODUL__SFHA))
                  {
                     stable = 0;
                     FH_TUERMODUL__MFHA_copy = 1;

                     NICHT_INITIALISIERT_NICHT_INITIALISIERT_next_state = 2;
                     break;
                  }
                  if ((FH_TUERMODUL__SFHZ))
                  {
                     stable = 0;
                     FH_TUERMODUL__MFHZ_copy = 1;

                     NICHT_INITIALISIERT_NICHT_INITIALISIERT_next_state = 1;
                     break;
                  }
                  break;
               }
               default:
               {
                  stable = 0;
                  NICHT_INITIALISIERT_NICHT_INITIALISIERT_next_state = 3;
                  break;
               }
            }
            break;
         }
         case 3 :
         {
            if (((FH_TUERMODUL_CTRL__N > 60 && !(FH_TUERMODUL_CTRL__N_old > 60))) && ((!(FH_TUERMODUL_CTRL__INREVERS1 || FH_TUERMODUL_CTRL__INREVERS2))))
            {
               stable = 0;
               FH_TUERMODUL__MFHZ_copy = 0;
               FH_TUERMODUL__MFHA_copy = 0;

               B_FH_TUERMODUL_CTRL_next_state = 1;
               break;
            }
            if (((FH_TUERMODUL__BLOCK && !(FH_TUERMODUL__BLOCK_old))) && ((FH_TUERMODUL__MFHA)))
            {
               stable = 0;
               FH_TUERMODUL__MFHA_copy = 0;
               sc_FH_TUERMODUL_CTRL_2375_2 = time;

               B_FH_TUERMODUL_CTRL_next_state = 2;
               NICHT_INITIALISIERT_NICHT_INITIALISIERT_next_state = 3;
               break;
            }
            if (((FH_TUERMODUL__BLOCK && !(FH_TUERMODUL__BLOCK_old))) && ((FH_TUERMODUL__MFHZ)))
            {
               stable = 0;
               FH_TUERMODUL__MFHZ_copy = 0;
               sc_FH_TUERMODUL_CTRL_2352_1 = time;

               B_FH_TUERMODUL_CTRL_next_state = 2;
               NICHT_INITIALISIERT_NICHT_INITIALISIERT_next_state = 3;
               break;
            }
            switch (INITIALISIERT_FH_TUERMODUL_CTRL_next_state)
            {
               case 1 :
               {
                  if ((FH_TUERMODUL__POSITION >= 405))
                  {
                     stable = 0;
                     FH_TUERMODUL__MFHA_copy = 0;

                     INITIALISIERT_FH_TUERMODUL_CTRL_next_state = 3;
                     break;
                  }
                  switch (OEFFNEN_FH_TUERMODUL_CTRL_next_state)
                  {
                     case 1 :
                     {
                        if ((FH_TUERMODUL__SFHZ && !(FH_TUERMODUL__SFHZ_old)) || (FH_TUERMODUL__SFHA && !(FH_TUERMODUL__SFHA_old)))
                        {
                           stable = 0;
                           FH_TUERMODUL__MFHA_copy = 0;

                           INITIALISIERT_FH_TUERMODUL_CTRL_next_state = 3;
                           OEFFNEN_FH_TUERMODUL_CTRL_next_state = 0;
                           break;
                        }
                        break;
                     }
                     case 2 :
                     {
                        if ((FH_TUERMODUL__SFHZ && !(FH_TUERMODUL__SFHZ_old)))
                        {
                           stable = 0;

                           OEFFNEN_FH_TUERMODUL_CTRL_next_state = 1;
                           break;
                        }
                        if ((!(FH_TUERMODUL__SFHA) && FH_TUERMODUL__SFHA_old))
                        {
                           stable = 0;
                           FH_TUERMODUL__MFHA_copy = 0;

                           INITIALISIERT_FH_TUERMODUL_CTRL_next_state = 3;
                           OEFFNEN_FH_TUERMODUL_CTRL_next_state = 0;
                           break;
                        }
                        break;
                     }
                     default:
                     {
                        stable = 0;
                        OEFFNEN_FH_TUERMODUL_CTRL_next_state = 2;
                        break;
                     }
                  }
                  break;
               }
               case 2 :
               {
                  if ((FH_TUERMODUL__POSITION <= 0))
                  {
                     stable = 0;
                     FH_TUERMODUL__MFHZ_copy = 0;

                     INITIALISIERT_FH_TUERMODUL_CTRL_next_state = 3;
                     break;
                  }
                  switch (SCHLIESSEN_FH_TUERMODUL_CTRL_next_state)
                  {
                     case 1 :
                     {
                        if ((FH_TUERMODUL__SFHA && !(FH_TUERMODUL__SFHA_old)) || (FH_TUERMODUL__SFHZ && !(FH_TUERMODUL__SFHZ_old)))
                        {
                           stable = 0;
                           FH_TUERMODUL__MFHZ_copy = 0;

                           INITIALISIERT_FH_TUERMODUL_CTRL_next_state = 3;
                           break;
                        }
                        switch (TIPP_SCHLIESSEN_FH_TUERMODUL_CTRL_next_state)
                        {
                           case 1 :
                           {
                              (Bitlist)[(23)] = 0;
                              if ((Bitlist)[(22)])
                              {
                                 stable = 0;
                                 FH_TUERMODUL__MFHZ_copy = 1;
                                 FH_TUERMODUL_CTRL__INREVERS2_copy = 0;

                                 TIPP_SCHLIESSEN_FH_TUERMODUL_CTRL_next_state = 2;
                                  FH_TUERMODUL__MFHA_copy = 0;

                                 (Bitlist)[(17)] = 1;
                                 break;
                              }
                              break;
                           }
                           case 2 :
                           {
                              if ((Bitlist)[(24)])
                              {
                                 stable = 0;
                                 FH_TUERMODUL_CTRL__INREVERS2_copy = 1;

                                 (Bitlist)[(23)] = 1;
                                 TIPP_SCHLIESSEN_FH_TUERMODUL_CTRL_next_state = 1;
                                  (Bitlist)[(17)] = 0;
                                 FH_TUERMODUL__MFHZ_copy = 0;

                                 sc_FH_TUERMODUL_CTRL_1781_10 = time;
                                 FH_TUERMODUL__MFHA_copy = 1;
                                 break;
                              }
                              break;
                           }
                           default:
                           {
                              stable = 0;
                              TIPP_SCHLIESSEN_FH_TUERMODUL_CTRL_next_state = 2;
                              (Bitlist)[(17)] = 1;
                              break;
                           }
                        }
                        break;
                     }
                     case 2 :
                     {
                        if ((!(FH_TUERMODUL__SFHZ) && FH_TUERMODUL__SFHZ_old))
                        {
                           stable = 0;
                           FH_TUERMODUL__MFHZ_copy = 0;

                           INITIALISIERT_FH_TUERMODUL_CTRL_next_state = 3;
                           break;
                        }
                        switch (MANUELL_SCHLIESSEN_FH_TUERMODUL_CTRL_next_state)
                        {
                           case 1 :
                           {
                              (Bitlist)[(23)] = 0;
                              if ((Bitlist)[(22)])
                              {
                                 stable = 0;
                                 FH_TUERMODUL_CTRL__INREVERS1_copy = 0;

                                 MANUELL_SCHLIESSEN_FH_TUERMODUL_CTRL_next_state = 2;
                                  FH_TUERMODUL__MFHA_copy = 0;

                                 (Bitlist)[(17)] = 1;
                                 FH_TUERMODUL__MFHZ_copy = 1;
                                 break;
                              }
                              break;
                           }
                           case 2 :
                           {
                              if ((Bitlist)[(24)])
                              {
                                 stable = 0;
                                 FH_TUERMODUL__MFHZ_copy = 0;
                                 FH_TUERMODUL_CTRL__INREVERS1_copy = 1;

                                 (Bitlist)[(23)] = 1;
                                 MANUELL_SCHLIESSEN_FH_TUERMODUL_CTRL_next_state = 1;
                                  (Bitlist)[(17)] = 0;

                                 sc_FH_TUERMODUL_CTRL_1739_10 = time;
                                 FH_TUERMODUL__MFHA_copy = 1;
                                 break;
                              }
                              if ((FH_TUERMODUL__SFHA && !(FH_TUERMODUL__SFHA_old)))
                              {
                                 stable = 0;

                                 SCHLIESSEN_FH_TUERMODUL_CTRL_next_state = 1;
                                 MANUELL_SCHLIESSEN_FH_TUERMODUL_CTRL_next_state = 0;
                                 break;
                              }
                              break;
                           }
                           default:
                           {
                              stable = 0;
                              MANUELL_SCHLIESSEN_FH_TUERMODUL_CTRL_next_state = 2;
                              (Bitlist)[(17)] = 1;
                              FH_TUERMODUL__MFHZ_copy = 1;
                              break;
                           }
                        }
                        break;
                     }
                     default:
                     {
                        stable = 0;
                        SCHLIESSEN_FH_TUERMODUL_CTRL_next_state = 2;
                        MANUELL_SCHLIESSEN_FH_TUERMODUL_CTRL_next_state = 2;
                        (Bitlist)[(17)] = 1;
                        FH_TUERMODUL__MFHZ_copy = 1;
                        break;
                     }
                  }
                  break;
               }
               case 3 :
               {
                  if (((FH_TUERMODUL__SFHZ && !(FH_TUERMODUL__SFHZ_old))) && ((FH_TUERMODUL__POSITION > 0)))
                  {
                     stable = 0;

                     INITIALISIERT_FH_TUERMODUL_CTRL_next_state = 2;
                     SCHLIESSEN_FH_TUERMODUL_CTRL_next_state = 2;
                     MANUELL_SCHLIESSEN_FH_TUERMODUL_CTRL_next_state = 2;
                     (Bitlist)[(17)] = 1;
                     FH_TUERMODUL__MFHZ_copy = 1;
                     break;
                  }
                  if (((FH_TUERMODUL__SFHA && !(FH_TUERMODUL__SFHA_old))) && ((FH_TUERMODUL__POSITION < 405)))
                  {
                     stable = 0;
                     FH_TUERMODUL__MFHA_copy = 1;

                     INITIALISIERT_FH_TUERMODUL_CTRL_next_state = 1;
                     OEFFNEN_FH_TUERMODUL_CTRL_next_state = 2;
                     break;
                  }
                  break;
               }
               default:
               {
                  stable = 0;
                  INITIALISIERT_FH_TUERMODUL_CTRL_next_state = 3;
                  break;
               }
            }
            break;
         }
         default:
         {
            stable = 0;
            B_FH_TUERMODUL_CTRL_next_state = 2;
            break;
         }
      }
      switch (A_FH_TUERMODUL_CTRL_next_state)
      {
         case 1 :
         {
            (Bitlist)[(5)] = 0;
            if ((step == 1 && tm_entered_WIEDERHOLSPERRE_FH_TUERMODUL_CTRLexited_BEREIT_FH_TUERMODUL_CTRL != 0 && (time - tm_entered_WIEDERHOLSPERRE_FH_TUERMODUL_CTRLexited_BEREIT_FH_TUERMODUL_CTRL == 1)) && ((FH_TUERMODUL__MFHZ || FH_TUERMODUL__MFHA)))
            {
               stable = 0;
               FH_TUERMODUL_CTRL__N = FH_TUERMODUL_CTRL__N + 1;

               A_FH_TUERMODUL_CTRL_next_state = 1;
               (Bitlist)[(5)] = 1;
               WIEDERHOLSPERRE_FH_TUERMODUL_CTRL_next_state = 1;
               break;
            }
            switch (WIEDERHOLSPERRE_FH_TUERMODUL_CTRL_next_state)
            {
               case 1 :
               {
                  if ((step == 1 && tm_entered_WIEDERHOLSPERRE_FH_TUERMODUL_CTRL != 0 && (time - tm_entered_WIEDERHOLSPERRE_FH_TUERMODUL_CTRL == 3)) && (((!(FH_TUERMODUL__MFHZ || FH_TUERMODUL__MFHA)) && FH_TUERMODUL_CTRL__N > 0)))
                  {
                     stable = 0;
                     FH_TUERMODUL_CTRL__N = FH_TUERMODUL_CTRL__N - 1;

                     WIEDERHOLSPERRE_FH_TUERMODUL_CTRL_next_state = 1;
                     break;
                  }
                  break;
               }
               default:
               {
                  stable = 0;
                  (Bitlist)[(5)] = 1;
                  WIEDERHOLSPERRE_FH_TUERMODUL_CTRL_next_state = 1;
                  break;
               }
            }
            break;
         }
         default:
         {
            stable = 0;
             FH_TUERMODUL_CTRL__N = 0;
            A_FH_TUERMODUL_CTRL_next_state = 1;
            (Bitlist)[(5)] = 1;
            WIEDERHOLSPERRE_FH_TUERMODUL_CTRL_next_state = 1;
            break;
         }
      }
      (Bitlist)[(5)] = (Bitlist)[(4)];
      (Bitlist)[(7)] = (Bitlist)[(6)];
   }
}

void generic_EINKLEMMSCHUTZ_CTRL(void)
{
   if ((Bitlist)[(16)])
   {
      switch (EINKLEMMSCHUTZ_CTRL_EINKLEMMSCHUTZ_CTRL_next_state)
      {
         case 1 :
         {
            if (((FH_TUERMODUL__EKS_LEISTE_AKTIV && !(FH_TUERMODUL__EKS_LEISTE_AKTIV_old))) && ((!(FH_TUERMODUL__SFHZ && FH_TUERMODUL__SFHA))))
            {
               stable = 0;

               (Bitlist)[(24)] = 1;
               EINKLEMMSCHUTZ_CTRL_EINKLEMMSCHUTZ_CTRL_next_state = 2;
               break;
            }
            break;
         }
         case 2 :
         {
            (Bitlist)[(24)] = 0;
            if ((!(FH_TUERMODUL__EKS_LEISTE_AKTIV) && FH_TUERMODUL__EKS_LEISTE_AKTIV_old))
            {
               stable = 0;

               EINKLEMMSCHUTZ_CTRL_EINKLEMMSCHUTZ_CTRL_next_state = 1;
               break;
            }
            break;
         }
         default:
         {
            stable = 0;
            EINKLEMMSCHUTZ_CTRL_EINKLEMMSCHUTZ_CTRL_next_state = 1;
            break;
         }
      }
   }
}

void generic_BLOCK_ERKENNUNG_CTRL(void)
{
   if (!(Bitlist)[(19)] && (Bitlist)[(21)] && !(Bitlist)[(20)])
   {
      (Bitlist)[(0)] = 0;
   }
   if ((Bitlist)[(19)])
   {
      switch (BLOCK_ERKENNUNG_CTRL_BLOCK_ERKENNUNG_CTRL_next_state)
      {
         case 1 :
         {
            if ((FH_TUERMODUL__I_EIN != FH_TUERMODUL__I_EIN_old) && ((FH_TUERMODUL__I_EIN > 0)))
            {
               stable = 0;
                FH_TUERMODUL__BLOCK_copy = 0;

               BLOCK_ERKENNUNG_CTRL_BLOCK_ERKENNUNG_CTRL_next_state = 2;
                BLOCK_ERKENNUNG_CTRL__N = 0;
                 BLOCK_ERKENNUNG_CTRL__I_EIN_MAX = 2;
               BEWEGUNG_BLOCK_ERKENNUNG_CTRL_next_state = 3;
               (Bitlist)[(0)] = 1;
               break;
            }
            break;
         }
         case 2 :
         {
            if ((!(FH_TUERMODUL__MFHA) && FH_TUERMODUL__MFHA_old) || (!(FH_TUERMODUL__MFHZ) && FH_TUERMODUL__MFHZ_old))
            {
               stable = 0;

               BLOCK_ERKENNUNG_CTRL_BLOCK_ERKENNUNG_CTRL_next_state = 1;
               BEWEGUNG_BLOCK_ERKENNUNG_CTRL_next_state = 0;
               break;
            }
            switch (BEWEGUNG_BLOCK_ERKENNUNG_CTRL_next_state)
            {
               case 1 :
               {
                  break;
               }
               case 2 :
               {
                  if ((FH_TUERMODUL__I_EIN > (BLOCK_ERKENNUNG_CTRL__I_EIN_MAX - 2)))
                  {
                     stable = 0;
                      FH_TUERMODUL__BLOCK_copy = 1;

                     BEWEGUNG_BLOCK_ERKENNUNG_CTRL_next_state = 1;
                     break;
                  }
                  break;
               }
               case 3 :
               {
                  (Bitlist)[(0)] = 0;
                  if ((BLOCK_ERKENNUNG_CTRL__N == 11 && !(BLOCK_ERKENNUNG_CTRL__N_old == 11)))
                  {
                     stable = 0;

                     BEWEGUNG_BLOCK_ERKENNUNG_CTRL_next_state = 2;
                     break;
                  }

                  if (BEWEGUNG_BLOCK_ERKENNUNG_CTRL_next_state == 3)
                       {
                          if (step == 1 && tm_entered_EINSCHALTSTROM_MESSEN_BLOCK_ERKENNUNG_CTRLch_BLOCK_ERKENNUNG_CTRL__N_copy != 0 && (time - tm_entered_EINSCHALTSTROM_MESSEN_BLOCK_ERKENNUNG_CTRLch_BLOCK_ERKENNUNG_CTRL__N_copy == 0.002))
                     {
                         BLOCK_ERKENNUNG_CTRL__N = BLOCK_ERKENNUNG_CTRL__N + 1;
                          if ((FH_TUERMODUL__I_EIN > BLOCK_ERKENNUNG_CTRL__I_EIN_MAX))
                        {
                           BLOCK_ERKENNUNG_CTRL__I_EIN_MAX = FH_TUERMODUL__I_EIN;

                        }

                     }
                  }

                  break;
               }
               default:
               {
                  stable = 0;
                   BLOCK_ERKENNUNG_CTRL__N = 0;
                    BLOCK_ERKENNUNG_CTRL__I_EIN_MAX = 2;
                  BEWEGUNG_BLOCK_ERKENNUNG_CTRL_next_state = 3;
                  (Bitlist)[(0)] = 1;
                  break;
               }
            }
            break;
         }
         default:
         {
            stable = 0;
            BLOCK_ERKENNUNG_CTRL_BLOCK_ERKENNUNG_CTRL_next_state = 1;
            break;
         }
      }
   }
}



void FH_DU(void)
{
   time = 1;
   stable = 0;
   step = 0;
   while (!stable)
   {
      stable = 1;
      step++;
      {
         switch (FH_STEUERUNG_DUMMY_FH_STEUERUNG_DUMMY_next_state)
         {
            case 1 :
            {
               if ((!(FH_DU__MFHZ) && FH_DU__MFHZ_old))
               {
                  stable = 0;
                  FH_DU__MFH = 0;

                  FH_STEUERUNG_DUMMY_FH_STEUERUNG_DUMMY_next_state = 2;
                  break;
               }
               break;
            }
            case 2 :
            {
               if ((FH_DU__MFHZ && !(FH_DU__MFHZ_old)))
               {
                  stable = 0;
                  FH_DU__MFH = -100;

                  FH_STEUERUNG_DUMMY_FH_STEUERUNG_DUMMY_next_state = 1;
                  break;
               }
               if ((FH_DU__MFHA && !(FH_DU__MFHA_old)))
               {
                  stable = 0;
                  FH_DU__MFH = 100;

                  FH_STEUERUNG_DUMMY_FH_STEUERUNG_DUMMY_next_state = 3;
                  break;
               }
               break;
            }
            case 3 :
            {
               if ((!(FH_DU__MFHA) && FH_DU__MFHA_old))
               {
                  stable = 0;
                  FH_DU__MFH = 0;

                  FH_STEUERUNG_DUMMY_FH_STEUERUNG_DUMMY_next_state = 2;
                  break;
               }
               break;
            }
            default:
            {
               stable = 0;
                FH_DU__MFH = 0;
               FH_STEUERUNG_DUMMY_FH_STEUERUNG_DUMMY_next_state = 2;
               break;
            }
         }
      }
      {
         {
            if (!(Bitlist)[(10)])
            {
               KINDERSICHERUNG_CTRL_KINDERSICHERUNG_CTRL_next_state = 3;
            }
            (Bitlist)[(11)] = 0;
            if (!(Bitlist)[(16)])
            {
               EINKLEMMSCHUTZ_CTRL_EINKLEMMSCHUTZ_CTRL_next_state = 1;
            }
            (Bitlist)[(17)] = 0;
            if (!(Bitlist)[(19)])
            {
               (Bitlist)[(0)] = 0;
               BLOCK_ERKENNUNG_CTRL_BLOCK_ERKENNUNG_CTRL_next_state = 1;
            }
            (Bitlist)[(20)] = 0;
            if (!(Bitlist)[(13)])
            {
               (Bitlist)[(4)] = 0;
               (Bitlist)[(6)] = 0;
               B_FH_TUERMODUL_CTRL_next_state = 2;
                FH_TUERMODUL_CTRL__N = 0;
               A_FH_TUERMODUL_CTRL_next_state = 1;
               (Bitlist)[(5)] = 1;
               WIEDERHOLSPERRE_FH_TUERMODUL_CTRL_next_state = 1;
            }
            (Bitlist)[(14)] = 0;
            (Bitlist)[(11)] = 1;
            (Bitlist)[(17)] = 1;
            (Bitlist)[(20)] = 1;
            (Bitlist)[(14)] = 1;

            if (FH_DU__S_FH_TMBFZUCAN != FH_DU__S_FH_TMBFZUCAN_old)
            {
                if ((!FH_DU__DOOR_ID))
               {
                  FH_DU__S_FH_FTZU = FH_DU__S_FH_TMBFZUCAN;

               }

            }
            if (FH_DU__S_FH_TMBFZUDISC != FH_DU__S_FH_TMBFZUDISC_old)
            {
                if (FH_DU__DOOR_ID)
               {
                  FH_DU__S_FH_TMBFZUCAN = FH_DU__S_FH_TMBFZUDISC;

               }

            }
            if (FH_DU__S_FH_TMBFAUFCAN != FH_DU__S_FH_TMBFAUFCAN_old)
            {
                if ((!FH_DU__DOOR_ID))
               {
                  FH_DU__S_FH_FTAUF = FH_DU__S_FH_TMBFAUFCAN;

               }

            }
            if (FH_DU__S_FH_TMBFAUFDISC != FH_DU__S_FH_TMBFAUFDISC_old)
            {
                if (FH_DU__DOOR_ID)
               {
                  FH_DU__S_FH_TMBFAUFCAN = FH_DU__S_FH_TMBFAUFDISC;

               }

            }

         }
      }
      (Bitlist)[(10)] = (Bitlist)[(12)];
      (Bitlist)[(13)] = (Bitlist)[(15)];
      (Bitlist)[(16)] = (Bitlist)[(18)];
      (Bitlist)[(19)] = (Bitlist)[(21)];
       FH_TUERMODUL__SFHA_MEC = FH_DU__S_FH_AUFDISC;
       FH_TUERMODUL__SFHA_ZENTRAL = FH_DU__S_FH_FTAUF;
       FH_TUERMODUL__SFHZ_MEC = FH_DU__S_FH_ZUDISC;
       FH_TUERMODUL__SFHZ_ZENTRAL = FH_DU__S_FH_FTZU;

      generic_KINDERSICHERUNG_CTRL();

       FH_DU__MFHA = FH_TUERMODUL__MFHA;
       FH_DU__MFHZ = FH_TUERMODUL__MFHZ;
       FH_DU__I_EIN = FH_TUERMODUL__I_EIN;
       FH_DU__EKS_LEISTE_AKTIV = FH_TUERMODUL__EKS_LEISTE_AKTIV;
       FH_DU__POSITION = FH_TUERMODUL__POSITION;
       FH_DU__FT = FH_TUERMODUL__FT;
       FH_DU__S_FH_AUFDISC = FH_TUERMODUL__SFHA_MEC;
       FH_DU__S_FH_FTAUF = FH_TUERMODUL__SFHA_ZENTRAL;
       FH_DU__S_FH_ZUDISC = FH_TUERMODUL__SFHZ_MEC;
       FH_DU__S_FH_FTZU = FH_TUERMODUL__SFHZ_ZENTRAL;
       FH_DU__KL_50 = FH_TUERMODUL__KL_50;
       FH_DU__BLOCK = FH_TUERMODUL__BLOCK;

       FH_TUERMODUL__SFHA_MEC = FH_DU__S_FH_AUFDISC;
       FH_TUERMODUL__SFHA_ZENTRAL = FH_DU__S_FH_FTAUF;
       FH_TUERMODUL__SFHZ_MEC = FH_DU__S_FH_ZUDISC;
       FH_TUERMODUL__SFHZ_ZENTRAL = FH_DU__S_FH_FTZU;

      generic_FH_TUERMODUL_CTRL();

       FH_DU__MFHA = FH_TUERMODUL__MFHA;
       FH_DU__MFHZ = FH_TUERMODUL__MFHZ;
       FH_DU__I_EIN = FH_TUERMODUL__I_EIN;
       FH_DU__EKS_LEISTE_AKTIV = FH_TUERMODUL__EKS_LEISTE_AKTIV;
       FH_DU__POSITION = FH_TUERMODUL__POSITION;
       FH_DU__FT = FH_TUERMODUL__FT;
       FH_DU__S_FH_AUFDISC = FH_TUERMODUL__SFHA_MEC;
       FH_DU__S_FH_FTAUF = FH_TUERMODUL__SFHA_ZENTRAL;
       FH_DU__S_FH_ZUDISC = FH_TUERMODUL__SFHZ_MEC;
       FH_DU__S_FH_FTZU = FH_TUERMODUL__SFHZ_ZENTRAL;
       FH_DU__KL_50 = FH_TUERMODUL__KL_50;
       FH_DU__BLOCK = FH_TUERMODUL__BLOCK;

       FH_TUERMODUL__SFHA_MEC = FH_DU__S_FH_AUFDISC;
       FH_TUERMODUL__SFHA_ZENTRAL = FH_DU__S_FH_FTAUF;
       FH_TUERMODUL__SFHZ_MEC = FH_DU__S_FH_ZUDISC;
       FH_TUERMODUL__SFHZ_ZENTRAL = FH_DU__S_FH_FTZU;

      generic_EINKLEMMSCHUTZ_CTRL();

       FH_DU__MFHA = FH_TUERMODUL__MFHA;
       FH_DU__MFHZ = FH_TUERMODUL__MFHZ;
       FH_DU__I_EIN = FH_TUERMODUL__I_EIN;
       FH_DU__EKS_LEISTE_AKTIV = FH_TUERMODUL__EKS_LEISTE_AKTIV;
       FH_DU__POSITION = FH_TUERMODUL__POSITION;
       FH_DU__FT = FH_TUERMODUL__FT;
       FH_DU__S_FH_AUFDISC = FH_TUERMODUL__SFHA_MEC;
       FH_DU__S_FH_FTAUF = FH_TUERMODUL__SFHA_ZENTRAL;
       FH_DU__S_FH_ZUDISC = FH_TUERMODUL__SFHZ_MEC;
       FH_DU__S_FH_FTZU = FH_TUERMODUL__SFHZ_ZENTRAL;
       FH_DU__KL_50 = FH_TUERMODUL__KL_50;
       FH_DU__BLOCK = FH_TUERMODUL__BLOCK;

       FH_TUERMODUL__SFHA_MEC = FH_DU__S_FH_AUFDISC;
       FH_TUERMODUL__SFHA_ZENTRAL = FH_DU__S_FH_FTAUF;
       FH_TUERMODUL__SFHZ_MEC = FH_DU__S_FH_ZUDISC;
       FH_TUERMODUL__SFHZ_ZENTRAL = FH_DU__S_FH_FTZU;

      generic_BLOCK_ERKENNUNG_CTRL();

       FH_DU__MFHA = FH_TUERMODUL__MFHA;
       FH_DU__MFHZ = FH_TUERMODUL__MFHZ;
       FH_DU__I_EIN = FH_TUERMODUL__I_EIN;
       FH_DU__EKS_LEISTE_AKTIV = FH_TUERMODUL__EKS_LEISTE_AKTIV;
       FH_DU__POSITION = FH_TUERMODUL__POSITION;
       FH_DU__FT = FH_TUERMODUL__FT;
       FH_DU__S_FH_AUFDISC = FH_TUERMODUL__SFHA_MEC;
       FH_DU__S_FH_FTAUF = FH_TUERMODUL__SFHA_ZENTRAL;
       FH_DU__S_FH_ZUDISC = FH_TUERMODUL__SFHZ_MEC;
       FH_DU__S_FH_FTZU = FH_TUERMODUL__SFHZ_ZENTRAL;
       FH_DU__KL_50 = FH_TUERMODUL__KL_50;
       FH_DU__BLOCK = FH_TUERMODUL__BLOCK;

      (Bitlist)[(11)] = (Bitlist)[(10)];
      (Bitlist)[(14)] = (Bitlist)[(13)];
      (Bitlist)[(17)] = (Bitlist)[(16)];
      (Bitlist)[(20)] = (Bitlist)[(19)];
      FH_TUERMODUL_CTRL__N_old = FH_TUERMODUL_CTRL__N;
      FH_TUERMODUL__I_EIN_old = FH_TUERMODUL__I_EIN;
      FH_DU__MFH = FH_DU__MFH_copy;
      FH_DU__I_EIN_old = FH_DU__I_EIN;
      BLOCK_ERKENNUNG_CTRL__N_old = BLOCK_ERKENNUNG_CTRL__N;
      FH_TUERMODUL__SFHZ_ZENTRAL_old = FH_TUERMODUL__SFHZ_ZENTRAL;
      FH_TUERMODUL__SFHZ_MEC_old = FH_TUERMODUL__SFHZ_MEC;
      FH_TUERMODUL__SFHA_ZENTRAL_old = FH_TUERMODUL__SFHA_ZENTRAL;
      FH_TUERMODUL__SFHA_MEC_old = FH_TUERMODUL__SFHA_MEC;
      FH_TUERMODUL__BLOCK = FH_TUERMODUL__BLOCK_copy;
      FH_TUERMODUL__BLOCK_old = FH_TUERMODUL__BLOCK;
      FH_TUERMODUL__SFHZ = FH_TUERMODUL__SFHZ_copy;
      FH_TUERMODUL__SFHZ_old = FH_TUERMODUL__SFHZ;
      FH_TUERMODUL__SFHA = FH_TUERMODUL__SFHA_copy;
      FH_TUERMODUL__SFHA_old = FH_TUERMODUL__SFHA;
      FH_TUERMODUL__MFHZ = FH_TUERMODUL__MFHZ_copy;
      FH_TUERMODUL__MFHZ_old = FH_TUERMODUL__MFHZ;
      FH_TUERMODUL__MFHA = FH_TUERMODUL__MFHA_copy;
      FH_TUERMODUL__MFHA_old = FH_TUERMODUL__MFHA;
      FH_TUERMODUL__EKS_LEISTE_AKTIV_old = FH_TUERMODUL__EKS_LEISTE_AKTIV;
      FH_DU__EKS_LEISTE_AKTIV_old = FH_DU__EKS_LEISTE_AKTIV;
      FH_DU__S_FH_TMBFAUFCAN_old = FH_DU__S_FH_TMBFAUFCAN;
      FH_DU__S_FH_TMBFZUCAN_old = FH_DU__S_FH_TMBFZUCAN;
      FH_DU__S_FH_TMBFZUDISC_old = FH_DU__S_FH_TMBFZUDISC;
      FH_DU__S_FH_TMBFAUFDISC_old = FH_DU__S_FH_TMBFAUFDISC;
      FH_DU__BLOCK = FH_DU__BLOCK_copy;
      FH_DU__BLOCK_old = FH_DU__BLOCK;
      FH_DU__MFHZ = FH_DU__MFHZ_copy;
      FH_DU__MFHZ_old = FH_DU__MFHZ;
      FH_DU__MFHA = FH_DU__MFHA_copy;
      FH_DU__MFHA_old = FH_DU__MFHA;

   }

}



int main(void)
{
  init();
  interface();
  FH_DU();

  return 0;
}
