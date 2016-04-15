#include <assert.h>
#include <stdio.h>
#include <cute.h>

#define SIZE 5

void swap(int *a, int l,int h){
	int tmp=a[l];
	a[l]=a[h];
	a[h] = tmp;
}

/* Sorts the elements of a between low and high inclusive */
void quicksort(int *a, int low, int high)
{
   /* Use the first element as the pivot */
   int pivot = a[low];

   /* Set l and r and move the array elements such
      that for all i:low<i<l, a[i]<=pivot,
      and for all i:r<=i<high, a[i]>pivot. */

   int l = low + 1;
   int r = high;
   while(l < r) {
      if (a[l] <= pivot) l++;
      else {
         r--;
         swap(a,l,r);
      }
   }

   /* Put pivot element into place */
   l--; 
   swap(a,low,l);

   /* Recursively sort the partitions, if their size is > 1
      (if a partition's size is 1, it is already sorted) */
   if (l-low > 1)
      quicksort(a, low, l);
   if (high-r > 1)
      quicksort(a, r, high);
}


f(){
	int i;
        int  a[SIZE];
        CUTE_input(a);
	for(i=0;i<SIZE;i++){
            printf("%d ",a[i]);
	}
        printf("\n");
	quicksort(a,0,SIZE);
	for(i=0;i<SIZE;i++){
            printf("%d ",a[i]);
	}
	/*for(i=0;i<SIZE-1;i++){
		assert(a[i]<=a[i+1]);
	}*/
}

