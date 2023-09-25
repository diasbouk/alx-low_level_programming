#include "main.h"

/**
 * _strspn - check the code
 * @s: s
 * @accept: acc
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
int i, j, count;
i = 0;
j = 0;
count = 0;
while (s[i] != '\0')
{
while (accept[j] != '\0')
{
if (accept[j] == s[i])
{
count++;
break;
}
j++;
}
i++;
}
return (count);
}
