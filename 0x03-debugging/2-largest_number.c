#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	if (a > b && a > c)
		printf("%d is the largest number.", a);

	if (b > a && b > c)
		printf("%d is the largest number.", b);

	if (c > a && c > b)
		printf("%d is the largest number.", c);

	return (0);
}
