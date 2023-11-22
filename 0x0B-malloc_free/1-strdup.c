#include "main.h"

/**
 * _strdup - check the code for ALX School students.
 * @str: string to duplicate
 * Return: Always 0.
 */
char *_strdup(char *str)
{
char *newStr;
int i = 0;
if (str == NULL)
{
return (NULL);
}
newStr = malloc(sizeof(char) * strlen(str) + 1);
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
}
