#include<stdio.h>
int main()
{
	char name[10];
	float basicpay,HRA,DA,PF,gross;
	printf("\nEnter the name");
	scanf("%s",&name);
	printf("\nEnter the value of basicpay");
	scanf("%f",&basicpay);
	printf("\nEnter the value of HRA");
	scanf("%f",&HRA);
	printf("\nEnter the value of DA");
	scanf("%f",&DA);
	PF=basicpay*12/100;
	gross=basicpay+DA+HRA+PF;
	printf("%f%f",PF,gross);
	printf("\nName:%s",name);
	printf("\nBASIC:%f",basicpay);
	printf("\nHRA:%f",HRA);
	printf("\nDA:%f",DA);
	printf("\nPF:%f",PF);
	printf("\nGROSS SALARY:%f",gross);
	return 0;
}