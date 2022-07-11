#include<stdio.h>
#include<stdlib.h>
int top=-1,*arr,a;
void push()
{
    int n;
    if(top==a-1)
    {
        printf("The stack is overflow");
    }
    else
    {
        top++;
        printf("Enter the element to push:");
        scanf("%d",&n);
        arr[top]=n;
        
    }
}
void pop()
{
    if(top==-1)
    {
        printf("The stack is underflow");
    }
    else
    {
        printf("The  Poped element is %d",arr[top]);
        top--;
    }
}
void display()
{
    int i;
    if(top==-1)
    {
        printf("The stack is empty");
    }
    else
    {
        for(i=0;i<=top;i++)
        {
            printf("%d",arr[i]);
            
        }
    }
}
void search()
{
    int i,flag,c;
    scanf("%d",&c);
    for(i=0;i<=top;i++)
    {
        if(c==arr[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("Found");
    }
    else
    {
        printf("Not found");
    }
}
int main ()
{
    int ch;
    printf("Enter the size of array:");
    scanf("%d",&a);
    arr=(int *)malloc(sizeof(int)*a);
    do
    {
    printf("\n1.Push\n2.Pop\n3.Display\n4.Search\n");
    printf("Enter your choice:");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        push();
        break;
    case 2:
        pop();
        break;
    case 3:
        display();
        break;
    case 4:
        search();
        break;
    default:
        printf("Invalid");
        break;
    }
    }while(ch<=4);
return 0;
}