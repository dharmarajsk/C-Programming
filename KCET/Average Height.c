#include<stdio.h>
void main()
{
	float height[20];
	int n,i,count=0;
	printf("Enter the number of persons:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    printf("Enter the height:");
		scanf("%f",&height[i]);
		if(height[i]>=150 && height[i]<=165)
			count=count+1;
	}
	printf("No of persons with average height:%d",count);
}