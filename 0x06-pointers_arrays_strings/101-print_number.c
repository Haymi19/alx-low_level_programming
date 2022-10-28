#include "main.h"
#include <stdio.h>

/**
 * print_number - function that prints an integer using
 * _putchar only.
 *
 * @n: integer to be printed.
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n == 0)
		_putchar('0');

	if (n / 10)
		print_number(n / 10);

	_putchar(n % 10 + '0');
}
