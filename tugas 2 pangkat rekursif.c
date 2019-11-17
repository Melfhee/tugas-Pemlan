#include<stdio.h>

main(){
	int x,n;
	printf("========================================================\n");
	printf("\t\t MENGHITUNG NILAI BERPANGKAT\t\t\n");
	printf("========================================================\n");
	printf("Masukkan Nilai yang ingin di pangkatkan: ");
	scanf("%d", &x);
	printf("Pangkat Bilangan: ");
	scanf("%d", &n);

int pangkat (int x, int n)// perpangkatan rekursif
{
	if (n == 0){
		return 1;
	}
	else{
		return x * pangkat(x,n-1);
	}

}
	system("cls");
	printf("========================================================\n");
	printf("********************************************************\n");
	printf("\n");
	printf("Hasil Bilangan %d Pangkat %d = %d\n",x,n, pangkat(x,n));
	printf("\n");
	printf("========================================================\n");
	printf("********************************************************\n");
}




// nama : Melinda Shilatil Fauziyah (18081010122)
