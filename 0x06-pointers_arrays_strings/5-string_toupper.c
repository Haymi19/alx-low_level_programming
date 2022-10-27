#include "main.h"
#include <string.h>

/**
 * *string_toupper - changes all lower case in to uppercase.
 *
 * @s: the input string.
 *
 * Return: the pointer to dest.
 */
char *string_toupper(char *s)
{
	int counter = 0;

	while (*(s + counter) != '\0')
	{
		if ((*(s + counter) >= 97) && (*(s + counter) <= 122))
			*(s + counter) = *(s + counter) - 32;
		counter++;
	}
	return (s);
}

