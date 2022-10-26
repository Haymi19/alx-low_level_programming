#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses array of an integer.
 *
 * @a: array to be reversed.
 */
void reverse_array(int *a, int n)
{
	int a[n];

	int temp;

	for (int i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[ n - i - 1];
		a[ n - i - 1] = temp;
	}
	for (int i = 0; i < n; i++)
	{
		_putchar(a[i]);
	}
}
