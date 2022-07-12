#include "main.h"
#include <stdio.h>

/**
 * print_array- print array
 *@a: array
 *@n: array size
 *
 */

void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n - 1; i++)
		{
			printf("%d, ", a[i]);
		}
		printf("%d\n", a[i]);
	}
	printf("%d\n", sizeof(*a));
	printf("%d\n", sizeof(int));
}        
