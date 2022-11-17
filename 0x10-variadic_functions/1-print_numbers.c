#include "variadic_functions.h"
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line.
 *
 * @separator: string to be printed between the strings.
 * @n: number of integers passed to the function.
 *
 * Return: nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	if (separator != NULL)
	{
		va_list args;

		va_start(args, n);

		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(args, const unsigned int));

			if (i != (n - 1))
				printf("%s", separator);
		}
		va_end(args);
	}
	printf("\n");
}
