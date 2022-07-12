#include "main.h"
#include <stdio.h>

/**
 * print_array -  prints n elements of an array of integers
 *
 * @a: int type array pointer
 * @n: int type integer
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
	}
	printf('\n')
}
