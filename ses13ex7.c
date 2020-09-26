/* This program gets the number of elements, allocates spaces for the
elements, gets a value for each element, sum the values of the elements,
and print the number of the elements and the sum.*/
#include <stdio.h>
#include <stdlib.h>
main137()
{
	int *a, i, n, sum = 0;
	printf ( "\n%s%s", "An array will be created dynamically. \n\n","Input an array size n followed by integers : " );
	scanf( "%d", &n); /* get the number of elements */
	a = (int *) calloc (n, sizeof(int) ); /* allocate space */
	/* get a value for each element */
	for( i = 0; i < n; i++ )
	{
		printf("Enter %d values : ",n);
		scanf( "%d", a + i );
	}
	/* sum the values */
	for(i = 0; i < n; i++ )
		sum += a[i];
	free(a); /* free the space */
	/* print the number and the sum */
	printf ( "\n%s%7d\n%s%7d\n\n", "Number of elements: ", n, "Sum of the elements: ", sum );
}
