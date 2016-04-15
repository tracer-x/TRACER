// SAFE
int main(int n){
  int i   = 1;
  int sum = 0;
  int product = 1;

  if (i<=n){
      sum     = sum + i;
      product = product + i;
      i       = i + 1;
  }
  _TRACER_abort(sum < 0);
  return sum;
}
