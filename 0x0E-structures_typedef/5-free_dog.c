#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
		free(d);
}
