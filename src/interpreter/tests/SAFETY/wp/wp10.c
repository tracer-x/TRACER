// SAFE
main(){

/*   int x,y,z; */
/*   if (x>5 && y>5){ */
/*     z=x+y; */
/*   } */
/*   else{ */
/*     if (x>5){ */
/*       z = 2 * x; */
/*     } */
/*     else{ */
/*       if(y>5){ */
/* 	z=2*y; */
/*       } */
/*       else */
/* 	z=10; */
/*     } */
/*   } */

/*   _TRACER_abort(z<10); */


  int x;
  if (x==1){
    x++;
  }
  else{
    if (x==2){
      x++;
    }
    else{
      if(x==3){
	x++;
      }
      else
	x=0;
    }
  }

  _TRACER_abort(x>4);

}
  
