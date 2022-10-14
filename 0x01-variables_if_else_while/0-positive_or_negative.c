#include <stdlib.h>
#include <time.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	scanf("%d", &n);
	if (n == 0)
	printf("zero"\);
	else if (n < 0)
	printf("negative"\);
	ele if (n > 0)
	printf("positive"\);
	return (0);
}
