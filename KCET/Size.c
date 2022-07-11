#include<stdio.h>
int main()
{
	char a='A';
	int b=120;
	float c=123.6;
	double d=1254.67;
	char str[]="hello";
	printf("\nThe size of char is:%d",sizeof(a));
	printf("\nThe size of int is:%d",sizeof(b));
	printf("\nThe size of float is:%d",sizeof(c));
	printf("\nThe size of double is:%d",sizeof(d));
	printf("\nThe size of str is:%d",sizeof(str));
	return 0;
}