#include "main.h"
#include <string.h>

/**
 * _strcmp - compares two strings.
 *
 * @s1: string one.
 * @s2: string two.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 != '\0' || *s2 != '\0')
			break;
		s1++;
		s2++;
	}
}
