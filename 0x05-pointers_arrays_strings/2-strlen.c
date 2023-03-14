#include "main.h"

/**
  * _strlen - Returns the length of a string
  * @s: String to count
  *
  * Return: String length
  */
int _strlen(char *s)
{
	int stg = 0;

	while (*s != '\0')
	{
		*s++;
		stg++;
	}
	return (stg);
}
