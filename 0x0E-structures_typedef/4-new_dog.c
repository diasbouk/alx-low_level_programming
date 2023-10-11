#include "dog.h"
#include <stddef.h>

/**
 * new_dog - check the code
 * @name: name
 * @age: age
 * @owner: owner
 * Return: Always 0.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int len1, len2;
	dog_t *dog;
	int i;

	len1 = 0;
	while (name[len1])
		len1++;

	len2 = 0;
	while (owner[len2])
		len2++;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}

	for (i = 0; i <= len1; i++)
		dog->name[i] = name[i];

	for (i = 0; i <= len2; i++)
		dog->owner[i] = owner[i];

	dog->age = age;

	return (dog);
}
