#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - allocates memory using malloc.
 *
 * @b: input integer.
 *
 * Return: a pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	unsigned int size = 0, i;

	for (i = 0; i < size; i++)
	{
		ptr = malloc(size * sizeof(b));

		if (ptr == NULL)
		{
			free(ptr);
			return (0);
		}
		return (ptr);
	}
	return (0);
}
