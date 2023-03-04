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

	for (la = 'a'; la <= 'z'; la++)
	{
		if (num < 10)
			_putchar(la);
		_putchar("\n");
	}
}
