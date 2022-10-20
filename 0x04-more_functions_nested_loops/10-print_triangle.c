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

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= i; j++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

