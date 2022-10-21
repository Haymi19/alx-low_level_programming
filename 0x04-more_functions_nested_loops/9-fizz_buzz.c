#include "main.h"
#include <stdio.h>
/**
 * main - print fizz if the number is a multiple of 3, print buzz
 * if number is multiple of 5 and fizzbuzz if it is multiple of both.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; ++i)
	{
		if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else if (i % 15 == 0)
			printf("FizzBuzz");
		else
			printf("%d", i);

	putchar(' ');
	}

	return (0);
}
