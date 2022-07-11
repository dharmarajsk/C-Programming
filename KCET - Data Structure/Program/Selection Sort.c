#include <stdio.h>
int main()
{
	int array[100], n, i, j, pos, swap;
	printf("Enter the size of the array:\n");
	scanf("%d", &n);
	printf("Enter the elements:\n");
	for ( i= 0 ; i< n ; i++ )
	{
		scanf("%d", &array[i]);  /*input from user*/
	}
	/*selection sorts starts*/
	for ( i= 0 ; i< ( n - 1 ) ; i++ )
	{
		pos = i;
		for ( j = i+ 1 ; j< n ; j++ )
		{
			if ( array[pos] > array[j] )
			pos= j;
		}
		if ( pos != i)
		{
			swap = array[i];
			array[i] = array[pos];
			array[pos] = swap;
		}
	}
	printf("Selection sort: ");
	for ( i= 0 ; i< n ; i++ )
	{
		printf("%d ", array[i]);  /*display sorted elements*/
	}
	return 0;
}

