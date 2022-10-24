#include "main.h"
#include <stdio.h>

/**
 * swap_int - Swaping the value of integer one and two.
 *
 * Return: Always 0 (Succes)
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;

	*b = temp;
}
