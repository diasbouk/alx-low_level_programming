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
while (s[i + 1] != '\0' && *s != ' ')
{
while (accept[j + 1] != '\0')
{
j++;
if (s[i + 1] == accept[j + 1])
return (&s[i + 1]);
break;
}
i++;
}
return ('\0');
}
