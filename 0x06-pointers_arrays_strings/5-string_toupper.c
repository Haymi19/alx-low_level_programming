#include "main.h"
#include <string.h>

/**
 * *string_toupper - changes all lower case in to uppercase.
 *
 * @str - the string.
 */
char *string_toupper(char *)
{
	while (*str)
	{
		*str = (*str >= 'a' && *str <= 'z') ? *str - 32 : *str;
		str++;
	}
	_putchar(*str++);
}

