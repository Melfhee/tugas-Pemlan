#include <stdio.h>

int array[8] = {4,7,1,2,9,5,3,11};


void merging(int low, int mid, int high) {
  
      
    int temp[high + 1];
    int i = low;
    int j = mid + 1;
    int k = 0;

    while (i <= mid && j <= high)
    {
        if (array[i] <= array[j])
            temp[k++] = array[i++];
        else
            temp[k++] = array[j++];
    }
    while (i <= mid)
        temp[k++] = array[i++];
    while (j <= high)
        temp[k++] = array[j++];
    k--;
    while (k >= 0)
    {
        array[k + low] = temp[k];
        k--;
    }
}

void sort(int low, int high) {
   int mid;
   
   if(low < high) {
      mid = (low + high) / 2;
      sort(low, mid);
      sort(mid+1, high);
      merging(low, mid, high);
   } else { 
      return;
   }   
}

int main() { 
   int i;
   printf("\n===============================================\n");
   printf("Data sebelum dilakukan pengurutan : \n");
   
   for(i = 0; i <= 7; i++)
      printf("%d ", array[i]);

   sort(0, 7);
   printf("\n===============================================");

   printf("\nData setelah dilakukan pengurutan Merge sort : \n");
   
   for(i =0; i <= 7; i++)
      printf("%d ", array[i]);
}
