//liked list 
#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node{
	int data;
	struct node *next;
};
struct node *head=NULL;
void insert(int e)
{
		if(head==NULL)
		{
				head=(struct node *)malloc(sizeof(struct node));
				head->data=e;
				head->next=NULL;
				
		}
		else
		{
				struct node *t=head;
				while(t->next!=NULL)
				{
						t=t->next;
						
				}
				t->next=(struct node*)malloc(sizeof(struct node));
				t->next->data=e;
				t->next->next=NULL;
			
		}
}
void display()
{
		if(head==NULL)
		{
			 printf("list is empty");
			 
		}
		else
		{
			struct node *t=head;
			while(t!=NULL)
			{
					printf("list are:%d\n",t->data);
					t=t->next;
			}
			
		}
}
void delete(int e)
{
	if(head==NULL)
	{
		 printf("empty");
	}
	else if(head->data==e)
	{
		 head=head->next;
	}
	else
	{
		 struct node *t=head;
		 while(head->next!=NULL && head->next->data!=e)
		 {
		 	 t=t->next;
		 }
		 if(t->next==NULL)
		 {
		 	 printf("not found");
		 }
		 else
		 {
		 	 t->next=t->next->next;
		 }
	}
}
void main()
{
		insert(10);
		insert(30);
		display();
		delete(10);
		delete(40);
		delete(30);
		display();
		
}
