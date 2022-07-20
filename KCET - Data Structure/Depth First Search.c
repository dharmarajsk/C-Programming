#include<stdio.h>
int i,j,n,a[10][10],count[10],s,d;
void matrix(int x);
void print(int x,int y);
void search(int x);
void print(i,j)
{	
	for(i=0;i<n;i++)

	{
		for(j=0;j<n;j++)
		{
			printf("\t%d",a[i][j]);
		}printf("\n");
	}
}
void search(i)
{
	printf("%d",i+1);
	count[i]=1;
	for(j=0;j<n;j++)
	{
		if(!count[j]&&a[i][j]==1)
			search(j);
	}
}
void matrix(n)
{
	do{
			printf("enter the source:");
			scanf("%d",&s);
			printf("enter the destination:");
			scanf("%d",&d);
			a[s-1][d-1]=1;
			a[d-1][s-1]=1;
	}while(!(s==-1 && d==-1));
	print(s-1,d-1);
}
void main()
{
	printf("enter the number of vertices:");
	scanf("%d",&n);
	matrix(n);
	for(i=0;i<n;i++)
	{
		count[i]=0;
	}
	search(0);
}

