#include "main.h"

/**
 * print_triangle - prints a triangle with character # printed
 * by size of triangle.
 *
 * @size: Size of triangle.
 *
 * Return: Size of triangle.
 */
void print_triangle(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 1; j < (size - i); j++)
			_putchar(' ');
		for (j--; j < size; j++)
			_putchar(35);
		if (i < (size - 1))
			_putchar('\n');
	}
	_putchar('\n');
}

