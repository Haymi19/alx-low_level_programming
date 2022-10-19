#include "main.h"

/**
 * print_last_digit - Prints the last digit
 * of a number.
 *
 * @i: input number as an integer.
 *
 * Return: last digit.
 */
int print_last_digit(int i)
{
	int j;

	j = i % 10;
	if (j < 0)
	{
		_putchar(-j + 48);
		return (-j);
	}
	else
	{
		_putchar(j + 48);
		return (j);
	}
}
