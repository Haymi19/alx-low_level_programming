#include <stdio.h>
#include <stdlib.h>
/**
 * main - print lowercase letters in reverse
 *
 * Return: Always 0 (Success)
 *
 * Betty: Documentation style
 */
int main(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";

	int i;

	for (i = 26; i >= 0; i--)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}

