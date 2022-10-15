#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Determines either greater than 5, is less than 6 or i 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, i;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	i = n % 10;

	if (i > 5)
	printf("Last digit of n is %d and i greater than 5\n", n);

	else
		(i == 0)
	printf("Last digit of n is %d and is 0\n", n);

	else if (i < 6 !0)
	printf("Last digit of n is %d and is less than 6 and not 0\n", n);

	return (0);
}

