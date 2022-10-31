#include "main.h"
#include <string.h>

/**
 * *_strchr - locates character c in the string.
 *
 * @s: the string.
 * @c: character to be located.
 *
 * Return: a pointer to the first occurrence of the character c in the string,
 * or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
	if (*(s + i) == c)
		return (s + i);
	else
		return ('\0');
}
