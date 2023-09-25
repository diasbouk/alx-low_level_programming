#include "main.h"

/**
 * _strpbrk - check the code
 * @s: string
 * @accept: second string to compare with
 * Return: Always 0.
 */
char *_strpbrk(char *s, char *accept)
{
int j;
j = 0;
while (*s != '\0' && *s != ' ')
{
while (accept[j] != '\0')
{
j++;
if (*s == accept[j])
return (s);
break;
}
s++;
}
return ('\0');
}
