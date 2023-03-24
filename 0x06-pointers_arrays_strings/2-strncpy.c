#include "main.h"

/**
 * _strncpy - a function that copies a string
 *
 * @dest: char pointer variable
 * @src: char pointer variable
 * @n: int type variable
 *
 * Return: a pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}
	
	for (; n > i; i++)
		dest[i] = '\0';

	return (dest);
}
