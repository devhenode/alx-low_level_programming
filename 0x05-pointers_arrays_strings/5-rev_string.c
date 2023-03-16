#include "main.h"
#include <string.h>
/**
 * rev_string - reverse string
 * @s: string
 * Return: void
 */

void rev_string(char *s)
{
	int i,j;
	char c;
	for (i = 0; j = i - 1; i < j; i++; j--)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}
