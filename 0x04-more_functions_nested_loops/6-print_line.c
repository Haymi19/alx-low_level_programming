#include "main.h"

/**
 * print_line - Prints a line and returns
 * 0.
 *
 * @n: number of times character _ should be printed.
 *
 * Return: character _ printed n times.
 */
void print_line(int n)
{
	int i;

	i = 95;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		_putchar(i);
		_putchar('\n');
	}
}

