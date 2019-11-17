#include <stdio.h>         

	
int main(){
	int angka[10]={13,8,0,2,1,5,11,7,3,4};
	int temp, i, j;
	
	printf("=========================================================\n");
	printf("|Sebelum Sorting :");
	for(i=0; i<10; i++){
		printf("%d ", angka[i]);
	}
	printf("\t\t|");
	printf("\n=========================================================\n");
	//=================================================================================
	for (i = 0; i < 10; i++)                   
	{
		for (j = 0; j < 10; j++)             
		{
			if (angka[j] > angka[i])               
			{
				int tmp = angka[i];        
				angka[i] = angka[j];            
				angka[j] = tmp;             
			}  
		}
	}

	printf("\n\nDi Urutkan Ascending : ");             
	for (i = 0; i <10; i++)                 
	{
		printf(" %d ", angka[i]);
	}
	//====================================================================================
	for (i = 0; i <10; i++)                 
	{
		for (j = 0; j <10; j++)             
		{
			if (angka[j] < angka[i])                
			{
				int tmp = angka[i];         
				angka[i] = angka[j];        
				angka[j] = tmp;             
			}
		}
	}
	printf("\n\nDi Urutkan Descending : ");                  
	for (i = 0; i < 10; i++)                     
	{
		printf(" %d ", angka[i]);                
	}

	return 0;                                   
}
