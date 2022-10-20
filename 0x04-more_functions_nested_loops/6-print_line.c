#include "main.h"

/**
 * print_line - Prints a line using character _
 * n times.
 *
 * @n: number of times character _ should be printed.
 *
 * Return: Prints a line.
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n;  i++)
	{
		_putchar(95);

	}
	 _putchar('\n');
}

