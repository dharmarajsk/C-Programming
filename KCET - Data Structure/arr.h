#include <stdio.h>
int MAXSIZE=10;
int N=0;
 int isEmpty()
{
	if(N==0)
	{
		return 1;
	}
	else
		 return 0;
}
int isFull()
{
	if(N==MAXSIZE)
	{
		return 1;
	}
	else
		 return 0;
}
void insertToEOL(int *Listptr)
{
     if(isFull())
     {
     		printf("List is Full Can’t Insert\n");
     }                                       
     else
     {   
		 int element;
		 printf("Enter the Element to Insert:\n");
		 scanf("%d",&element);
		 int index=N;
		 Listptr[index]=element;
		 N=N+1;
     }
    
}

void deleteFromEOL(int *List)
{
     if(isEmpty())
     {
      		 printf("List is Empty. We cant Delete\n");
     }
     else
     {
		 int element;
		 int index=N-1;
		 element=List[index];
		 printf("Element %d deleted from postion %d\n",element,index+1);
		 N=N-1;
     }
   
}

void insertToFOL(int *List)
{
     
     if(isFull())
     {
      		printf("List is Full... cant insert\n");
     }
     else
     {
		 int index=0,element;
		 printf("Enter the element to insert:\n");
		 scanf("%d",&element);
		 
		 for(index=N;index>0;index--)
		 {
		      List[index]=List[index-1];
		 }
		 List[0]=element;
		 N=N+1;
     }
    
}

void deleteFromFOL(int *List)
{
     if(isEmpty())
     {
        	printf("List is Empty... cant delete\n");
     }
     else
     {
		int index=0,element;
		element=List[0];
		for(index=0;index<N;index++)
		{				
			List[index]=List[index+1];
		}
		N=N-1;
		printf("Element %d from Position 1\n",element);
     }
   
}

void insertToNthPos(int *List)
{
     if(isFull())
     {
       		printf("List is Full... Cant insert\n");
     } 
     else
     {                                                  
	int i,index=0,element,pos;
	printf("Available Postion in List\n");
	if(isEmpty())
	{
		printf("List is Empty... only Available Position is 1\n");
		printf("Enter the Element to insert\n");
		scanf("%d",&element);
		List[0]=element;
		N=N+1;
	}
	else
	{
		do
		{
			printf("Enter the Position(within %d from 1) in which you want to insert Element\n",N);
			scanf("%d",&pos);
		}while(pos>N || pos<0);

		printf("Enter the Element to insert\n");
		scanf("%d",&element);
		for(index=N;index>pos-1;index--)
		{
			List[index]=List[index-1];
		}
		List[pos-1]=element;
		N=N+1;
		}
	} 
}

void deleteFromNthPos(int *List)
{
	int element,pos,index;
	if(isEmpty())
	{
		printf("List is Empty... cant delete\n");
	}
	else
	{
		  do
		    {
			     printf("Enter the Position(within %d from 1) from which you want to Delete Element\n",N);
			     scanf("%d",&pos);
		    }while(pos>N || pos<0);		  element=List[pos-1];
		  if(pos==N)
		  { 		
		   		N=N-1;
		  }
		  else
		  {
			     for(index=pos-1;index<N;index++)
			     {     
			      	List[index]=List[index+1];
			     }
			     N=N-1;
		  }
		  printf("Element %d deleted from postion %d\n",element,pos);
	}
	printf("deleteFromNthPos\n");
}

int searchInList(int element,int *List)
{
	int index,i,found=0;
	if(isEmpty())
	{
		printf("List is empty\n");
	}
	else
	{
		for(i=0;i<N;i++)
		{
			if(List[i]==element)
			{
				found=1;
				break;
			}
		}
		if(found)
		{
			printf("Element %d available in Position %d\n",element,i+1);
			return i;
		}
		else
		{
			printf("Element %d not available in List\n",element);
			return -1;
		}
	}

}

void printList(int List[])
{
	int i=0;
	if(isEmpty())
	{
		printf("List is Empty\n");
	}
	else
	{
		 printf("\nArray Element\n");
		 for(i=0;i<N;i++)          		 {
		 	printf("%d\n",List[i]); 
		 }
	}
    
}

void insertBefore(int x,int e,int *List)
{
	if(isFull())
	{
		printf("List is Full... Cant insert\n");
	} 
	else
	{                                                  
		int i,index=0,pos;
		pos=searchInList(e,List);
		if(pos == -1)
			printf("Element not present in the List\n");
		else
		{
			printf("Available Postion in LIst %d\n",pos);
			for(index=N;index>pos-1;index--)
			{
				List[index]=List[index-1];			}
			List[pos]=x;
			N=N+1;
		}
	}
}


void insertAfter(int x,int e,int *List)
{

	if(isFull())
	{
		printf("List is Full... Cant insert\n");
	} 
	else
	{                                                  
		int i,index=0,pos;
		pos=searchInList(e,List);
		if(pos == -1)
			printf("Element not present in the List\n");
		else
		{
			printf("Available Postion in LIst\n");
			for(index=N;index>pos;index--)
			{
				List[index]=List[index-1];
			}
			List[pos+1]=x;
			N=N+1;
		}
	}
}

void deleteAnElement(int e,int *List)
{
	if(isEmpty())
	{
		printf("List is Empty... cant delete\n");
	}
	else
	{                                                  
		int i,index=0,pos;
		pos=searchInList(e,List);
		if(pos == -1)
			printf("Element not present in the List\n");
		else
		{
			printf("Available Postion in LIst\n");
			for (index = pos; index <  N - 1; index++)
			{
		                List[index] = List[index + 1];
	                }
			N=N-1;
		}
	}
}
