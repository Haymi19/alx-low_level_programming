#include "main.h"

/**
 * main - print alphabet in lowercase
 *
 * Return: Always 0 (Success)
 *
 * Betty: Documentation style
 */
void print_alphabet(void);

int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{

		_putchar(i);

	}
	_putchar('\n');

	return (0);
}
