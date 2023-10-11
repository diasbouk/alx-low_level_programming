#ifndef HEADER
#define HEADER
/**
 * struct dog - struct
 * struct dog_t - new type
 * @name: name
 * @age: age
 * @owner: owner
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
