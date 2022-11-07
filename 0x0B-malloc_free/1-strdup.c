#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: string to be coppied and allocated.
 *
 * Return: pointer to the duplicated string or NULL.
 */
char *_strdup(char *str)
{
	char *p = malloc(strlen(str) + 1);

	if (p != NULL)
		strcpy(p, str);
	return (p);

	free (p);
}
