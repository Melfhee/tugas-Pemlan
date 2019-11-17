#include<stdio.h>
#include<conio.h>
#include <stdlib.h>


int main()
{
	char namalengkap[20],npm [8];
	
printf("=============================================================\n");
printf("*************************************************************\n");
printf("	SILAHKAN LOGIN TERLEBIH DAHULU\n");
printf("\n");
printf("Masukkan Nama Lengkap Anda	:");
gets (namalengkap);
printf("Masukkan NPM Anda 		:");
gets (npm);
system("cls");
printf("\n\n");
printf("=========================================================\n");
printf("Selamat Datang 		= %s",namalengkap);
printf("\nDengan NPM		= %s\n",npm);
printf("=========================================================\n");
printf("\n");
printf("*********************************************************\n");
printf("\n");
printf(">>>>>>>>>>>>>>>BERIKUT ADALAH BIODATA ANDA<<<<<<<<<<<<<<<\n");
printf("Nama Lengkap	: Melinda Shilatil Fauziyah\n");
printf("Nama Panggilan	: Melinda\n");
printf("Jurusan		: Teknik Informatika\n");
printf("Angkatan	: 2018\n");
printf("Tempat Lahir	: Sumenep\n");
printf("Tanggal Lahir	: 02 November\n");
printf("Alamat Rumah	: Jl.Semangka GH.20 BSA\n");
printf("No.Telepon	: 085336022201\n");
printf("Email		: melindafauziyah1@gmail.com\n");
printf(">>>>>>>>>>>>>>>>>>>TERIMA KASIH<<<<<<<<<<<<<<<<<<<<<<<<<\n");
printf("\n");
printf("*********************************************************");
getch();
}
