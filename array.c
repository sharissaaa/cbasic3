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
	 	 array[++pos]=e;
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
	 	 printf("deleted element is=%d",array[pos--]);
	 }
}
void display()
{
	 int i;
	 printf("array elem are:\n");
	 for(i=0;i<=pos;i++)
	 {
	 	 printf("%d\t",array[i]);
	 }
}
int menu()
{
	 int ch;
	 printf("1-insert\n2-delete\n3-exit\nenter ur choice\n");
	 scanf("%d",&ch);
	 return ch;
}
void process()
{
	 int ch;
	 for(ch=menu();ch!=3;ch=menu)
	 {
	switch(ch)
	 {
	 	 case 1:printf("ENTER THE ELEM TO BE inserted:");
	 	        scanf("%d",&ch);
	 	        insert(ch);
	 	        break;
	 	 case 2:delete();
		        break;
	     case 3:printf("exit");
		        break;
		 default: printf("wrong choice");
		         break;					       
	 }
	 }

}
int main()
{
process();

	 
}
