#include "main.h"

/**
 * print_diagonal - draws diagonal line
 * @n: number of times
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int line;
	int spaces;

	if (n <= 0)
		_putchar('\n');
	for (line = 0; line < n; line++)
	{
		for (spaces = 0; spaces < line; spaces++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
