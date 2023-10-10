#include "dog.h"

/**
 * init_dog - check the code
 * @d:dog
 * @name:name
 * @age:age
 * @owner:owner
 * Return: Always 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
