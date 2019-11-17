#include <stdio.h>
//insertion sort

int main(){
	int i,j;
	int N[10]={10,9,3,1,6,0,2,5,8,7};
	printf("Data Awal \t\t\t\t---------->");
      for(i=0;i<10;i++)
    {
        printf(" %i ",N[i]);
    } 
    printf("\n");
	for(int i=1; i<10; i++){
		for(int j=i; j>0 && N[j]<N[j-1]; j--){ 
			int temp=N[j-1];
			N[j-1]=N[j];
			N[j]=temp;
		}
	}

	printf("\n");
	printf("Data seteleah dilakukan insertion sort ===========> ");
	for(int i=0; i<10; i++){
		printf(" %d ", N[i]);
	}
	printf("\n");
	getchar();
}
