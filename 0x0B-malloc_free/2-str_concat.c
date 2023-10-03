#include "main.h"

/**
 * str_concat - check the code for ALX School students.
 * @s1: string 1
 * @s2: string 2
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
char *newStr;
if (s1 == NULL && s2 == NULL)
{
return (NULL);
newStr = malloc(1);
strcat(newStr, "\n");
}
if (s1 != NULL && s2 != NULL)
{
newStr = malloc(sizeof(char) * (strlen(s1) + strlen(s2)) + 1);
if (newStr == NULL)
{
return (NULL);
}
strcat(newStr, s1);
strcat(newStr, s2);
}
else if (s1 != NULL)
{
newStr = malloc(sizeof(char) * strlen(s1) + 1);
strcat(newStr, s1);
}
else if (s2 != NULL)
{
newStr = malloc(sizeof(char) * strlen(s2) + 1);
strcat(newStr, s2);
}
return (newStr);
free(newStr);
}
