#include<stdio.h>
#include<math.h>
int main()
{
char operator;
float a,b,c;
float i,j;
float num;
printf("Enter the operator:");
scanf("%c",&operator);
printf("\nEnter the operands:\n");
scanf("%f%f",&a,&b);
switch(operator)
{
case '+':
	c=a+b;
    printf("\n Addition of %f and %f is %f", a,b,c);
	break;
case '-':
	c=a-b;
	printf("\n Subtraction of %f and %f is %f", a,b,c);
	break;
case '*':
	c=a*b;
	printf("\n Multiplication of %f and %f is %f", a,b,c);
	break;
case '/':
	c=a/b;
	printf("\n Division of %f and %f is %f", a,b,c);
	break;
case 's':
    j=0.0001;
    printf("ENTER ANY NUMBER : ");
    scanf("%f",&num);
    for(i=0;i<num;i=i+j)
    {
	  if((i*i)>num)
  	  {
   	 	i=i-j;
   		break;
  	  }
    }
    printf("%.2f",i);
default:
	printf("Invalid");
}
return 0;
}