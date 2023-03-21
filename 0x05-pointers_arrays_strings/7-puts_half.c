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
	int ave = j / 2;
	char last = ave - 1;
	int res = 0;

	while (str[j] != '\0')
		j++;

	if (str[j] % 2 != 0)
	{
		last++;
	}
	else
	{
		last / 2;
	}
	for (; last < j; last++)
	{
		_putchar(str[last]);}

	_putchar('\n');
}
