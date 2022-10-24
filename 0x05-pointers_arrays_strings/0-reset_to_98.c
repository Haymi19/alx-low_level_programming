#include "main.h"

/**
 * reset_to_98 - Update the value of n.
 *
 * @p: an address of the parameter n.
 *
 * Return: Value of n.
 */
void reset_to_98(int *n)
{
	int *p;

	n = 402;

	p = &n;

	_putchar('n');

	*p = 98;

	_putchar('n');

	_putchar('\n');
}
