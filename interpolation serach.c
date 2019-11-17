#include<stdio.h>

int main(){
	int data[10] = {1,2,4,5,6,7,8,10,11,12};
	int i,low,high,tm,pos;
	printf("Masukkan nilai yang anda cari: ");
	scanf("%d",&i);
	
	//proses pencarian data 
	tm=0;
	high=9;
	low=0;
	do
	{
		pos = ((i-data[low])/(data[high]-data[low]))*(high-low)+low; //rumus interpolation search
		if(data[pos]==i)
		{
			tm++;
			break;
		}
		if (data[pos]>i)
		high = pos-1;
		else
		if(data[pos]<i)
		low = pos +1;
	}
	while(i>=data[low]&&i<=data[high]);
	if(tm>0)
	{
		printf("data %d yang dicari ada dalam array\n", i);
	}
	else
	{
		printf("data tidak di temukan");
	}
	getch();
	return 0;
}
