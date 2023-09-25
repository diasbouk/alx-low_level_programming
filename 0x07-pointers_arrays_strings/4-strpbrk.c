#include "main.h"

/**
 * _strpbrk - check the code
 * @s: string
 * @accept: second string to compare with
 * Return: Always 0.
 */
char *_strpbrk(char *s, char *accept)
{
unsigned int i, j;
i = 0;
j = 0;
while (s[i + 1])
{
i++;
while (accept[j + 1])
{
j++;
if (s[i + 1] == accept[j + 1])
{
break;
}
}
if (accept[j + 1] != '\0')
{
return (&s[i + 1]);
}
}
return (0);
}
