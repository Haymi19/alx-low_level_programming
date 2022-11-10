#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars & initializes
 * it with a specific char.
 *
 * @c: the character.
 * @size: size of the array.
 *
 * Return: a pointer to the array, or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *array;

	if (size == 0)
		return (NULL);

	array = (char *)malloc(size * sizeof(c));

	if (array == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}