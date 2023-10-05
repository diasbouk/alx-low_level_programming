#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * strtow - check code
 *@str: str
 *@av: av
 * Return: a pointer to a new string
 */
char **strtow(char *str)
{
    int i = 0;
char *ptr = malloc(sizeof(*str) * sizeof(char));
while (*str)
{
if (*str != ' ')
{
*ptr[i] = str[i];
i++;
}
}
if (str == NULL)
{
return (NULL);
}
return(ptr);
free(ptr);
}
