#include<stdio.h>
#include<string.h>
typedef struct Student
{
	char stuRoll[250],name[250];
	float avg,mat,c,it,phy,chem;
} STUD;
STUD get()
{
	STUD a;
	printf("Enter the Student Roll No: ");
	scanf("%s",a.stuRoll);
	printf("Enter the Student Name: ");
	scanf("%s",a.name);
	printf("Enter the Maths mark: ");
	scanf("%f",&a.phy);
	printf("Enter the Informational Technology mark: ");
	scanf("%f",&a.it);
	printf("Enter the English mark: ");
	scanf("%f",&a.c);
	printf("Enter the Physics mark: ");
	scanf("%f",&a.mat);
	printf("Enter the C mark: ");
	scanf("%f",&a.chem);
	a.avg=(a.phy+a.it+a.chem+a.mat+a.c)/5;
	return a;
}
void print(STUD a[],int n)
{
	int i;
	printf("\n_________________________________________________________________\n");
	printf("\n\t\tKamaraj college of engineering and technology ");
	printf("\nClass: I IT");
	printf("\n_________________________________________________________________\n");
	printf("\nSl.No\tRoll\tName\t\tMaths\tInTech\tEng\tPhy\tC\tInternal");
	printf("\n_________________________________________________________________\n");
	for(i=0;i<n;i++)
	{
	printf("\n%d.\t%s \t%s\t\t%d\t   %d\t %d\t %d\t %d\t %d ",i+1,a[i].stuRoll,a[i].name,(int)a[i].mat,(int)a[i].phy,(int)a[i].it,(int)a[i].c,(int)a[i].chem,(int)a[i].avg);
	}
}
int main()
{
	STUD a[10];
	int n,i;
	printf("Enter the number of Students");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	a[i]=get();
	}
	print(a,n);
	printf("\n______________________________________________________________\n\n\n");
	return 0;
}