#include<stdio.h>
#define raj(var) #var
int main()
{
	int integer;
	printf("\n Enter the value ");
	scanf("%d",&integer);
	printf("\n The value of %s is %d\n\n", raj(integer),integer);
	return 0;
}