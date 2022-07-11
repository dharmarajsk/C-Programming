#include<stdio.h>
int main()
{
 int n,on,r,rs=0;
 printf("Enter the three digit number:");
 scanf("%d",&n);
 on=n;
 while(on!=0)
 {
  r=on %10;
  rs=rs+(r*r*r);
  on=on/10;
 }
 if(rs==n)
   {
    printf("%d is an armstrong number",n);
   }
 else
   {
    printf("%d is not an armstrong number",n);
   }
 return 0;
}