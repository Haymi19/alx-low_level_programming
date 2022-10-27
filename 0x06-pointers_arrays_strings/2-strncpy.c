#include "main.h"
#include <string.h>

/**
 * *_strncpy - function that copies a string.
 *
 * @dest: string one.
 * @src: string two.
 *
 * Return: pointer to dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int count = 0, i;

	for (i = 0; i < n; i++)
	{
		for (i = 0; *(dest + count) != '\0'; ++i)
		{
		*(dest + count) = *(src + count);
		}
		*(src + count) = '\0';
	}

	return (dest);
}
