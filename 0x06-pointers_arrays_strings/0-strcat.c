#include "main.h"
#include <string.h>

/**
 * *_strcat - concatenates string dest and src.
 *
 * @src: string one.
 * @dest : string two.
 *
 * Return: the pointer to dest.
 */
char *_strcat(char *dest, char *src)
{
	while (*src)
	src++;

	while (*dest)
	{
		*src = *dest;
		dest++;
		src++;
	}
	*src = '\0';

	return (dest);
}
