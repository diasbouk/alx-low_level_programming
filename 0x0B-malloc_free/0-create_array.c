#include "main.h"

/**
 * create_array - Function to create array
 * @size: sizeof array
 * @c: Specific Character
 *
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{
char *ptr = malloc(size);
if (ptr == 0)
{
return (NULL);
}
ptr[0] = c;
return (ptr);
free(ptr);
}
