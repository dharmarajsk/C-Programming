#include<stdio.h>
#include<ctype.h>
#include"stack.h"
void main()
{
	int a,b;
	char string[20];
	char ch;
	printf("Enter the postfix expression:");
	scanf("%s",string);
	ch=string[0];
	int i=1;
	while(ch!='\0')
	{
		if(isdigit(ch))
			push(ch-'0');
		else
		{
			b=pop();
			a=pop();
			if(ch=='+')
				push(a+b);
			else if(ch=='-')
				push(a-b);
			else if(ch=='-')
				push(a-b);
			else if(ch=='*')
				push(a*b);
			else if(ch=='/')
				push(a/b);
			else 
				push(a%b);
		}		
		ch=string[i++];
	}
	printf("The value is %d",arr[top]);
}
