#include "main.h"

/**
 * *_memcpy - copies a memory area.
 *
 * @src: memory area to be copied from.
 * @dest: memory area to be coppied to.
 * @n: number of bytes.
 *
 * Return: the pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
