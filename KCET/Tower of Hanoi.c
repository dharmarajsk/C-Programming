#include<stdio.h>
void towers(int,char,char,char);
int main()
{
	int num;
	printf("Enter the number of disks:");
	scanf("%d",&num);
	printf("Moving of disks:");
	towers(num,'A','B','C');
}
void towers(int num,char fr,char tr,char ar)
{
	if(num==1)
	{
		printf("Move the disk 1 from rod %c  to rod %c \n",fr,tr);
		return;
	}
	towers(num-1,fr,ar,tr);
	printf("Move the disk %d from rod %c to  rod %c",num,fr,tr);
	towers(num-1,ar,tr,fr);
	return;
}