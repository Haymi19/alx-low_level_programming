#include "main.h"
#include <string.h>

/**
 * _puts_recursion - prints a string followed by new line.
 *
 * @s: the string.
 *
 * Return: the pointer to the string.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;
	if (*s)
	{
		_putchar(*s);

		_puts_recursion(++s);
	}
	else
		_putchar('\n');
}
