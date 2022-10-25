#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string in reverse.
 *
 * @str: string to be printed.
 * @s: string to be printed.
 */
void print_rev(char *s)
{
	int len, i;

	char *str;

	char *start, *end, temp;  

	len = strlen(str);

	start = str;

	end = s;

	for (i = 0; i < len - 1; i++)
	end++;

	for (i = 0; i < len/2; i++)
	{
		temp = *end;

		*end = *start;

		*start = temp;

		start++;

		end--;
	}
}
