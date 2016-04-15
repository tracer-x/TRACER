void main(void) 
{ int main_status ;
  int main_tmp_ndt_1 ;
  int freshX;

      main_tmp_ndt_1 = __VERIFIER_nondet_int();
      switch (main_tmp_ndt_1) {
        case 2: 
          main_status = 123;
          break;
        case 3: 
          main_status = 456;
          break;
        case 4: 
          main_status = 789;
      }
    _SLICE(freshX);
    return;
}

