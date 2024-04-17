//struct employee
#include<stdio.h>
#include<string.h>
#define max 100
struct employee{
	int eno;
	char ename[20];
	int salary;
	int dept_no;
};

void insert_employee(struct employee e[],int n)
{
	int i;
		printf("enter the details of employee");
	for(i=1;i<=n;i++)
	{
		printf("enter the %d employee no:",i);
		scanf("%d",&e[i].eno);
		printf("enter the %d employee name:",i);
		scanf("%s",e[i].ename);
		printf("enter the %d employee salary:",i);
		scanf("%d",&e[i].salary);
		printf("enter the %d dept no:",i);
		scanf("%d",&e[i].dept_no);
		
	}

}

void display(struct employee e[],int n)
{
	int i;
	 printf("employee details..\n");
	 for(i=1;i<=n;i++)
	{
		printf("\nemployee %d  no:%d",i,e[i].eno);
			printf("\nemployee %d  name:%s",i,e[i].ename);
				printf("\nemployee %d  salary:%d",i,e[i].salary);
					printf("\nemployee %d  departmentno:%d",i,e[i].dept_no);
	}
	 
}
void search_empo(struct employee e[],int n)
{
	int emp,i;
	int flag=0;
	 printf("enter the employee no to search:");
	 scanf("%d",&emp);
	 for(i=0;i<n;i++)
	 {
	 		if(e[i].eno==emp)
	 		{
	 			 flag=1;
			}
			else
			      flag=0;
	 }
	 if(flag==1)
	 {
	 	 printf("employee found");
	 	 	printf("\nemployee %d  no:%d",i,e[i].eno);
			printf("\nemployee %d  name:%s",i,e[i].ename);
				printf("\nemployee %d  salary:%d",i,e[i].salary);
					printf("\nemployee %d  departmentno:%d",i,e[i].dept_no);
	 	 
	 }
}
void sort_empname(struct employee e[],int n)
{
	int i,j;
	struct employee temp;
	for(i=0;i<n;i++)
	{
		 for(j=i+1;j<n;j++)
		 {
		 		if(strcmp(e[i].ename,e[j].ename)>0)
		 		{
		 			temp=e[i];
		 			e[i]=e[j];
		 			e[j]=temp;
				 }
		 }
	}
	printf("sorted list..\n");
	for(i=0;i<n;i++)
	{
	 	 	printf("\nemployee %d  no:%d",i,e[i].eno);
			printf("\nemployee %d  name:%s",i,e[i].ename);
				printf("\nemployee %d  salary:%d",i,e[i].salary);
					printf("\nemployee %d  departmentno:%d",i,e[i].dept_no);
	 	 
	}
		
}

int main()
{
	struct employee e[max];
	int n,i=0,ch;
	printf("enter the no of employees:");
	scanf("%d",&n);
	while(ch!=5)
	{
		printf("menu\n");
		printf("1-insert\n2-display\n3-search by empno\nenter the choice:\n");
		scanf("%d",&ch);
		switch(ch)
		{
			 case 1:insert_employee(e,n);
			 break;
			 case 2:display(e,n);
			 break;
			 case 3:search_empo(e,n);
			 break;
			 case 4:sort_empname(e,n);
			 break;
		}
	
		
	 } 
}
