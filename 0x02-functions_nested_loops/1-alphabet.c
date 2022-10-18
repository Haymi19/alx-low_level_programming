#include "main.h"

#include <stdio.h>
/**
 * main - print alphabet in lowercase
 *
 * Return: Always 0 (Success)
 *
 * Betty: Documentation style
 */
int main(void)
{
	int i;

	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < 26; i++)
	{

		_putchar(alphabet[i]);

	}
	_putchar('\n');

	return (0);
}
