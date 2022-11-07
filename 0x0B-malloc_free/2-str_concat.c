#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings.
 *
 * @s1: string one.
 * @s2: string two.
 *
 * Return: pointer to a newly allocated space in memory.
 */
char *str_concat(char *s1, char *s2)
{
	size_t str1, str2, str3, i = 0;

	char *a;

	str1 = strlen(s1);

	str2 = strlen(s2);

	str3 = str1 + str2 + 1;

	a = malloc(str3);

	while (*s1 != '\0')
	{
		a[i] = *s1;
		s1++;
		i++;
	}
	while (*s2 != '\0')
	{
		a[i] = *s2;
		s2++;
		i++;
	}

	a[i] = '\0';

	return (a);
}
