#include "main.h"

/**
 * print_square - draws a square
 * @size: length and width of square
 *
 * Return: void
 */

void print_square(int size)
{
	int height;
	int width;

	if (size <= 0)
		_putchar('\n');
	for (height = 0; height < size; height++)
	{
		for (width = 0; width < size; width++)
			_putchar('#');
		_putchar('\n');
	}
}
