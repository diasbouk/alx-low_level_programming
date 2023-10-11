#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void free_dog(dog_t *d)
{
	if (d->owner != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
	if (d->name != NULL)
	{
		free(d->name);
		free(d);
	}
	if (d != NULL)
		free(d);
}
