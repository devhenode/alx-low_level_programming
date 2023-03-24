#include "main.h"

/**
 * _strncat - concatenate two strings
 * @dest: char pointer string
 * @src: char pointer string
 * @n: number of elements to concatenate
 * Return: pointer to resulting `dest`
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		i++;

	for (c = 0; src[c] != '\0' && n > 0; j++, n--, i++)
	{
		dest[i] = src[c];
	}
	return (dest);
}	
