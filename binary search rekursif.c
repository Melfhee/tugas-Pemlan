#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int BinarySearch(int data[], int a, int b, int c){
    int t = (a+b)/2;
    if(a>b){
      return -1;
    } 
    if(data[t] == c){
      return t;
    }
    if(data[t] < c){
      return BinarySearch(data, t+1, b, c);
    } else {
      return BinarySearch(data, a, t-1, c);
    }
}

void view(int i, int data[]){
    for(i=0; i<15; i++){
        printf("%d, ", data[i]);
    }
}

void dataurut(int i, int j, int data[]){
    for (i = 0; i < 15 - 1; i++) {
      for (j = 15 - 1; j > i; j--) {
        if (data[i] > data[j]) {
          int temp = data[j];
          data[j] = data[i];
          data[i] = temp;
        }
      }
    }
}

int main(){
    int angka[15] = {12,5,20,17,35,3,19,4,16,22,9,11,8,1,6};
    int i, j, posisi, cari;

    int n = sizeof(angka)/sizeof(angka[0]);
	printf("\n");
	printf("----------------------------------------------------");
    printf("\nData Sebelum Diurutkan\n");
    view(i, angka);
	printf("\n----------------------------------------------------");
	printf("\n");
	dataurut(i,j,angka);
	printf("\n----------------------------------------------------");
    printf("\nData Setelah Diurut\n");
    view(i, angka);
	printf("\n----------------------------------------------------\n");
	printf("\n");
    printf("\n\nCari Angka : "); 
	scanf("%d", &cari);
	
    posisi = BinarySearch(angka, 0, n-1, cari);
    
   	system("cls"); 
    if(posisi < 0){
    printf("Angka %d pada array tidak ditemukan", cari);
    } else {
    printf("==================================================================\n");
    printf("||\tAngka %d Ditemukan pada indeks %d Setelah Diurutkan\t||\n", cari, posisi+1);
    printf("==================================================================\n");
    }
    getch();
    return 0;
}
