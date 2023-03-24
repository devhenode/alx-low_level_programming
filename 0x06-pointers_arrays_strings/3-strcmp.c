#include "main.h"

/**
  * _strcmp - Compares two strings
  * @s1: The first string
  * @s2: The second string
  *
  * Return: int value
  */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s[2] != '\0'; i++)
	{
		if (s1[i] == s2[i])
		{
			return (0);
		}
		else if (s1[i] < s2[i])
		{
			return (-1);
		}
		else if (s1[i] > s2[i])
		{
			return (+1);
		}
		else
			return (NULL);
	}

	return (0);
}
