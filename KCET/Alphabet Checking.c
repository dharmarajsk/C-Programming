#include<stdio.h>
int main()
{
	char c;
	printf("Enter a charcter:");
	scanf("%c",&c);
	if(c>='a'&&c<='z')//(c>='A'&&c<='Z')
	{
	   printf("%c is an alphabet",c);
	}
	else
	{
	   printf("%c is an not an alphabet",c);
	}
	return 0;
}