int data_value[15];
int data_key[15];

main()
{
 binary_search(8);
}

int binary_search(int x)
{
  int fvalue, mid, up, low ;

  low = 0;
  up = 14;
  fvalue = -1 ;
  while (low <= up) {
    mid = (low + up) / 2;
    if ( data_key[mid] == x ) {
      up = low - 1;
      fvalue = data_value[mid];



    }
    else
      if ( data_key[mid] > x ) {
 up = mid - 1;



      }
      else {
              low = mid + 1;



      }



  }



  return fvalue;
}
