#include <stdio.h>
/**
 * main - print alphabet in lowercase
 *
 * Return: Always 0 (Success)
 *
 * Betty: Documentation style
 */
void print_alphabet(i);

int main(void)
{
	int i;

	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < 26; i++;)
	{
		putchar(alphabet[i]);
	}
	putchar('\n');

	return (0);
}
