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
	char *c;

	c = malloc(b);
	if (c == NULL)
		exit(98);
	return (c);
}
