#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters.
 *
 * @n: constant integer.
 *
 * Return: sum all its parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;

	unsigned int i, s;

	va_start(ap, n);

	if (n == 0)
		return (0);

	s = 0;

	for (i = 0; i < n; i++)
		s += va_arg(ap, const unsigned int);

	va_end(ap);

	return (s);
}
