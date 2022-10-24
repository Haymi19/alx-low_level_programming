#include "main.h"
#include <string.h>

/**
 * _strlen - prints length of string.
 *
 * @s: the input string.
 *
 * Return: Length of string.
 */
int _strlen(char *s)
{
	int n = 0;

	while (*(s + n) != '\0')

		n++;

	return (n);
}
