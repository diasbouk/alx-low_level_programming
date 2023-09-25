#include "main.h"

/**
 * _strpbrk - check the code
 * @s: string
 * @accept: second string to compare with
 * Return: Always 0.
 */
char *_strpbrk(char *s, char *accept)
{
int i, j;
char *ret;
i = 0;
j = 0;
while (s[i] != '\0' && s[i] != ' ')
{
while (accept[j] != '\0')
{
j++;
if (s[i] == accept[j])
ret = &s[i];
break;
}
i++;
j = 0;
}
return (ret);
}
