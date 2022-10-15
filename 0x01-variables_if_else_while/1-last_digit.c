#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Determines either greater than 5, is less than 6 or i 0
 *
 * Return: Always 0 (Success)
 *
 * Betty: style Documentation
 */
int main(void)
{
	int n, l;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	l = n % 10;

	if (l > 5)
	{
		printf("Last digit of n is %d and is greater than 5\n", n, l);
	}
	else if
		(l == 0)
	{
		printf("Last digit of n is %d and is 0\n", n, l);
	}
	else
		(l < 6)
	{
		printf("Last digit of n is %d and is less than 6 and not 0\n", n, l);
	}
	return (0);
}

