#include "main.h"

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
char *_strdup(char *str)
{
char *ptr = malloc(sizeof(str));
int i = 0;
if (str == NULL)
{
return (NULL);
}
while (*str != '\0')
{
ptr[i] = *str;
str++;
i++;
}
return (ptr);

free(ptr);
}
