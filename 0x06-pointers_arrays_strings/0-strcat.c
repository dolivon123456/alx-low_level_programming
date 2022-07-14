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
	strcat( dest, src);
	return (dest);
}
