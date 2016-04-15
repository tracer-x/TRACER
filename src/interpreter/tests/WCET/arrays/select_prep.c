float arr[20];



float select(unsigned long k, unsigned long n)
{
 unsigned long i,ir,j,l,mid;
 float a,temp;
 int flag, flag2;

 l=1;
 ir=n;
 flag = 0;
 flag2 = 0;
 while (!flag) {
  if (ir <= l+1) {
   if (ir == l+1)
     if (arr[ir] < arr[l]) {
       temp=(arr[l]);(arr[l])=(arr[ir]);(arr[ir])=temp;
         }
   flag = 1;
  } else if (!flag) {
   mid=(l+ir) >> 1;
   temp=(arr[mid]);(arr[mid])=(arr[l+1]);(arr[l+1])=temp;
   if (arr[l+1] > arr[ir]) {
    temp=(arr[l+1]);(arr[l+1])=(arr[ir]);(arr[ir])=temp;
   }
   if (arr[l] > arr[ir]) {
    temp=(arr[l]);(arr[l])=(arr[ir]);(arr[ir])=temp;
   }
   if (arr[l+1]> arr[l]) {
    temp=(arr[l+1]);(arr[l+1])=(arr[l]);(arr[l])=temp;
   }
   i=l+1;
   j=ir;
   a=arr[l];
   while (!flag2) {
    i++;
    while (arr[i] < a) i++;
    j--;
    while (arr[j] > a) j--;
    if (j < i) flag2 = 1;
    if (!flag2) temp=(arr[i]);(arr[i])=(arr[j]);(arr[j])=temp;;

   }
   arr[l]=arr[j];
   arr[j]=a;
   if (j >= k) ir=j-1;
   if (j <= k) l=i;
  }

 }
 return arr[k];
}

main()
{
  select(10, 20);
}
