#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string in reverse.
 *
 * @s: string to be printed.
 */
void print_rev(char *s)
{
	strrev(*s);
	{
		_putchar(*s);
	}
	_putchar('\n');
}
