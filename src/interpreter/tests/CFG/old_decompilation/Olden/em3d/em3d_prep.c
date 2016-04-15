/* em3d.h */


/* em3d.c */
int nonlocals=0;
void compute_nodes(nodelist)
register node_t *nodelist;
{
  register int i;
  register local node_t *localnode;
  
  ;
  for (; nodelist; )
    {
      register double cur_value;
      register int from_count ;
	   register double *other_value;
	   register double coeff;
	   register double value;
      /*register double *coeffs;*/
      /*register node_t **from_nodes;*/
      
      localnode = LOCAL(nodelist);
      cur_value=*(localnode->value);
      from_count = localnode->from_count-1;
      for (i=0; i < from_count; i+=2)
	{
	  
     other_value = localnode->from_values[i];
     coeff = localnode->coeffs[i];
	  if (!ISLOCPTR(other_value)) nonlocals++;
	  ;
	  value = *other_value;
	  ;
	  cur_value -= coeff*value;
     other_value = localnode->from_values[i+1];
     coeff = localnode->coeffs[i];
	  if (!ISLOCPTR(other_value)) nonlocals++;
	  ;
	  value = *other_value;
	  ;
	  cur_value -= coeff*value;
	  
	  /*chatting("from %d, coeff %f, value %f\n",count,coeff,value);*/
	}
      if (i==from_count)  {
	other_value = localnode->from_values[i];
	coeff = localnode->coeffs[i];
	if (!ISLOCPTR(other_value)) nonlocals++;
	;
	value = *other_value;
	;
	cur_value -= coeff*value;
      }
      *(localnode->value) = cur_value;
      nodelist = localnode->next;
    } /* for */
  ;
}
