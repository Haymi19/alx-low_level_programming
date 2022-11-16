#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 *
 * @size: size of the array.
 * @cmp: pointer to the function.
 * @array: pointer to the array.
 *
 * Return: if no match is present return -1
 * or else return cmp.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
