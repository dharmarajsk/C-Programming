#include<stdio.h>
#include<stdlib.h>
#define max 10
void enQueue(int);
void deQueue();
void display();
int queue[max], f = -1, r = -1;
void main()
{
   int value, ch;
   while(1){
      printf("\n\n================Menu===============\n");
      printf("1. Insertion\n2. Deletion\n3. Display\n4. Exit");
      printf("\nEnter your choice: ");
      scanf("%d",&ch);
      switch(ch)
		{
		case 1: 
		 printf("Enter the value to insert: ");
		 scanf("%d",&value);
		 enQueue(value);
		 break;
		case 2:
   		 deQueue();
		 break;
		case 3: 
		 display();
		 break;
		case 4: 
		 exit(1);
		default: 
		 printf("\nInvalid Input:... Please try again...");
      }
   }
}
void enQueue(int value)
{
   if(r == max-1)
      printf("\nQueue is overflowing...");
   else
   {
      if(f == -1)
	  f = 0;
      r++;
      queue[r] = value;
      printf("\nInsertion Operation Succesfull...");
   }
}
void deQueue()
{
   if(f == r)
      printf("\nQueue is Underflowing....");
   else
   {
      printf("\nDeleted : %d", queue[f]);
      f++;
      if(f == r)
	  f = r = -1;
   }
}
void display()
{
   if(r == -1)
      printf("\nQueue is Underflowing......");
   else
   {
      int i;
      printf("\nQueue elements are:\n");
      for(i=f; i<=r; i++)
	  printf("%d\t",queue[i]);
   }
}
