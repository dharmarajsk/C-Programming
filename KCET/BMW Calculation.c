#include<stdio.h>
int main ()
{
	float person[10][2],bmi[10];
	int i,j,n;
	printf("\nEnter the number of persons:");
	scanf("%d",&n);
	printf("\nEnter the height in cm and weight in kgs:");
	for (i=0;i<n;i++)
		{
		for(j=0;j<=1;j++)
			{
				scanf("%f",&person[i][j]);
			}
			bmi[i]=person[i][1]/(person[i][0]/100*person[i][0]/100);
	        }
		printf("Height\t\tweight\t\tBMI\n");
		for (i=0;i<n;i++)
		{
			for(j=0;j<=1;j++)
				{
					printf("%f\t",person[i][j]);
				}
				printf("%f\n",bmi[i]);
		}
		return 0;
}