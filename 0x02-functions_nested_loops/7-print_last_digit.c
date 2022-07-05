#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - print the last digit of a number
 * @i: integer paramater
 *
 * Return: Always 0 success
 */

int print_last_digit(int n)
{
	n = n >= 0 ? n : n * -1;
	int last = n % 10;
	_putchar('0' + last);

	return (last);
}
