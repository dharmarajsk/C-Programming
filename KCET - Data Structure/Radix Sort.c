#include<stdio.h>
#include<stdlib.h>
#include"myprofile.h"
 
struct  node
{
    int data ;
    struct node *next;
}*start=NULL;
 
void radix_sorting();
int larger_dig();
int digit(int num, int k);
 
main()
{
    documentation(__FILE__);
    struct node *temp,*q;
    int cou,n,num_item;
   printf("Enter the Number of Elements to be Inserted into the List : ");
    scanf("%d", &n);
   for(cou=0;cou<n;cou++)
    {
        printf("Enter element %d : ",cou+1);
        scanf("%d",&num_item);
        temp= malloc(sizeof(struct node));
        temp->data=num_item;
        temp->next=NULL;
        if(start==NULL) 
            start=temp;
        else
        {
            q=start;
            while(q->next!=NULL)
                q=q->next;
            q->next=temp;
        }
    }
 
    radix_sorting();
    printf("Sorted List is :\n");
    
    q=start;
    while( q !=NULL)
    {
        printf("%d ", q->data);
        q = q->next;
    }
    printf("\n");
 
}
 
void radix_sorting()
{
    int cou,k,dig,least_sig,most_sig;
    struct node *p, *rear[10], *front[10];
 
    least_sig=1;
    most_sig=larger_dig(start);
 
    for(k=least_sig; k<=most_sig; k++) 
    {
        for(cou=0; cou<=9 ; cou++)
        {
            rear[cou] = NULL;
            front[cou] = NULL ;
        }
        
        for( p=start; p!=NULL; p=p->next )
        {
            dig = digit(p->data, k);
        
            if(front[dig] == NULL)            
                front[dig] = p ;
            else
                rear[dig]->next = p;
            rear[dig] = p;
        }
        
        cou=0;
        while(front[cou] == NULL)
            cou++;
        start = front[cou];    
        while(cou<9) 
        {
            if(rear[cou+1]!=NULL)
                rear[cou]->next=front[cou+1];
            else
                rear[cou+1]=rear[cou];
            cou++;
        }
        rear[9]->next=NULL;
    }
}
 
int larger_dig()
{
    struct node *p=start;
    int large=0,ndigit=0;
 
    while(p != NULL)
    {
        if(p ->data > large)
            large = p->data;
        p = p->next ;
    }
 
    while(large != 0)
    {
        ndigit++;
        large = large/10 ;
    }
    return(ndigit);
}
 
int digit(int num, int k)
{
    int digit, cou ;
    for(cou=1; cou<=k; cou++)
    {
        digit = num % 10 ;
        num = num /10 ;
    }
    return(digit);
}

