#include<stdio.h>
#include"stack.h"
#include<string.h>
void main()
{
	int i,flag;
	char string[20],ch,res;
	printf("Enter the string:");
	scanf("%s",string);
	ch=strlen(string);
	for(i=0;i<ch;i++)
	{
		push(string[i]);
	}
	for(i=0;i<ch;i++)
	{
		res=pop();
		if(string[i]!=res)
		{
			flag=1;
			break;
		}
	}
	if(flag!=1)
		printf("Palindrome");
	else
		printf("Not a palindrome");
}
