#include<stdio.h>
#include<string.h>
#include"myprofile.h"
int y;
struct node
{
	int data;
	struct node*next;
};
struct node*header=NULL;
void insert_at_first(int x)
{
	struct node*temp=(struct node*)malloc(sizeof(struct node));
	temp->data=x;
	temp->next=header;
	header=temp;
}
int delete_at_first()
{
	if(header==NULL)
	{
		return(-9999);
	}
	else
	{
		y=header->data;
		header=header->next;
		return y;
	}
}
void push(char x)
{ insert_at_first(x);	
}
char pop()
{
delete_at_first();

}
int main()
{
	documentation(__FILE__);
	char x[10];
	int i;
	printf("Enter the expression:");
	scanf("%s",x);
	for(i=0;i<=strlen(x);i++)
	{
		switch(x[i])
		{
			case '(':
				push('(');
			case ')':
				pop();
			case '{':
				push('{');
			case '}':
				pop();
			case '[':
				push('[');
			case ']':
				pop();
		}
	}
	if(x[i]=='\0')
	{
		printf("Balanced paranthesis\n");
	}
	else 
	{
		printf("Not a balanced paranthesis\n");
	}
	return 0;
}
