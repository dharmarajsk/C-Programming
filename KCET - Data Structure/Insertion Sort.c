#include<stdio.h>
int main() 
{
	int i, j, n, temp, arr[20];
	printf("Enter the size of the array:\n ");
	scanf("%d", &n);                 //*input from user*//
	printf("Enter the elements:\n");
	for (i = 0; i < n; i++) 
	{
		scanf("%d", &arr[i]);
	}
	/*insertion sorting starts*/
	for (i = 1; i < n; i++)
	{
		temp = arr[i];
		j = i - 1;
		while ((temp < arr[j]) && (j >= 0)) 
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = temp;
	}
	printf("Insertion Sort: ");
	for (i = 0; i < n; i++) 
	{
		printf("%d ", arr[i]);  /*display sorted elements*/
	}
	return 0;
}

