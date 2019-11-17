#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//*Melinda Shilatil Fauziyah*//
//*18081010122*//

struct matakuliah{
	double ipk;
	int sks[10];
	float nilai[10];
	char nama_matkul[10][10];
};
struct mahasiswa{
	char nama[10];
	char npm [10];
	struct matakuliah mk[10];
};
int main() {
	int i,y;
	float totalnilai=0;
	float totalipk=0;
	int totalsks=0;
	struct mahasiswa mhs[20];
	char cari[10];
	menu:
	printf("==================================================================================================\n");
	printf("||\t\t\t\t SELAMAT DATANG DI DATA IPK MAHASISWA\t\t\t\t||\n");
	printf("==================================================================================================\n");
	printf ("Nama Mahasiswa Yang Anda Cari: ");
	scanf ("%s",&cari);
	system("cls");

	strcpy (mhs[0].nama,"Yenni");
	strcpy (mhs[1].nama,"Dian");
	strcpy (mhs[2].nama,"Aini");
	strcpy (mhs[3].nama,"Aura");
	
	strcpy (mhs[0].npm,"19980");
	strcpy (mhs[1].npm,"19981");
	strcpy (mhs[2].npm,"19982");
	strcpy (mhs[3].npm,"19983");
	
	strcpy (mhs[0].mk[0].nama_matkul[0],"Pemograman Dasar");
	mhs[0].mk[0].nilai[0]= 3;
	mhs[0].mk[0].sks[0]=4;
	strcpy (mhs[0].mk[1].nama_matkul[1],"Pancasila");
	mhs[0].mk[1].nilai[1]= 4;
	mhs[0].mk[1].sks[1]=3;
	strcpy (mhs[0].mk[2].nama_matkul[2],"Sistem Digital");
	mhs[0].mk[2].nilai[2]= 3;
	mhs[0].mk[2].sks[2]=3;
	strcpy (mhs[0].mk[3].nama_matkul[3],"Statistik Komputasi");
	mhs[0].mk[3].nilai[3]= 4;
	mhs[0].mk[3].sks[3]=4;
	
	strcpy (mhs[1].mk[0].nama_matkul[0],"Pemograman Dasar");
	mhs[1].mk[0].nilai[0]= 4;
	mhs[1].mk[0].sks[0]=4;
	strcpy (mhs[1].mk[1].nama_matkul[1],"Pancasila");
	mhs[1].mk[1].nilai[1]= 3;
	mhs[1].mk[1].sks[1]=3;
	strcpy (mhs[1].mk[2].nama_matkul[2],"Sistem Digital");
	mhs[1].mk[2].nilai[2]= 3;
	mhs[1].mk[2].sks[2]=3;
	strcpy (mhs[0].mk[3].nama_matkul[3],"Statistik Komputasi");
	mhs[1].mk[3].nilai[3]= 4;
	mhs[1].mk[3].sks[3]=4;
	
	strcpy (mhs[2].mk[0].nama_matkul[0],"Pemograman Dasar");
	mhs[2].mk[0].nilai[0]= 3;
	mhs[2].mk[0].sks[0]=4;
	strcpy (mhs[2].mk[1].nama_matkul[1],"Pancasila");
	mhs[2].mk[1].nilai[1]= 3;
	mhs[2].mk[1].sks[1]=3;
	strcpy (mhs[2].mk[2].nama_matkul[2],"Sistem Digital");
	mhs[2].mk[2].nilai[2]= 3;
	mhs[2].mk[2].sks[2]=3;
	strcpy (mhs[2].mk[3].nama_matkul[3],"Statistik Komputasi");
	mhs[2].mk[3].nilai[3]= 2;
	mhs[2].mk[3].sks[3]=4;
	
	strcpy (mhs[3].mk[0].nama_matkul[0],"Pemograman Dasar");
	mhs[3].mk[0].nilai[0]= 4;
	mhs[3].mk[0].sks[0]=4;
	strcpy (mhs[3].mk[1].nama_matkul[1],"Pancasila");
	mhs[3].mk[1].nilai[1]= 4;
	mhs[3].mk[1].sks[1]=3;
	strcpy (mhs[3].mk[2].nama_matkul[2],"Sistem Digital");
	mhs[3].mk[2].nilai[2]= 4;
	mhs[3].mk[2].sks[2]=3;
	strcpy (mhs[3].mk[3].nama_matkul[3],"Statistik Komputasi");
	mhs[3].mk[3].nilai[3]= 4;
	mhs[3].mk[3].sks[3]=4;
	
	printf("==================================================================================================\n");
	for(i=0; i<5; i++){
		if (!strcmp(mhs[i].nama,cari)){
			printf("||Nama Lengkap	\t\t: %s\t\t\t\t\t\t\t\t||\n",mhs[i].nama);
			printf("||NPM		\t\t: %s\t\t\t\t\t\t\t\t||\n",mhs[i].npm);
	printf("==================================================================================================\n\n\n");
	printf("==================================================================================================\n");
			for(y=0; y<4; y++){
				printf("Mata Kuliah	\t\t: %s\n",mhs[i].mk[y].nama_matkul[y]);
				printf("Sks	\t\t\t: %d\n",mhs[i].mk[y].sks[y]);
				printf("Nilai Yang Diperoleh\t\t: %.f\n",mhs[i].mk[y].nilai[y]);
				printf("--------------------------------------------------------------------------------------------------\n");
 				totalnilai = totalnilai + ((mhs[i].mk[y].nilai[y])*(mhs[i].mk[y].sks[y]));
				totalsks = totalsks+mhs[i].mk[y].sks[y];
	 	}
	}
	}
	printf("==================================================================================================\n\n");
	
	totalipk =totalnilai/totalsks;
	printf("==================================================================================================\n");
	printf("Total Sks : %d\n",totalsks);
	printf("IPK : %.2f\n",totalipk);
	printf("==================================================================================================\n");
	return 0;
}

	
	
