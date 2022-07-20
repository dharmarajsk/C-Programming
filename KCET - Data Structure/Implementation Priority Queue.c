#include<stdio.h>
#include"myprofile.h"
#define MAXSIZE 10
void pqinsert();
void pqdelete();
void display();
int pqueue[3][MAXSIZE];
int front[3]={0,0,0};
int rear[3]={-1,-1,-1};
int item,pr;
void main()
{
    	documentation(__FILE__);
	char c1[3]="yes";
	char ch;
	int choice;
	do
	{
		printf("\n*************** Queue Operations **************\n");
		printf("\t\t 1.Insert\n");
		printf("\t\t 2.Delete\n");
		printf("\t\t 3.Display\n");
		printf("\t\t 4.Exit\n");
		printf("\t\t Enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: printf("\t\t Enter the priority:");
				scanf("%d",&pr);
				if(pr>0 && pr<10)
					pqinsert(pr-1);
				else
					printf("\t\t Invalid priority\n");
					break;
					case 2: pqdelete();
					break;
					case 3: display();
					break;
					default: printf("\t\tExit\n");
					break;
		}
		printf("\nDo you want Continue(y/n):");
		scanf("%s",c1);
	}while(strcmp(c1,"y")==0);
}

void pqinsert(int pr)
{
	int item;
	if(rear[pr]==MAXSIZE-1)
		printf("\t\t PQueue Overflows\n");
	else
	{
		printf("\t\t Enter the element:");
		scanf("%d",&item);
		rear[pr]++;
		pqueue[pr][rear[pr]]=item;
	}
}
void pqdelete()
{
	static int i=0 ;
	if(rear[i]==front[i]-1)
	{
		printf("\t\t Queue %d Underflows\n",i+1);
		i++;
	}
	else
	{
		printf("\t\t The deleted element is %d of queue %d:\n",pqueue[i][front[i]],i+1);
		front[i]++;
	}
}
void display()
{
	int i,j;
	for(i=0;i<3;i++)
	{
		if(rear[i]==front[i]-1)
			printf("\t\t Queue %d Underflows\n:",i+1);
		else
		{
			printf("\t\tThe elements in priority %d are\n",i+1);
			printf("\t");
			for(j=front[i];j<=rear[i];j++)
			printf("\t%d",pqueue[i][j]);
			printf("\n");
		}
	}
} 
