#include <stdio.h>
//selection sort

int main(){
	int i,j;
	int N[10]={10,9,3,1,6,0,2,5,8,7};
	printf("Data Awal\n");
      for(i=0;i<10;i++)
    {
        printf(" %i ",N[i]);
    }
    printf("\n");
    
	for(i=0; i<10; i++){
		int iMin=i;
		for(j=i; j<10; j++){
			if(N[j]<N[iMin]){
				iMin=j;
			}
		}
		int temp=N[i];
		N[i]=N[iMin];
		N[iMin]=temp;
	}
	printf("\n");
	printf("Data seteleah dilakukan selection sort \n");
	for(i=0; i<10; i++){
		printf("%d ", N[i]);
	}

	getchar();
}
