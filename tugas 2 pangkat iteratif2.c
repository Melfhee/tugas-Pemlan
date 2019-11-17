#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x, n, i, hasil;
	
	printf("========================================================\n");
	printf("   MENGHITUNG NILAI BERPANGKAT MENGGUNAKAN ITERATIF\n");
	printf("========================================================\n");
	printf("Masukkan Nilai yang ingin di pangkatkan: ");
	scanf("%d", &x);
	printf("Pangkat Bilangan: ");
	scanf("%d", &n);
	i=1;
	hasil=1;
	
	for(i=1;1<=n;i++)
	{
		hasil=hasil*x;
	}
	system("cls");
	printf("========================================================\n");
	printf("********************************************************\n");
	printf("\n");
	printf("Hasil Bilangan %d Pangkat %d = %d\n",x,n, hasil);
	printf("\n");
	printf("========================================================\n");
	printf("********************************************************\n");
	return 0;
}
// MELINDA SHILATIL FAUZIYAH [18081010122]
