#include<stdio.h>
int octal(int);
int binary(int);
int hexa(int);
int main()
{
	int CH;
	int num;
	printf("Enter Decimal Number To Be Converted : ");
	scanf("%d",&num);
	printf("Select Conversion\n");
	printf("1.Decimal To Binary\n");
	printf("2.Decimal To Octal\n");
	printf("3.Decimal To Hexadecimal\n");
	printf("Enter Choice Here :");
	scanf("%d",&CH);
	switch(CH)
	{
		case 1 :
			binary(num);
			break;
		case 2 :
			octal(num);
			break;
		case 3 :
			hexa(num);
			break;
		default :
			printf("\nYOU HAVE ENTERED WRONG CHOICE !!!");
	}
	return 0;
}
int binary(int n)
{
	int  i = 0,j=0;
	int ar[10];
	while(n != 0)
		{
			ar[i]=n%2;
			n=n/2;
			i++;
		}
	printf("\nBinary value is");
	for(j=i-1;j>=0;j--)
		{
			printf("%d",ar[j]);
		}
	printf("\n");
}
int octal(int n)
{
	int  i = 0,j=0;
	int ar[10];
	while(n != 0)
		{
			ar[i]=n%8;
			n=n/8;
			i++;
		}

		printf("\nOctal value is");
		for(j=i-1;j>=0;j--)
		{
			printf("%d",ar[j]);
		}
		printf("\n");
}
int hexa(int n)
{
	int  i = 0,j=0,h=65;
	int ar[10];
	while(n != 0)
		{	ar[i]=n%16;
			n=n/16;
			i++;
		}
		printf("\nHexadecimal value is ");
		for(j=i-1;j>=0;j--)
		{
			if(ar[j]>=10)
			{	h=h+ar[j]-10;
				printf("%c",h);
			}
			else
			{
				printf("%d",ar[j]);
			}
		}
		printf("\n");
}