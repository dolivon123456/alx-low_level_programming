#include "main.h"

/**
 * _strncat - concatenate two strings
 *
 * @src: source
 * @dest: destination
 * @n: int
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n);
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++
	}

	for (j = 0; src[j] != '\0'; j++)
	{
		if (j < n)
		{
			dest[j + i] = src[j];
		}
		else
		{
			dest[j + i] = '\0';
		}
		return (dest);
	}
}
