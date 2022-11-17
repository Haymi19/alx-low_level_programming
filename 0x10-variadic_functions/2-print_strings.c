#include "variadic_functions.h"
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line.
 *
 * @separator: string to be printed between the strings.
 * @n: number of strings passed to the function.
 *
 * Return: nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	if (separator != NULL)
	{
		va_list args;

		va_start(args, n);

		for (i = 0; i < n; i++)
		{
			const char *separator = va_arg(args, const char *);

			printf("%s", separator);

			if (i != (n - 1))
			{
				printf(",");
				printf(" ");
			}

		}
		va_end(args);
	}
	printf("\n");
}

