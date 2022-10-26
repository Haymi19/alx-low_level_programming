#include "main.h"
#include <string.h>

/**
 * _strcmp - compares two strings.
 *
 * @s1: string one.
 * @s2: string two.
 *
 * Return: result.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, result = 0;

	while (result == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
			break;
		result = *(s1 + i) - *(s2 + i);
		i++;
	}

	return (result);
}
