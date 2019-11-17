#include <stdio.h>
#include <string.h>
#include<conio.h>
// Melinda Shilatil Fauziyah (18081010122)//

struct alamat{
 char jalan[15];
 char kota[15],propinsi[17];
};

struct tanggal{
 int tanggal, bulan, tahun;
};

struct nasabah{
 int norek;
 double saldo;
 char bank[5];
 char nama[20];
 struct alamat addr;
 struct tanggal tgllahir;
};

typedef struct nasabah ns;
int main()
{
 int i,n, pilih, cari;
 char c[5];
 double jmlBCA,jmlMDR,max,min;
 while (pilih != 1 || pilih != 2 || pilih != 3 || pilih != 4 || pilih != 5 || pilih != 6 || pilih != 7 || pilih != 8 ){
 ns p[3];
 
strcpy(p[0].nama, "Rico");
strcpy(p[0].bank, "BNI");
strcpy(p[0].addr.jalan, "JL. Anyaran ");
strcpy(p[0].addr.kota, "Surabaya");
strcpy(p[0].addr.propinsi, "Jawa Timur");
p[0].saldo = 5000000;
p[0].norek = 1801;
p[0].tgllahir.tanggal = 2;
p[0].tgllahir.bulan = 7;
p[0].tgllahir.tahun = 1997;

strcpy(p[1].nama, "Hani");
strcpy(p[1].bank, "BNI");
strcpy(p[1].addr.jalan, "Jl. Lawang ");
strcpy(p[1].addr.kota, "Surabaya");
strcpy(p[1].addr.propinsi, "Jawa Timur");
p[1].saldo = 10000000;
p[1].norek = 1802;
p[1].tgllahir.tanggal = 10;
p[1].tgllahir.bulan = 7;
p[1].tgllahir.tahun = 1999;

strcpy(p[2].nama, "Maimunah");
strcpy(p[2].bank, "BNI");
strcpy(p[2].addr.jalan, "JL. Tangkuban");
strcpy(p[2].addr.kota, "Semarang");
strcpy(p[2].addr.propinsi, "Jawa Tengah");
p[2].saldo = 5000000;
p[2].norek = 1803;
p[2].tgllahir.tanggal = 30;
p[2].tgllahir.bulan = 7;
p[2].tgllahir.tahun = 2000;

menu:
	printf("\n ============================================================== \n");
    printf("\n ||                    MENU PILIHAN                          ||");
    printf("\n ============================================================== \n\n");
    printf("\n ============================================================== \n");
    printf("\n ||1. Informasi Data Nasabah                                 ||");
    printf("\n ||2. Mencari Nasabah Berdasarkan Nama                       ||");
    printf("\n ||3. Mencari Nasabah Berdasarkan No. rekening               ||");
    printf("\n ||4. Akumulasi Saldo Nasabah                                ||");
    printf("\n ||5. Mencari Nasabah Berdasarkan Kota                       ||");
    printf("\n ||6. Mencari Nasabah Berdasarkan Provinsi                   ||");
    printf("\n ||7. Mencari Saldo Terbanyak                                ||");
    printf("\n ||8. Mencari Saldo Tersedikit                               ||");
    printf("\n ============================================================== \n\n");
    printf("\n MASUKKAN MENU = ");
    scanf("%d", &pilih);
	if (pilih == 1)
	{
		for(i = 0 ; i<3 ; i++){
			
				printf("===================================================================================== \n");
				printf("||                                    Data Nasabah                                 ||\n");
				printf("===================================================================================== \n");
				printf("Nama 	 	         =%s \n",p[i].nama);
				printf("Nama Bank      	         =%s\n",p[i].bank);
				printf("Jumlah Saldo             =%.f\n",p[i].saldo);
				printf("Tempat tanggal lahir	 =%i-%i-%i\n",p[i].tgllahir.tanggal,p[i].tgllahir.bulan,p[i].tgllahir.tahun);
				printf("Alamat 	             	 =%s  kota %s ,%s\n",p[i].addr.jalan,p[i].addr.kota,p[i].addr.propinsi);

	}
    goto menu;
		
	}else if (pilih == 2){
	printf("Nama : \n");
			scanf("%s", &c);
			for(i = 0; i<3; i++){
				if(strstr(p[i].nama, c)){
				printf("===================================================================================== \n");
				printf("||                                    Data Nasabah                                 ||\n");
				printf("===================================================================================== \n");
				printf("Nama 	 	         =%s \n",p[i].nama);
				printf("Nama Bank      	         =%s\n",p[i].bank);
				printf("Jumlah Saldo 	      	 =%.f\n",p[i].saldo);
				printf("Tempat tanggal lahir	 =%i-%i-%i\n",p[i].tgllahir.tanggal,p[i].tgllahir.bulan,p[i].tgllahir.tahun);
				printf("Alamat 		         =%s kota %s ,%s\n",p[i].addr.jalan,p[i].addr.kota,p[i].addr.propinsi);
					break;
				}
		}
		goto menu;
		
		}else if (pilih == 3){
			printf("Nomer Rekening : \n");
			scanf("%i", &cari);
			for(i = 0; i<3; i++){
				if(p[i].norek== cari){
				printf("===================================================================================== \n");
				printf("||                                    Data Nasabah                                 ||\n");
				printf("===================================================================================== \n");
				printf("Nama Bank      	          =%s\n",p[i].bank);
				printf("Jumlah Saldo              =%.f\n",p[i].saldo);
				printf("Nama 	 	          =%s \n",p[i].nama);
				printf("Tempat tanggal lahir	  =%i-%i-%i\n",p[i].tgllahir.tanggal,p[i].tgllahir.bulan,p[i].tgllahir.tahun);
				printf("Alamat 		          =%s  kota %s ,%s\n",p[i].addr.jalan,p[i].addr.kota,p[i].addr.propinsi);
				break; 
}
}
goto menu;

	}else if (pilih == 4){
			n = p[0].saldo + p[1].saldo + p[2].saldo + p[3].saldo;
			printf("	TOTAL SALDO KESELURUHAN = Rp.%ld		            \n", n);
goto menu;

	}else if (pilih == 5){
		printf("Cari Data  : \n");
			scanf("%s", &c);
			for(i = 0; i<3; i++){

				if(strstr(p[i].addr.kota, c)){
				printf("===================================================================================== \n");
				printf("||                                    Data Nasabah                                 ||\n");
				printf("===================================================================================== \n");
				printf("Nama Bank                =%s\n",p[i].bank);
				printf("Jumlah Saldo 	   	   	 =%.f\n",p[i].saldo);
				printf("Nama 	 	          =%s \n",p[i].nama);
				printf("Tempat tanggal lahir	 =%i-%i-%i\n",p[i].tgllahir.tanggal,p[i].tgllahir.bulan,p[i].tgllahir.tahun);
				printf("Alamat 	              =%s  kota %s ,%s\n",p[i].addr.jalan,p[i].addr.kota,p[i].addr.propinsi);
				break;
}
}
goto menu;

		}else if (pilih == 6){

				printf("Cari Data : \n");
				scanf("%s", &c);
				for(i = 0; i<3; i++){

				if(strstr(p[i].addr.propinsi, c)){
				printf("===================================================================================== \n");
				printf("||                                    Data Nasabah                                 ||\n");
				printf("===================================================================================== \n");
				printf("Nama Bank      	         =%s\n",p[i].bank);
				printf("Jumlah Saldo 	      	 =%.f\n",p[i].saldo);
				printf("Nama            	  =%s \n",p[i].nama);
				printf("Tempat tanggal lahir	 =%i-%i-%i\n",p[i].tgllahir.tanggal,p[i].tgllahir.bulan,p[i].tgllahir.tahun);
				printf("Alamat 		          =%s  kota %s ,%s\n",p[i].addr.jalan,p[i].addr.kota,p[i].addr.propinsi);
				
					break;
}
}
goto menu;

		}else if(pilih == 7){


			 for(i=0; i<3; i++){
        	 if(p[i].saldo>6000000){
    printf ("nilai %.f= Saldo Tertinggi\n",p[i].saldo);
    break;
        }
			 }


goto menu;

}else if(pilih == 8){
for(i=0; i<3; i++){
        	 if(p[i].saldo<6000000){
    printf ("nilai %.f= Saldo Tersedikit\n",p[i].saldo);
    break;
   
			}
		}
 }

getch();
return 0;
}
}

