#include "main.h"
#include <string.h>

/**
 * _puts - Prints a string followed by a new line.
 *
 * Return: Always 0.
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}	
	 _putchar('\n');
}	
