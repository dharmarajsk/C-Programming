#include<stdio.h>
#include"stack.h"
#include<string.h>
void main()
{
	int i;
	char string[20],ch;
	printf("Enter the expression:");
	scanf("%s",string);
	ch=strlen(string);
	for(i=0;i<ch;i++)
	{
		if(string[i]=='(')
			push('(');
		else if(string[i]==')')
			pop();
	}
	if((top==-1)&&(string[i]=='\0'))
		printf("balanced");
	else
		printf("Unbalanced");
}
