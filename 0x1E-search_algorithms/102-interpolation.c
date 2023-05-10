#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers.
 *
 * @array: pointer to first element of array to search in.
 * @size: number of elements in array.
 * @value: value to search for.
 *
 * Return: first index where value is located.
 * If value is not present in array or if array is NULL, return -1.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t l = 0;
	size_t h = size - 1;
	size_t pos;

	if (array == NULL)
		return (-1);

	while ((array[h] != array[l]) &&
	       (value >= array[l]) && (value <= array[h]))
	{
		pos = l + (((double)(h - l) / (array[h] - array[l]))
			    * (value - array[l]));
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] < value)
			l = pos + 1;
		else if (value < array[pos])
			h = pos - 1;
		else
			return (pos);
	}
	if (value == array[l])
	{
		printf("Value checked array[%lu] = [%d]\n", l, array[l]);
		return (l);
	}
	pos = l + (((double)(h - l) / (array[h] - array[l]))
		     * (value - array[l]));
	printf("Value checked array[%lu] is out of range\n", pos);
	return (-1);
}
