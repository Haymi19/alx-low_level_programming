#include "variadic_functions.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_all - prints anything.
 *
 * @format:  list of types of arguments passed to the function.
 *
 * Return: nothing.
 */
void print_all(const char * const format, ...)
{
	va_list args;

	if (format == NULL)
		printf("(nil)");

	va_start (args, format);

	while (format)
	{
		printf("%s, %d, %f, %c", va_arg(args, const char * const));
	}
	va_end(args);
}

