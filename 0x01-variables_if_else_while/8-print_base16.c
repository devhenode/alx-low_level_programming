#include <stdio.h>

/**
 * main - prints all numbers in base 16
 * Return: Always 0
 */
int main(void)
{
	int num;
	int la;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (la = 'a'; la <= 'f'; la++)
		putchar(la);

	putchar('\n');
	return (0);
}
