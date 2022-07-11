#include<stdio.h>
#include<stdlib.h>
#include"myprofile.h"
struct Node
{
	int data;
	struct Node*left;
	struct Node*right;
};
struct Node * insert(struct Node*root,int item)
{
	if(root==NULL)
	{
		root=(struct Node*)malloc(sizeof(struct Node));
		root->left=root->right=NULL;
		root->data=item;
	}
	else
	{
		if(item<root->data)
			root->left=insert(root->left,item);
		else
		{
			root->right=insert(root->right,item);
		}
	}
	return root;
}
	
struct Node * search1(struct Node* root,int key)
{
	struct Node *temp;
	if(root==NULL)
	{
		printf("Element is not found");		
		return;
	}
	else if(key==root->data)
	{
		printf("Search Element is found");	
		return;
	}
	else if(key<root->data)
	{
		temp = search1(root->left,key);
		return temp;
	}
	else
	{
		temp =  search1(root->right,key);
		return temp;
	}
}
void main()
{
	documentation(__FILE__);
	int data;
	int choice;
	struct Node * temp = NULL;
	do
	{
	printf("**********\n");	
	printf("1.Insert\n");	
	printf("2.Searching\n");
	printf("**********\n");
	printf("Enter your choice:");
	scanf("%d",&choice);
	switch(choice)
	{
	case 1:
		printf("==Insertion==\n");
		printf("Enter the element:\n"); 
		scanf("%d",&data);
		temp = insert(temp,data);
		break;
	case 2:
		printf("**Search**\n");
		printf("Enter the element to search:\n");
		scanf("%d",&data);
		search1(temp,data);
		break;
	default:
		printf("Invalid choice");
	}
	}while(choice<=2);
}
