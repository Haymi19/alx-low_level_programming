#include "dog.h"
#include <stdlib.h>

/**
 * print_dog - prints a struct dog.
 *
 * @d: pointer to the struct.
 *
 */
void print_dog(struct dog *d)
{
	int size, i;

	if (d == NULL)
		printf("(nil)");
	if (name == NULL)
		printf("Name: (nil)");

	for (i = 0; i < size; i++)
	{
		printf("%s %s %.2f\n",
		(d+i)->name,
		(d+i)->age,
		(d+i)->owner);
	}
}
