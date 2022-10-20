#include "main.h"

/**
 * print_most_numbers - Prints the numbers 0 to 9 exccept 2 and 4.
 *
 * Return: Always 0 (Success)
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if ((i == 2 && i == 4))
		{
			continue;
		}
		else
		_putchar(i);
	}
	_putchar('\n');
}
