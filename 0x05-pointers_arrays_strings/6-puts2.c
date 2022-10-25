#include "main.h"
#include <string.h>

/**
 * puts2 - prints every other character of a string, starting
 * with first character.
 *
 * @str: string to be printed.
 */
void puts2(char *str)
{
	int len, i;

	len = strlen(str);

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
