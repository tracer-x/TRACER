long fir_int[36];
long in_data[701];
long out_data[720];
long output[720];

void fir_filter_int(long in_len,
                    long coef_len,
                    long scale)
{
  long i,j,coef_len2,acc_length;
  long acc;
  long *in_ptr,*data_ptr,*coef_start,*coef_ptr,*in_end;

  long in = 0;
  long out = 0;
  long coef = 0;


  coef_start = coef;
  coef_len2 = (coef_len + 1) / 2;


  in_end = in + in_len - 1;
  in_ptr = in + coef_len2 - 1;


  acc_length = coef_len2;

  for(i = 0 ; i < in_len ; i++) {


    data_ptr = in_ptr;
    coef_ptr = coef_start;



    acc = (long)(fir_int[coef_ptr]) * (in_data[data_ptr]);
    coef_ptr++;
    data_ptr--;

    for(j = 1 ; j < acc_length ; j++) {
      acc += (long)(fir_int[coef_ptr]) * (in_data[data_ptr]);
      coef_ptr++;
      data_ptr++;
    }

    output[out] = (int)(acc/scale);
    out++;



    if(in_ptr == in_end) {
      acc_length--;
      coef_start++;
    }



    else {
      if(acc_length < coef_len) acc_length++;
      in_ptr++;
    }
  }
}

void main()
{


  fir_filter_int(10,35,285);

}
