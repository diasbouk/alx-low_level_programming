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
}
newStr = malloc(sizeof(char) * (strlen(s1) + strlen(s2)) + 1);
if (s1 != NULL)
{
strncpy(newStr, s1, strlen(s1));
}
if (s2 != NULL)
{
strcat(newStr, s2);
}
return(newStr);
free(newStr);
}
