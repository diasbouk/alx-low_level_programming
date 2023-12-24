#include "main.h"

/**
 * wildcmp - compares to strs
 * @s1: string 1
 * @s2: string 2
 * Return: 0  or 1
*/
int wildcmp(char *s1, char *s2)
{
if (strcmp(s1, s2) == 0)
{
return (1);
}
else
return (0);
}
