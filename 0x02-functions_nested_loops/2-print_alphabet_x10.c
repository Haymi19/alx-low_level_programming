#include "main.h"

/**
 * print_alphabet - Prints the alphabet 10 times.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i;
	int j;
	for (j = 0; j < 10; j++)
	{
		for (i = 0;i <= 122; i++)
		{
		_putchar(i);
		}
	}
	_putchar('\n');
}
