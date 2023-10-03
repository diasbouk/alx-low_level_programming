#include "main.h"

/**
 * _strdup - check the code for ALX School students.
 * @str: string to duplicate
 * Return: Always 0.
 */
char *_strdup(char *str)
{
char *newStr = malloc(sizeof(char) * strlen(str));
int i = 0;
if (str == NULL || !str)
{
return (NULL);
}
if (newStr == NULL)
{
return (NULL);
}
while (*str != '\0')
{
newStr[i] = *str;
str++;
i++;
}
return (newStr);
free(newStr);
}
