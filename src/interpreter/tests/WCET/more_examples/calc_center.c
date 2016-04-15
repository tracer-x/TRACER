/********************************************************************/
/* FROM:  the paper Scope-tree: a Program                           */
/* Representation for Symbolic Worst-Case Execution Time Analysis,  */
/* by A. Colin and G. Bernat, 2002                                  */
/* Tin cans are transported on a conveyor belt. A robot arm seizes  */
/* the  cans and puts them into boxes. The computer controlling the */
/* robot arm is connected to a video camera in order to determine   */
/* the position  of the can on the belt.                            */
/* The specifications are the following:                            */
/* - The image read by the camera is presented in an array of       */
/*   640*200  black or white pixels.                                */
/* - The maximum area covered by the image of the can depends on the*/
/*   type of cans conveyed and is known as N. We assume that the    */
/*   value of N may be changed at runtime.                          */
/* - There may be some noise in the image data. The maximum noise   */
/*   ratio which is tolerated is 10% of N.                          */
/* - In order to steer the robot arm to the right location, the     */
/*   program has to calculate the center of the marked area.        */
/* - It may happen that the camera gives a totally blank image      */
/*   (without any black pixel). In such a case, the camera has to   */
/*   be reinitialised.                                              */
/* - Finally, it was not possible to put the camera exactly above   */
/*   the robot arm. So, due to the camera angle, the algorithm      */
/*   should only be applied to the portion of the image defined     */
/*   by y/2 < x < 640 -y/2.                                         */
/********************************************************************/

/********************************************************************/
/* FEATURE:                                                         */
/* - The number of times the section of code S is executed depends  */
/*   on the value of N, which is unknown at analysis time.          */
/* - The section of code S is ''down-sampled''. It is executed      */
/*   at most N+N/10 times instead of 640x200 = 128000 times.        */
/* - The two loops of this program are non-rectangular loops. The   */
/*   loop called loop x iterates 640 -2*y/2 times where y is the    */
/*   counter variable of the outer loop (loop y).                   */
/* - Finally, the section of code S and T are mutually exclusive.   */
/********************************************************************/

void reinit_camera(){
  // EMPTY BODY
}

int calc_weight(image, x_center,y_center)
 char image[640][200];
 int *x_center, *y_center;
{
  // EMPTY BODY
  return 0;
}

int calc_center(image, x_center,y_center)
 char image[640][200];
 int *x_center, *y_center;
{
  int pixel_count, x, y, x_sum, y_sum, black_pixel;
  black_pixel = pixel_count = x_sum = y_sum = 0;
  for(y=0;y<200;y ++)          /* loop y */
  {
    for(x= y/2; x< 640 - y/2; x++) /* loop x */
      {
	// begin S code
	if(image[x][y])
	{
	  // data dependent code
	  int weight;
	  weight = calc_weight(image ,x,y);
	  x_sum += x * weight;
	  y_sum += y * weight;
	  pixel_count += weight;
	  black_pixel ++;
	}
	// end S code
      }
  }
  
  if (pixel_count)
  {
    *x_center = (int) (x_sum / pixel_count);
    *y_center = (int) (y_sum / pixel_count);
  }
  else
    *x_center = *y_center = 0;
  
  if (! black_pixel){
    // data-dependent code
    // begin T code
    reinit_camera();  
    // end T code
  }
  return 1;
}


int main(){
 char image[640][200];
 int *x_center, *y_center;

 return calc_center(image, x_center,y_center);

}
