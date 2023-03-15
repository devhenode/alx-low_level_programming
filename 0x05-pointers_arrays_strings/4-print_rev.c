#include "main.h"
#include <stdio.h>

/**
  * print_rev - Prints a string in reverse
  * @s: The string to print
  *
  * Return: void
  */

void print_rev(char *s)
{
	int length = strlen(*s);
	int average = length / 2;

	for (int i = 0; i < *s; i++)
	{
		char result = *s[i];
		*s[i] = *s[length - i - 1];
		*s[length -i - 1] = result;

		_putchar("%s", result);
	}
	_putchar("\n");

	return (0);
}
