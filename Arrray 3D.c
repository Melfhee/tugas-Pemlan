#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
	
	int data[3][3][3]={{{5,1,3},{6,7,8},{1,2,1}},{{-3,2,5},{-4,3,4},{-5,7,8}},{{-3,-5,2},{-4,-4,1},{-7,-3,4}}};
	int i,j,k;
	float titikAB1,titikBC1,titikAB2,titikBC2,titikAB3,titikBC3,ttlAC1,ttlAC2,ttlAC3;

	for (i=0;i<3;i++){
		printf("Array ke %d\n",i+1);
		for (j=0;j<3;j++){
			for (k=0;k<3;k++){
				printf("%d\t",data[i][j][k]);	
			}
			printf("\n");
		}
		printf("--------------------");
		printf("\n");
	}
	
	titikAB1 = sqrt(pow((data[0][0][0]-data[0][1][0]),2)+pow((data[0][0][1]-data[0][1][1]),2)+pow((data[0][0][2]-data[0][1][2]),2));
	titikBC1 = sqrt(pow((data[0][1][0]-data[0][2][0]),2)+pow((data[0][1][1]-data[0][2][1]),2)+pow((data[0][1][2]-data[0][2][2]),2));
	ttlAC1 = titikAB1+titikBC1;
	printf("\n-------------------------------------------------\n");
	printf("|Panjang AB Array1 = %f\t\t\t|\n",titikAB1);
	printf("|Panjang BC Array1 = %f\t\t\t|\n",titikBC1);
	printf("|\t\t\t\t\t\t|\n");
	printf("|Panjang TOTAL = %f\t\t\t|",ttlAC1);
	printf("\n-------------------------------------------------\n");
	
	titikAB2 = sqrt(pow((data[1][0][0]-data[1][1][0]),2)+pow((data[1][0][1]-data[1][1][1]),2)+pow((data[1][0][2]-data[1][1][2]),2));
	titikBC2 = sqrt(pow((data[1][1][0]-data[1][2][0]),2)+pow((data[1][1][1]-data[1][2][1]),2)+pow((data[1][1][2]-data[1][2][2]),2));
	ttlAC2 = titikAB2+titikBC2;
	printf("|Panjang AB Array2 = %f\t\t\t|\n",titikAB2);
	printf("|Panjang BC Array2 = %f\t\t\t|\n",titikBC2);
	printf("|\t\t\t\t\t\t|\n");
	printf("|Panjang TOTAl = %f\t\t\t|",ttlAC2);
	printf("\n-------------------------------------------------\n");
	
	
	titikAB3 = sqrt(pow((data[2][0][0]-data[2][1][0]),2)+pow((data[2][0][1]-data[2][1][1]),2)+pow((data[2][0][2]-data[2][1][2]),2));
	titikBC3 = sqrt(pow((data[2][1][0]-data[2][2][0]),2)+pow((data[2][1][1]-data[2][2][1]),2)+pow((data[2][1][2]-data[2][2][2]),2));
	ttlAC3 = titikAB3+titikBC3;
	printf("|Panjang AB Array3 = %f\t\t\t|\n",titikAB3);
	printf("|Panjang BC Array3 = %f\t\t\t|\n",titikBC3);
	printf("|\t\t\t\t\t\t|\n");
	printf("|Panjang TOTAL = %f\t\t\t|",ttlAC3);
	printf("\n-------------------------------------------------\n");
	
	return 0;
}
	
