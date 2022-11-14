#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog.
 *
 * @d: address of the struct.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: Always 0 (Success)
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;

	d->age = age;

	d->owner = owner;
}
