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
int i = 0;
if (s1 == NULL || s2 == NULL)
{
return (NULL);
}
newStr = malloc(sizeof(char) * (strlen(s1) + strlen(s2)) + 1);
if (newStr == NULL)
{
return (NULL);
}
while (*s1 != '\0')
{
newStr[i] = *s1;
s1++;
i++;
}
while (*s2 != '\0')
{
newStr[i] = *s2;
s2++;
i++;
}
return (newStr);
free(newStr);
}
