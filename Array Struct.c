#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
void  chgcolor(unsigned short color)
{
HANDLE sCon = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(sCon,color);
}

struct data_mahasiswa
{
	int npm;
	float ipk;
};
typedef struct data_mahasiswa mhs;

int main()
{
chgcolor(14);
printf("=============================================================\n");
printf("*************************************************************\n");
printf("	      SELAMAT DATANG DI INFORMASI MAHASISWA\n");
printf("                0leh : MELINDA SHILATIL FAUZIYAH\n");
printf("                      NPM : 18081010122\n");
printf("=============================================================\n");
printf("*************************************************************\n");
chgcolor(15);
	int i, pilih, cari;

	mhs data[3];
	data[0].npm = 101;
	data[0].ipk = 3.45;
	data[1].npm = 102;
	data[1].ipk = 3.60; 
	data[2].npm = 103;
	data[2].ipk = 4.00;
	printf("............................................................\n");
	printf("-              Tampilkan Data Struct Mahasiswa - \n");
	printf("............................................................\n");

	for(i = 0; i < 3; i++)
	{
		printf("Npm : %d\n", data[i].npm);
		printf("ipk : %.2f\n\n", data[i].ipk);
	}
	printf("\n\n");
	printf("............................................................\n");
	printf("- Tampilkan Data Struct Mahasiswa (REVERSE) - \n");
	printf("............................................................\n");
	for(i = 3-1; i >= 0; i--)
	{
		printf("Npm : %d\n", data[i].npm);
		printf("ipk : %.2f\n\n", data[i].ipk);
	}
	printf("\n\n");
	printf("............................................................\n");
	printf("- Data Pencarian Berdasarkan NPM - \n");
	printf("............................................................\n");
	printf("Masukkan sebuah NPM : ");
	scanf("%d", &cari);
	for(i = 0; i < 3; i++)
	{
		if(data[i].npm == cari)
		{
			printf("NPM [%d] memiliki IPK [%.2f] ", data[i].npm, data[i].ipk, i);
		}
	}
	
	return 0;
}
