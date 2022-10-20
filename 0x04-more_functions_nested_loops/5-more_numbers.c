#include "main.h"

/**
 * more_numbers - Prints the alphabet 10 times.
 *
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 48; j <= 62; j++)
		{
			_putchar(j);
		}
	_putchar('\n');
	}
}
