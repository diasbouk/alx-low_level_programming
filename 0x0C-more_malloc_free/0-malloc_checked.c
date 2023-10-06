#include "main.h"

/**
 * malloc_checked - check the code
 * @b: memory to allocate
 * Return: Always 0.
 */
void *malloc_checked(unsigned int b)
{
unsigned *ptr = malloc(b);
return (ptr);
}
