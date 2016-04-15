main()
{

  int i, j, a[3], tmp;
  i = 0;
  while (i < 3-1) {
    j = 0;
    while (j < 3-1-i) {

      if (a[j] > a[j+1]) {

        tmp = a[j+1];
	
	a[j+1] = a[j];
	
	a[j] = tmp;
      }      
      j++;      
    }           
    i++;
  }
}
