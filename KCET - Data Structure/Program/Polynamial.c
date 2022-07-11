#include<stdio.h>
#include<stdlib.h>
struct node
{
	int co,pow;
	struct node *next;
};
struct node *hdr1=NULL;
struct node*trav1=NULL;
struct node*hdr2=NULL;
struct node*trav2=NULL;
struct node*hdr3=NULL;
struct node*trav3=NULL;
void insert_1(int x,int y)
{
	trav1=hdr1;
	struct node *temp1=(struct node *)malloc(sizeof(struct node*));
	temp1->co=x;
	temp1->pow=y;
	temp1->next=NULL;
	if(hdr1==NULL)
	{
		hdr1=temp1;
		printf("Data inserted succesfully");
	}
	else
	{
	
		while(trav1->next!=NULL)
		{		
		trav1=trav1->next;
		}
		trav1->next=temp1;
		printf("Data inserted succesfully");
	}

}
void insert_2(int x,int y)
{
	trav2=hdr2;
	struct node *temp2=(struct node *)malloc(sizeof(struct node*));
	temp2->co=x;
	temp2->pow=y;
	temp2->next=NULL;
	if(hdr2==NULL)
	{
		hdr2=temp2;
		printf("Data inserted succesfully");
	}
	else
	{
	
		while(trav2->next!=NULL)
		{		
		trav2=trav2->next;
		}
		trav2->next=temp2;
		printf("Data inserted succesfully");
	}

}
void insert_3(int x,int y)
{
	trav3=hdr3;
	struct node *temp3=(struct node *)malloc(sizeof(struct node*));
	temp3->co=x;
	temp3->pow=y;
	temp3->next=NULL;
	if(hdr3==NULL)
	{
		hdr3=temp3;
		printf("Data inserted succesfully");
	}
	else
	{
	
		while(trav3->next!=NULL)
		{		
		trav3=trav3->next;
		}
		trav3->next=temp3;
		printf("Data inserted succesfully");
	}

}
void display_1()
{
	trav1=hdr1;
	if(hdr1==NULL)
		printf("The link list is empty");
	else
	{
		printf("\nThe linkli structure is....\n");
		while(trav1!=NULL)
		{
			printf("%dx(%d)",trav1->co,trav1->pow);
			trav1=trav1->next;
		}
	}
}
void display_2()
{
	trav2=hdr2;
	if(hdr2==NULL)
		printf("The link list is empty");
	else
	{
		printf("The linkli structure is....\n");
		while(trav2!=NULL)
		{
			printf("%dx(%d)",trav2->co,trav2->pow);
			trav2=trav2->next;
		}
	}
}
void display_3()
{
	trav3=hdr3;
	if(hdr3==NULL)
		printf("The link list is empty");
	else
	{
		printf("The link list structure is....\n");
		while(trav3!=NULL)
		{
			printf("%dx(%d)",trav3->co,trav3->pow);
			trav3=trav3->next;
		}
	}
}
void check()
{
	int x1,y1;
	trav1=hdr1;
	trav2=hdr2;
	while((trav1!=NULL)&&(trav2!=NULL))
	{	
		if((trav1->pow)==(trav2->pow))
		{
			x1=(trav1->co)+(trav2->co);
			y1=trav1->pow;
			insert_3(x1,y1);
			trav1=trav1->next;
			trav2=trav2->next;
		}
		else if((trav1->pow)>(trav2->pow))
		{	
			x1=trav1->co;
			y1=trav1->pow;	
			insert_3(x1,y1);
			trav1=trav1->next;
		}
		else
		{
			x1=trav2->co;
			y1=trav2->pow;	
			insert_3(x1,y1);
			trav2=trav2->next;
		}
	}
	while(trav1!=NULL)
	{
		insert_3(trav1->co,trav1->pow);
		trav1=trav1->next;
	}
	while(trav2!=NULL)
	{
		insert_3(trav2->co,trav2->pow);
		trav2=trav2->next;
	}
}
void main()
{
	int ch,coe,powe,i,n1,n2;
	do
	{
		printf("Main Menu");
		printf("\n1.Insert 1st equvation\n2.Insert 2nd equvation\n3.Manupulation\n");
		printf("Enter your choice :");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:		
					printf("\nEnter the coefficient : ");
					scanf("%d",&coe);
					printf("\nEnter the power");
					scanf("%d",&powe);
					insert_1(coe,powe);
					display_1();
					break;
			case 2:
					printf("Enter the coefficient : ");
					scanf("%d",&coe);
					printf("\nEnter the power");
					scanf("%d",&powe);
					insert_2(coe,powe);
					display_2();
					break;
			case 3:
		 			check();
					display_3();
					break;
				
		}
	}while(ch<4);
}
