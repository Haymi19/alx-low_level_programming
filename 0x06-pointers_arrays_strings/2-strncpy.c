#include "main.h"
#include <string.h>

/**
 * *_strncpy - function that copies a string.
 *
 * @dest: string one.
 * @src: string two.
 * @n: input integer.
 *
 * Return: pointer to dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int count = 0, i;

	for (i = 0; i < n && *(src + count) != '\0'; i++)
	{
		*(dest + count) = *(src + count);
	}
	for ( ; i < n; i++)
	{
		*(dest + count) = '\0';
	}

	return (dest);
}
