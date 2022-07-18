#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 *
 * @s: string to be scanned
 * @accept: string containing the characters to search for
 *
 * Return: pointer to the byte in s or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				p = &s[i];
				return (p);
			}
			else
			{
				return (NULL);
			}
			j++;
		}
		i++;
	}

	return (0);
}
