#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars & initializes it with a specific char.
 *
 * @c: the character.
 * @size: size of the array.
 *
 * Return: a pointer to the array, or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char array = char c[i];

	char *array;

	array = (char *)malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
	{
		if (size == 0)
			return ('\0');
		else
			_putchar(ptr[i]);
	}
	return (array);
}
