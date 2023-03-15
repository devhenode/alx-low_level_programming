#include "main.h"
#include <string.h>
/**
  * print_rev - Prints a string in reverse
  * @s: The string to print
  *
  * Return: void
  */

void print_rev(char *s)
{
	for (int i = strlen(s) - 1; i >= 0; i--)
	{
		_putchar("%c", s[i]);
	}
	_putchar("\n");
	return (0);
}
