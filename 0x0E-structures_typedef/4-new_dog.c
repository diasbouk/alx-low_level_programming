#include "dog.h"
#include <stddef.h>

/**
 * new-dog - check the code
 * @name: name
 * @age: age
 * @owner: owner
 * Return: Always 0.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int length1, length2, i, j;
	dog_t *dog;
		length1 = 0;
		length2 = 0;
		while (name[length1])
			length1++;
		while (owner[length2])
			length2++;
		dog = malloc(sizeof(dog_t));
		if (dog == NULL)
			free(dog);
		return (NULL);
		dog->name = malloc(sizeof(char) * length1 + 1);
		if (dog->name == NULL)
		{
			free(dog);
			return (NULL);
		}
		dog->owner = malloc(sizeof(char) * length2 + 1);
		if (dog->owner == NULL)
		{
			free(dog);
			free (dog->name);
			return (NULL);
		}
		for (i = 0; i <= length1; i++)
			dog->name[i] = name[i];
		for (j = 0; j<= length2; j++)
		{
			dog->owner[j] = owner[j];
		}
		dog->age = age;
		return (dog);
}
