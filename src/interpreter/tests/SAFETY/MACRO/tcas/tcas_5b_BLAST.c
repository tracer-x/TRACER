/* Here the program begins */
extern int rand (void) ;
typedef unsigned bool;

unsigned Cur_Vertical_Sep;
bool High_Confidence;
bool Two_of_Three_Reports_Valid;
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

bool Own_Below_Threat() ;
bool Own_Above_Threat() ;


void initialize()
{
    Positive_RA_Alt_Thresh__0 = 400;
    Positive_RA_Alt_Thresh__1 = 500;
    Positive_RA_Alt_Thresh__2 = 640;
    Positive_RA_Alt_Thresh__3 = 740;
}

bool __NONDET__()
{
  if ( ((double) rand() / (2147483647 +1.0)) > 0.5 )
    return 1 ;

  return 0 ;
}

unsigned ALIM ()
{
    if ( Alt_Layer_Value == 0 )
        return Positive_RA_Alt_Thresh__0 ;
    if ( Alt_Layer_Value == 1 )
        return Positive_RA_Alt_Thresh__1 ;
    if ( Alt_Layer_Value == 2 )
        return Positive_RA_Alt_Thresh__2 ;
    return Positive_RA_Alt_Thresh__3 ;
}

unsigned Inhibit_Biased_Climb ()
{
  if (Climb_Inhibit==1) return Up_Separation + 100;
  else return Up_Separation;
  /* return (Climb_Inhibit==1 ? Up_Separation + 100 : Up_Separation);*/
}

bool Non_Crossing_Biased_Climb()
{
    unsigned upward_preferred = 0 ;
    unsigned upward_crossing_situation;
    //bool result = 0 ;
    // unsigned alim = ALIM() ;
    // New variables added ...
    bool result;
    unsigned alim;    
    unsigned temp1;
    bool temp2,temp3;

    /******************************************/
    /* Coded added due to compiler limitation */
    /******************************************/
    result=0;
    alim = ALIM() ;
    /******************************************/

    /******************************************/
    /* Coded added due to compiler limitation */
    /******************************************/
    // if ( Inhibit_Biased_Climb() > Down_Separation )
    temp1 = Inhibit_Biased_Climb();
    if (temp1 > Down_Separation )
    /***************************************/
      upward_preferred = 1 ;
    if (upward_preferred==1)
    {
      /******************************************/
      /* Coded added due to compiler limitation */
      /******************************************/
      //if ( !(Own_Below_Threat()) || ((Own_Below_Threat()) && (!(Down_Separation >= alim))) )
      temp2 = Own_Below_Threat();
      if ( !temp2 || (temp2 && (!(Down_Separation >= alim))) )      
      /***************************************/
        result = 1 ;
    }
    else
    {
      /******************************************/
      /* Coded added due to compiler limitation */
      /******************************************/
      //if ( Own_Above_Threat() && (Cur_Vertical_Sep >= 300) && (Up_Separation >= alim) )
      temp3= Own_Above_Threat();
        if ( temp3 && (Cur_Vertical_Sep >= 300) && (Up_Separation >= alim) )
      /***************************************/
          result = 1 ;
    }
    // LEAVING_NON_CROSSING_BIASED_CLIMB:
    return result;
}

bool Non_Crossing_Biased_Descend()
{
    unsigned upward_preferred = 0 ;
    unsigned upward_crossing_situation;
    //bool result = 0 ;
    //unsigned alim=ALIM() ;
    // New variables added 
    bool result;
    unsigned alim;

    unsigned temp1;
    bool temp2,temp3;

    result = 0 ;
    alim=ALIM() ;

    /******************************************/
    /* Coded added due to compiler limitation */
    /******************************************/
    // if ( Inhibit_Biased_Climb() > Down_Separation )
    temp1 = Inhibit_Biased_Climb();
    if ( temp1 > Down_Separation )
    /******************************************/
      upward_preferred = 1 ;
    if (upward_preferred==1)
    {
      /******************************************/
      /* Coded added due to compiler limitation */
      /******************************************/
      //if ( Own_Below_Threat() && (Cur_Vertical_Sep >= 300) && (Down_Separation >= alim) )
      temp2 = Own_Below_Threat();
      if (  temp2 && (Cur_Vertical_Sep >= 300) && (Down_Separation >= alim) )
      /******************************************/
        result = 1 ;
    }
    else
    {
      /******************************************/
      /* Coded added due to compiler limitation */
      /******************************************/
      //if ( !(Own_Above_Threat()) || ((Own_Above_Threat()) && (Up_Separation >= alim)))
      temp3 = Own_Above_Threat(); 
      if ( !temp3 || (temp3 && (Up_Separation >= alim)))
        result = 1 ;
    }
    return result;
}

bool Own_Below_Threat()
{
    if (Own_Tracked_Alt < Other_Tracked_Alt)
      return 1 ;
    return 0 ;
}

bool Own_Above_Threat()
{
    if (Other_Tracked_Alt < Own_Tracked_Alt)
      return 1 ;
    return 0 ;
}

/*
void error ()
{
 ERROR:
 return;
 exit (1);
}
*/

/*
void property1a ( unsigned thresh )
{

    if ( Up_Separation >= thresh && Down_Separation < thresh )
      {
      goto PROPERTY1A;
      PROPERTY1A: ;
        error();
      }
}
*/
 /*
void property1b ( unsigned thresh )
{

    if ( Up_Separation < thresh && Down_Separation >= thresh )
      {
      goto PROPERTY1B;
      PROPERTY1B: ;
        error();
      }
}
 */
/*
void property2a ( unsigned thresh )
{
    if ( Up_Separation < thresh && Down_Separation < thresh && Up_Separation > Down_Separation )
      {
      goto PROPERTY2A;
      PROPERTY2A:;
        error();
      }
}
*/
 /*
void property2b ( unsigned thresh )
{

    if ( Up_Separation < thresh && Down_Separation < thresh && Up_Separation < Down_Separation )
      { goto PROPERTY2B;
      PROPERTY2B: ;
        error();
      }
}
 */
/*
void property3a ( unsigned thresh )
{


    if ( Up_Separation >= thresh && Down_Separation >= thresh && Own_Tracked_Alt > Other_Tracked_Alt )
      {
      goto PROPERTY3A;
      PROPERTY3A:;
        error();
      }
}
*/
 /*
void property3b ( unsigned thresh )
{

    if ( Up_Separation >= thresh && Down_Separation >= thresh && Own_Tracked_Alt > Other_Tracked_Alt )
      {
      goto PROPERTY3B;
      PROPERTY3B: ;
        error();
      }
}
*/
/*
void property4a ()
{

    if ( Own_Tracked_Alt > Other_Tracked_Alt )
      {
      goto PROPERTY4A;
      PROPERTY4A:; 
        return ;
      }
}
*/
 /*
void property4b ()
{

    if( Own_Tracked_Alt < Other_Tracked_Alt )
      {
      goto PROPERTY4B;
      PROPERTY4B: ;
        return ;
      }
}
*/
/*
void property5a ()
{
    if ( Up_Separation > Down_Separation )
      {
      goto PROPERTY5A;
      PROPERTY5A: ;
        error();
      }
}
*/
 /*
void property5b ()
{

    if ( Up_Separation < Down_Separation )
      {
      goto PROPERTY5B;
      PROPERTY5B:; 
        error();
      }
}
 */

unsigned alt_sep_test()
{
    bool enabled=0, tcas_equipped=0, intent_not_known=0;
    bool need_upward_RA=0, need_downward_RA=0;
    unsigned alt_sep;
    // The compiler fails here
    //unsigned alim = ALIM() ;
    unsigned alim;
    // New variables added ....
    bool temp1,temp2,temp3,temp4;

    alim = ALIM();
    if ( High_Confidence && (Own_Tracked_Alt_Rate <= 600) && (Cur_Vertical_Sep > 600) )
      enabled = 1 ;
    if ( Other_Capability == 0 )
      tcas_equipped = 1 ;
    if ( Two_of_Three_Reports_Valid && Other_RAC == 0 )
      intent_not_known = 1 ;

    alt_sep = 0;

    if (enabled && ((tcas_equipped && intent_not_known) || !tcas_equipped))
    {
      /******************************************/
      /* Coded added due to compiler limitation */
      /******************************************/
      temp1 = Non_Crossing_Biased_Climb();
      temp2 = Own_Below_Threat();
      //if ( Non_Crossing_Biased_Climb() && Own_Below_Threat() )
      /******************************************/
      if ( temp1 && temp2 )
        {
          need_upward_RA = 1 ;
        }
      /******************************************/
      /* Coded added due to compiler limitation */
      /******************************************/
      temp3 = Non_Crossing_Biased_Descend();
      temp4 = Own_Above_Threat();
      //if ( Non_Crossing_Biased_Descend() && Own_Above_Threat() )
      if ( temp3 && temp4 )
        {
          need_downward_RA = 1 ;
        }
      if (need_upward_RA && need_downward_RA)
        {
          alt_sep = 0;
        }
      else if (need_upward_RA)
        {
	  /*property1b(alim) ;*/
	  //	  _ABORT(Up_Separation < alim && Down_Separation >= alim);
	  /*property2b(alim) ;*/
	  //	  _ABORT(Up_Separation < alim && Down_Separation < alim && Up_Separation < Down_Separation);
	  /*property3b(alim) ;*/
	  //	  _ABORT(Up_Separation >= alim && Down_Separation >= alim && Own_Tracked_Alt > Other_Tracked_Alt);
	  /*property4b() ;*/
	  //	  _ABORT(Own_Tracked_Alt < Other_Tracked_Alt);
	  /*property5b() ;*/
	  if(Up_Separation < Down_Separation) ERROR: goto ERROR; 
	  //_ABORT(Up_Separation < Down_Separation);	 
	  //_DECOMPILE_ABORT(Up_Separation < Down_Separation);	 
	  alt_sep = 1;
        }
        else if (need_downward_RA)
        {

          /*property1a(alim) ;*/
	  //	  _ABORT( Up_Separation >= alim && Down_Separation < alim );                
	  /*property2a(alim) ;*/
	  //	  _ABORT(Up_Separation < alim && Down_Separation < alim && Up_Separation > Down_Separation);
	  /*property3a(alim) ;*/
	  //          _ABORT(Up_Separation >= alim && Down_Separation >= alim && Own_Tracked_Alt > Other_Tracked_Alt);
	  /*property4a() ;*/
	  //          _ABORT(Own_Tracked_Alt > Other_Tracked_Alt);
	  /* property5a() ;*/
	  //          _ABORT(Up_Separation > Down_Separation);
	  alt_sep = 2;
        }
        else
	  alt_sep = 0;
    }

    return alt_sep;
}

unsigned main( )
{
    initialize();
    alt_sep_test();
  return 0;
}
