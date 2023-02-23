#include <stdio.h>

/**
 * main - prints alpha in lower case
 * Return: Always 0
 */
int main(void)
{
	char low_case;

	for (low_case = 'a'; low_case <= 'z'; low_case++)
	{
		putchar(low_case);
	}
	putchar('\n');
	return (0);
}
