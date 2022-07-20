#include<stdio.h>
#include"hash.h"
#include"myprofile.h"
int main()
{
	documentation(__FILE__);
	int n,i,num,choice;
	do
	{
		printf("1.Insert\n");
		printf("2.Delete\n");
		printf("3.Display\n");
		printf("4.Search\n");
		printf("Enter the choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1 :
				printf("Enter the number of elements to be inserted:");
				scanf("%d",&n);
				for(i=0;i<n;i++)
				{
					printf("Enter the element:");
					scanf("%d",&num);
					insert(num);
				}
				break;
			case 2:
				printf("\nEnter the element to be deleted:");
				scanf("%d",&num);
				delete(num);
				display();
				break;
			case 3:
				display();
				break;
			case 4:
				printf("\nEnter the element to be searched:");
				scanf("%d",&num);
				search(num);
				break;
													
		}
	}while(choice<=4);
}
