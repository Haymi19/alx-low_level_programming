#include "main.h"
#include <string.h>

/**
 * *_strncat - concatenates string dest and src.
 *
 * @src: string one.
 * @dest : string two.
 * @n: number of bytes.
 *
 * Return: the pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int count = 0, count1 = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}

	while (count1 < n)
	{
		*(dest + count) = *(src + count1);
		if (*(src + count1) == '\0')
			break;

		count++;
		count1++;
	}

	return (dest);
}

