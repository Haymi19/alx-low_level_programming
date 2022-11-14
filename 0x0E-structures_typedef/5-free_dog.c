#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dogs.
 *
 * @d: pointer to the struct.
 *
 */
void free_dog(dog_t *d)
{
	d = malloc(sizeof(dog_t));

	free(d);
}
