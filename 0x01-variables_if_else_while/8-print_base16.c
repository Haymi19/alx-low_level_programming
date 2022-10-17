#include <stdio.h>
/**
 * main - print base 16 numbers in hexadecimal
 *
 * Return: Always 0 (Success)
 *
 * Betty: Documentation style
 */
int main(void)
{
	int i;

	for (i = 0; i < 16; i++;)
	{
		putchar("%x", i);
	}
	putchar('\n');

	return (0);
}
