#include <stdio.h>
 
int main()
{
   int c, awal, akhir, tengah, n, search, array[100];
 
   printf("Masukkan Jumlah Element: ");
   scanf("%d",&n);
 
   printf("Masukkan %d Angka Integer\n", n);
 
   for (c = 0; c < n; c++)
      scanf("%d",&array[c]);
 
   printf("Masukkan Angka yang Ingin Dicari\n");
   scanf("%d", &search);
 
   awal = 0;
   akhir = n - 1;
   tengah = (awal+akhir)/2;
 
   while (awal <= akhir) {
      if (array[tengah] < search)
         awal = tengah + 1;    
      else if (array[tengah] == search) {
         printf("%d berada di indeks %d", search, tengah+1);
         break;
      }
      else
         akhir = tengah - 1;
 
      tengah = (awal + akhir)/2;
   }
   if (awal > akhir)
      printf("tidak berada di indeks", search);
 
   return 0;  
}
