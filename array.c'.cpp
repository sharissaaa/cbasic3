//global array
#include<stdio.h>
int pos=-1,array[5];
void insert(int e)
{
	 if(pos+1==5)
	 {
	 	 printf("array is full");
	 }
	 else
	 {
	 	 array[pos++]=e;
	 }
}
void delete()
{
	 if(pos==-1)
	 {
	 	 printf("array is empty");
	 }
	 else
	 {
	 	 printf("deleted element is=%d",array[--pos]);
	 }
}
int main()
{
	 insert(10);
	 delete(10);
	 
}
