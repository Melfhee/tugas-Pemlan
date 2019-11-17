#include <stdio.h>
#include <conio.h>
#include <windows.h>
void  chgcolor(unsigned short color)
{
HANDLE sCon = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(sCon,color);
}

int main() {
	
printf("=============================================================\n");
printf("*************************************************************\n");
printf("	      SELAMAT DATANG DI INFORMASI MAHASISWA\n");
printf("                0leh : MELINDA SHILATIL FAUZIYAH\n");
printf("                      NPM : 18081010122\n");
printf("=============================================================\n");
printf("*************************************************************\n");

	int i, pilih, cari;
	while (pilih != 1 || pilih != 2 || pilih != 3){
		int npm[3] = {101,102,103};
		float ipk[3] = {3.45,3.60,4.00};
		chgcolor(2);
		printf("Pilih menggunakan angka\n");
		printf("1. Tampilkan data dari NPM terkecil \n2. Tampilkan data dari NPM terbesar \n3. Cari data Berdasarkan NPM\n");
		printf("Masukkan Pilihan Anda : \n");
		scanf("%d", &pilih);
		printf("\n");
		chgcolor(5);
		if(pilih == 1){
			printf("=============================================================\n");
			printf("*************************************************************\n");
			printf("Data Mahasiswa : \n\n");
			for(i = 0; i<3; i++){
				printf("Npm : %d\n", npm[i]);
				printf("ipk : %f\n\n", ipk[i]);
			printf("=============================================================\n");
			printf("*************************************************************\n");
			}
			
		} else if (pilih == 2){
			
			printf("Data Mahasiswa : \n\n");
			for(i = 2 ; i>=0; i--){
				printf("=============================================================\n");
				printf("*************************************************************\n");
				printf("Npm : %d\n", npm[i]);
				printf("ipk : %f\n\n", ipk[i]);
		}	
		
		} else if (pilih == 3){
			printf("=============================================================\n");
			printf("*************************************************************\n");
			printf("Masukkan npm yang dicari : \n");
			scanf("%d", &cari);
			printf("=============================================================\n");
			printf("*************************************************************\n\n");
			for(i = 0; i<3; i++){
				if(npm[i] == cari){
					printf("Npm : %d\n", npm[i]);
					printf("ipk : %f\n\n", ipk[i]);
					break;
				}
			}			
		} else {
			printf("Inputan Salah");
	}
	}
	
	return 0;
}
