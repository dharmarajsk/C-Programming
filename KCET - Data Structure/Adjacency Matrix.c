#include<stdio.h>
#include"myprofile.h"
int a[30][30];
int ch,cho,v,x,y,w;
int i,j,c,co=0;
void display();
void main()
{
	documentation(__FILE__);
	do
	{
	printf("\n***************\n1.Directed\n2.Undirected\n***************\nEnter your choice:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("***************\n1.Weighted\n2.Unweighted\n***************\nEnter your choice:");
			scanf("%d",&cho);
			switch(cho)
			{
				case 1:
					printf("Enter the number of vertices:");
					scanf("%d",&v);
					for(i=0;i<v;i++)
					{
						for(j=0;j<v;j++)
						{
							a[i][j]=0;			
						}
					}
					printf("Enter the edge:");
					do
					{
						printf("\nEnter the connected vertices(Source to Destination):");
						scanf("%d",&x);
						scanf("%d",&y);
						printf("\nEnter the Weight:");
						scanf("%d",&w);
						a[x-1][y-1]=w;
						printf("\nContinue press '0':");
						scanf("%d",&c);
						co++;
					}while(c==0&&co!=v);
					display();
					break;
				case 2:
					printf("Enter the number of vertices:");
					scanf("%d",&v);
					for(i=0;i<v;i++)
					{
						for(j=0;j<v;j++)
						{
							a[i][j]=0;			
						}
					}
					printf("Enter the edge:");
					do
					{
						printf("\nEnter the connected vertices(Source to Destination):");
						scanf("%d",&x);
						scanf("%d",&y);
						a[x-1][y-1]=1;
						printf("\nContinue press '0':");
						scanf("%d",&c);
					}while(c==0);
					display();
					break;
				default:
					printf("Enter the correct choice:");
			}
			break;
		case 2:
			printf("1.Weighted\n2.Unweighted\nEnter the choices:");
			scanf("%d",&cho);
			switch(cho)
			{
				case 1:
					printf("Enter the no.of.vertices:");
					scanf("%d",&v);
					for(i=0;i<v;i++)
					{
						for(j=0;j<v;j++)
						{
							a[i][j]=0;			
						}
					}
					printf("Enter the edges:");
					do
					{
						printf("\nEnter the connected vertices:");
						scanf("%d",&x);
						scanf("%d",&y);
						printf("\nEnter the Weight:");
						scanf("%d",&w);
						a[x-1][y-1]=w;
						a[y-1][x-1]=w;							
						printf("\nContinue press '0':");
						scanf("%d",&c);
					}while(c==0);
					display();
					break;
				case 2:
					printf("Enter the no.of.vertices:");
					scanf("%d",&v);
					for(i=0;i<v;i++)
					{
						for(j=0;j<v;j++)
						{
							a[i][j]=0;			
						}
					}
					printf("Enter the edges:");
					do
					{
						printf("\nEnter the connected vertices:");
						scanf("%d",&x);
						scanf("%d",&y);
						a[x-1][y-1]=1;
						a[y-1][x-1]=1;
						printf("\nContinue press '0':");
						scanf("%d",&c);
					}while(c==0);
					display();
					break;
				default:
					printf("Invalid choice");
			}
			break;
		default:
			printf("Enter the correct choice");
	}
	printf("Continue press '0':");
	scanf("%d",&c);
	}while(c==0);
}
void display()
{
	for(i=0;i<v;i++)
	{
		for(j=0;j<v;j++)
		{
			printf("%d ",a[i][j]);
			printf("    ");
		}
		printf("\n");
	}
}
