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
i = 1;
j = 1;
while (s[i] != '\0' && *s != ' ')
{
while (accept[j] != '\0')
{
j++;
if (s[i] == accept[j])
return (&s[i]);
break;
}
i++;
}
return ('\0');
}
