#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int num;
	int la;

	if (num < 10)
	{
		for (la = 'a'; la <= 'z'; la++)
			_putchar(la);
			num++;

		_putchar("\n");
	}
}
