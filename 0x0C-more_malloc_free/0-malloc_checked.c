#include "main.h"

/**
 * malloc_checked - check the code
 * @b: memory to allocate
 * Return: Always 0.
 */
void *malloc_checked(unsigned int b)
{
unsigned int *ptr = malloc(b);
if (ptr == NULL)
{
fprintf(stderr, "98");
return (NULL);
}
return (ptr);
}
