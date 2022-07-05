#include "main.h"
#include <ctype.h>

/**
 * _isalpha - chech if a char is lowerca
 * @c: placeholder for a char
 *
 * Return: Always 1 if char is alpha and 0 otherwis
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
