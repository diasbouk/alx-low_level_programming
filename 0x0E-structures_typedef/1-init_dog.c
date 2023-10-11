#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - func name
 * @d: pointer to dog sturcture
 * @name: argument for name
 * @age: argument for age
 * @owner: argument for owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
