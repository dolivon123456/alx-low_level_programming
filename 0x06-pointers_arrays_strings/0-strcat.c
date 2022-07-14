#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates two strings
 *
 * @src: first string
 * @dest: second string
 *
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = j = 0;

	while (*(dest + i))
		i++;
	while ((*(dest + i)) = (*(src + j)))
		i++;
		j++;

	return (dest);
}
