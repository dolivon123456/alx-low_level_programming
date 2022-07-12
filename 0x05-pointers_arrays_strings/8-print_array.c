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

	i = 0;
	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
		printf("%d\n", a[i]);
	}
	printf("%d\n", sizeof(*a));
	printf("%d\n", sizeof(int));
}
