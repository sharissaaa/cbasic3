#include<stdio.h>
#include<malloc.h>
struct node{
	int data;
	struct node *next;
};
struct node *head=NULL;
struct node *t;
void insert(int e)
{
		if(head==NULL)
		{
				head=(struct node*)malloc(sizeof(struct node));
				head->data=e;
				head->next=NULL;
		}
		else
		{
			t=head;
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
			printf("empty");
		}
		else
		{
				t=head;
				while(t!=NULL)
				{
						printf("%d\t",t->data);
						t=t->next;
				}
		}
}
void reverse(struct node *t)
{
    if (t == NULL)
        return;
    reverse(t->next);
    printf("%d\t", t->data);
}
void delete(int e)
{
	if(head==NULL)
	{
		printf("empty");
	}
	else if(head->next!=NULL)
	{
			head=head->next;
	}
	else
	{
		 t=head;
		 while(head->next==NULL && head->next->data!=e)
		 {
		 		t=t->next;
		 }
		 if(t->next==NULL)
		 {
		 	printf("elem not found");
		 }
		 else
		 t->next=t->next->next;
	}
		
		
		
}
int main()
{
		insert(20);
		insert(10);
		display();
		printf("\n");
		struct node *t=head;
		reverse(t);
		delete(20);
		display();
}
