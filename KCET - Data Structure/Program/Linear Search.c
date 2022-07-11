#include <stdio.h>
void main()
{
	int array[10];
	int i, n,s,found = 0;
	printf("Enter the size of the array:\n");
	scanf("%d", &n);
	printf("Enter the elements:\n");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &array[i]);
    	}	
	printf("Array elements are:\n");
        for (i = 0; i < n; i++)
        {
		printf("%d\n", array[i]);
        }
        printf("Enter the element to be searched \n");
        scanf("%d", &s);
        for (i = 0; i < n ; i++)
        {
		if (s == array[i] )
		{
			found = 1;
		        break;
		}
         }
         if (found == 1)
	  	printf("Element is present in the array\n");

	 else
		printf("Element is not present in the array\n");

}

