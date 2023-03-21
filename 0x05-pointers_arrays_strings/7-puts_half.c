#include "main.h"

/**
  * puts_half - Prints half of a string
  * @str: The string to print
  *
  * Return: void
  */

void puts_half(char *str)
{
	int i;
	int j = 0;

	while (str[j] != '\0')
		j++;

	if (str[j] % 2 != 0)
	{
		i = (i - 1) / 2;
		i++;
	}
	else
	{
		k = j / 2;
	}

	for (; k < j; k++)
	{
		_putchar(str[k]);
	}
	_putchar('\n');
	
}
