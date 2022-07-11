#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
}*h;
void insert_first(int d)
{
	struct node *t=(struct node*)malloc(sizeof(struct node*));
	t->data=d;
	t->next=h;
	h=t;
}

int delete_last()
{	
	int a;
	if(h==NULL)
	{	
		printf("EMPTY LIST");
		return 0;
	}
	else if(h->next==NULL)
	{
		a=h->data;		
		h=NULL;
		return a;
	}
	else
	{
		struct node *tr=h;
		while(tr->next->next!=NULL)
		{
			tr=tr->next;
		}
		a=tr->next->data;
		tr->next=NULL;
		return a;
	}
	
}
void display()
{
	struct node*tr=h;
	if(h==NULL)
	{
		printf("Empty List");	
	}
	else
	{
		while(tr!=NULL)
		{
			printf("%d  ",tr->data);
			tr=tr->next;	
		}
	}
}
void main()
{	
	int data;
	int c;
	do
	{
		printf("\n========List of operations========");
		printf("\n1.Insertion\n");	
		printf("2.Deletion\n");	
		printf("3.Display\n");
		printf("==================================\n");	
		printf("Enter the choice:");
		scanf("%d",&c);
		switch(c)
		{
			case 1:
				printf("Enter the data:\n");
				scanf("%d",&data);
				insert_first(data);
				display();
				break;
			case 2:
				printf("The deleted element is %d \nThe remaining element is:",delete_last());
				display();
				break;

			case 3:
				display();
				break;
			default:
				printf("Wrong choice");
				break;
		}
	}while(c<4);
}
	

