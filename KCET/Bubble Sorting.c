#include <stdio.h>
int bubble_sort(int*,int);
int main()
{
	int n,*arr,i,j,temp;
	printf("Enter the no of terms: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the elements %d: ",i+1);
		scanf("%d",arr+i);
	}
	bubble_sort(arr,n);
	return 0;
}
int bubble_sort(int *arr,int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<(n-1-i);j++)
		{
			if(*(arr+j)> *(arr+(j+1)))
			{
				temp=*(arr+j);
				*(arr+j)=*(arr+(j+1));
				*(arr+(j+1))=temp;
			}
		}
	}
	printf("THE SORTED ELEMENTS ARE:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",*(arr+i));
	}
}