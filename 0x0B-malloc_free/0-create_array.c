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
unsigned int i = 0;
char *ptr = malloc(size);
if (ptr == 0)
{
return (NULL);
}
while (i <= size)
{
ptr[i] = c;
i++;
}
ptr[0] = c;
return (ptr);
free(ptr);
}
