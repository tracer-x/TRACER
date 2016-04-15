unsigned Cur_Vertical_Sep;
unsigned High_Confidence;
unsigned Two_of_Three_Reports_Valid;
unsigned Own_Tracked_Alt;
unsigned Own_Tracked_Alt_Rate;
unsigned Other_Tracked_Alt;
unsigned Alt_Layer_Value;
unsigned Positive_RA_Alt_Thresh__0 ;
unsigned Positive_RA_Alt_Thresh__1 ;
unsigned Positive_RA_Alt_Thresh__2 ;
unsigned Positive_RA_Alt_Thresh__3 ;
unsigned Up_Separation;
unsigned Down_Separation;
unsigned Other_RAC;
unsigned Other_Capability;
unsigned Climb_Inhibit;

void main( )
{
  unsigned enabled, tcas_equipped, intent_not_known;
  unsigned need_upward_RA, need_downward_RA;
  unsigned alt_sep;
  unsigned alim;
  // New variables added ....
  unsigned temp1,temp2,temp3,temp4;
  unsigned result_Non_Crossing_Biased_Climb;
  unsigned result_Non_Crossing_Biased_Descend;   

  // -- initialize();
  Positive_RA_Alt_Thresh__0 = 400;
  Positive_RA_Alt_Thresh__1 = 500;
  Positive_RA_Alt_Thresh__2 = 640;
  Positive_RA_Alt_Thresh__3 = 740;
  // -- alt_sep_test();
  
  enabled=0;
  tcas_equipped=0;
  intent_not_known=0;
  need_upward_RA=0;
  need_downward_RA=0;

  // -- -- alim = ALIM();
  if ( Alt_Layer_Value == 0 )
    alim = Positive_RA_Alt_Thresh__0 ;
  if ( Alt_Layer_Value == 1 )
    alim = Positive_RA_Alt_Thresh__1 ;
  if ( Alt_Layer_Value == 2 )
    alim = Positive_RA_Alt_Thresh__2 ;
  alim = Positive_RA_Alt_Thresh__3 ;

  if ( (High_Confidence !=0/*JORGE*/) && (Own_Tracked_Alt_Rate <= 600) && (Cur_Vertical_Sep > 600) )
    enabled = 1 ;

  if ( Other_Capability == 0 )
    tcas_equipped = 1 ;
  if ( (Two_of_Three_Reports_Valid !=0 /*JORGE*/) && Other_RAC == 0 )
    intent_not_known = 1 ;
  
  alt_sep = 0;

  if ((enabled !=0 /*JORGE*/)&& (((tcas_equipped !=0 /*JORGE*/)&& (intent_not_known !=0 /*JORGE*/)) 
				 || ! (tcas_equipped !=0 /*JORGE*/)))
    {
      //////////////////////////////////////////////////////////////////////////////
      { // ENTERING Non_Crossing_Biased_Climb();
	unsigned upward_preferred_1;
	unsigned alim_Non_Crossing_Biased_Climb;
	unsigned temp11,temp12,temp13;

	upward_preferred_1 = 0 ;
	result_Non_Crossing_Biased_Climb=0;
	// alim = ALIM() ;
	if ( Alt_Layer_Value == 0 )
	  alim_Non_Crossing_Biased_Climb =  Positive_RA_Alt_Thresh__0 ;
	if ( Alt_Layer_Value == 1 )
	  alim_Non_Crossing_Biased_Climb = Positive_RA_Alt_Thresh__1 ;
	if ( Alt_Layer_Value == 2 )
	  alim_Non_Crossing_Biased_Climb =  Positive_RA_Alt_Thresh__2 ;
	alim_Non_Crossing_Biased_Climb =  Positive_RA_Alt_Thresh__3 ;

	// temp11 = Inhibit_Biased_Climb();
	if (Climb_Inhibit==1) temp11= Up_Separation + 100;
	else temp11 = Up_Separation;

	if (temp11 > Down_Separation )
	  upward_preferred_1 = 1 ;

	if (upward_preferred_1==1)
	  {
	    // temp12 = Own_Below_Threat();
	    if (Own_Tracked_Alt < Other_Tracked_Alt)
	      temp12 = 1 ;
	    else
	      temp12 = 0 ;
	    if ( !(temp12 !=0 /*JORGE*/) || 
		 ((temp12 !=0 /*JORGE*/)&& (!(Down_Separation >= alim_Non_Crossing_Biased_Climb))) )
	      result_Non_Crossing_Biased_Climb = 1 ;
	  }
	else
	  {
	    // temp13= Own_Above_Threat();
	    if (Other_Tracked_Alt < Own_Tracked_Alt)
	      temp13 =  1 ;
	    else
	      temp13 = 0 ;
	    if ( (temp13 !=0 /*JORGE*/)  && 
		 (Cur_Vertical_Sep >= 300) && (Up_Separation >= alim_Non_Crossing_Biased_Climb) )
	      result_Non_Crossing_Biased_Climb = 1 ;
	  }
      }  // LEAVING_NON_CROSSING_BIASED_CLIMB:
      //////////////////////////////////////////////////////////////////////////////
      temp1 = result_Non_Crossing_Biased_Climb;
      //  temp2 = Own_Below_Threat();
      if (Own_Tracked_Alt < Other_Tracked_Alt)
	temp2= 1 ;
      else
	temp2 = 0 ;
      if ( (temp1 !=0 /*JORGE*/) && (temp2 !=0 /*JORGE*/) )
	need_upward_RA = 1 ;

      //////////////////////////////////////////////////////////////////////////////
      // temp3 = Non_Crossing_Biased_Descend();
      //////////////////////////////////////////////////////////////////////////////
      {
	// ENTERING Non_Crossing_Biased_Descend()
	unsigned upward_preferred_2;
	unsigned alim_Non_Crossing_Biased_Descend;
	unsigned temp21,temp22,temp23;
	
	upward_preferred_2 = 0 ;
	result_Non_Crossing_Biased_Descend = 0 ;

	// alim_Non_Crossing_Biased_Descend=ALIM() ;
	if ( Alt_Layer_Value == 0 )
	  alim_Non_Crossing_Biased_Descend= Positive_RA_Alt_Thresh__0 ;
	if ( Alt_Layer_Value == 1 )
	  alim_Non_Crossing_Biased_Descend= Positive_RA_Alt_Thresh__1 ;
	if ( Alt_Layer_Value == 2 )
	  alim_Non_Crossing_Biased_Descend= Positive_RA_Alt_Thresh__2 ;
	alim_Non_Crossing_Biased_Descend= Positive_RA_Alt_Thresh__3 ;
	
	// temp21 = Inhibit_Biased_Climb();
	if (Climb_Inhibit==1) 
	  temp21 = Up_Separation + 100;
	else 
	  temp21 = Up_Separation;
	
	if ( temp21 > Down_Separation )
	  upward_preferred_2 = 1 ;
	if (upward_preferred_2==1)
	  {
	    // temp22 = Own_Below_Threat();
	        if (Own_Tracked_Alt < Other_Tracked_Alt)
		  temp22 = 1 ;
		else temp22 = 0;
		
		if((temp22 !=0 /*JORGE*/) && 
		   (Cur_Vertical_Sep >= 300) && (Down_Separation >= alim_Non_Crossing_Biased_Descend) )
	      result_Non_Crossing_Biased_Descend = 1 ;
	  }
	else
	  {
	    // temp23 = Own_Above_Threat();
	    if (Other_Tracked_Alt < Own_Tracked_Alt)
	      temp23 = 1 ;
	    else
	      temp23 = 0 ;
	    
	    if ( !(temp23 !=0 /*JORGE*/) || 
		 ((temp23 !=0 /*JORGE*/) && (Up_Separation >= alim_Non_Crossing_Biased_Descend)))
	      result_Non_Crossing_Biased_Descend = 1 ;
	  }
	
      } // ENTERING Non_Crossing_Biased_Descend()
      //////////////////////////////////////////////////////////////////////////////
      temp3= result_Non_Crossing_Biased_Descend;
      // temp4 = Own_Above_Threat();
      if (Other_Tracked_Alt < Own_Tracked_Alt)
	temp4 =  1 ;
      else temp4 = 0 ;
      if ( (temp3 !=0 /*JORGE*/) && (temp4 !=0 /*JORGE*/) )
	need_downward_RA = 1 ;
      if ((need_upward_RA !=0 /*JORGE*/) && (need_downward_RA !=0 /*JORGE*/))
	alt_sep = 0;
      else if ((need_upward_RA !=0 /*JORGE*/)){
	/*property4b() ;*/
	// BLAST/ARMC	
	if(Own_Tracked_Alt < Other_Tracked_Alt) ERROR: goto ERROR;
	// TRACER
	//_DECOMPILE_ABORT(Own_Tracked_Alt < Other_Tracked_Alt);
	alt_sep = 1;
      }
      else if ((need_downward_RA !=0 /*JORGE*/))        
	  alt_sep = 2;        
        else
	  alt_sep = 0;
    }
   
  return;

}
