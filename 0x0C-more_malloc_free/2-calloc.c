#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - allocates memory for an array, using calloc.
 *
 * @nmemb: number of block.
 * @size: size of each block.
 *
 * Return: Always 0 (Success)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *ptr;

	unsigned int i;

	ptr = calloc(nmemb, sizeof(size));

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (nmemb == 0 || size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		return (ptr);

	return (0);
}
