#include<stdio.h>
int main()
{
	int read1,read2,charge=0,newread;
	printf("enter the primary reading");
	scanf("%d",&read1);
	printf("enter the secondary reading");
	scanf("%d",&read2);
	newread=read2-read1;
	if((newread<=100)&&(newread>0))
	{
	 charge=newread*1.5;
	 printf("bill=%d",charge);
	}	
	else if((newread>100)&&(newread<=200))
		{
	 charge=newread*2.5;
	 printf("bill=%d",charge);
	}
	else
		{
	 charge=newread*3.5;
	 printf("bill=%d",charge);
	}	
}
