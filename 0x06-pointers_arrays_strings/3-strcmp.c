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
	int flag = 0;
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			flag = 1;
		}
		s1++;
	}
	if (*s1 != '\0' || *s2 != '\0')
		return (1);
	{
		if (flag == 0)
			return (0);
		else
			return (1);
	}
}
