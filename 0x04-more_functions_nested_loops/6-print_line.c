#include "main.h"

/**
 * print_line - prints a line of _ n long
 * @n: length of line
 *
 * Return: void
 */

void print_line(int n)
{
	int ln = 0;

	while (ln < n)
	{
		_putchar('_');
		ln++;
	}
	_putchar('\n');
}
