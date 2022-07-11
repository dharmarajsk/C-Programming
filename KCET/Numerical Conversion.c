#include<stdio.h>
int main()
{
	int x;
	printf("Decimal value is:");
	scanf("%d",&x);
	printf("\n Octal value is:%o",x);
	printf("\n Hexadecimal value is(Alphabet in small letters):%x",x);
	printf("\n Hexadecimal value is(Alphabet in capital letters):%X",x);
	return 0;
}