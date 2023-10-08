#include "main.h"

/**
 * string_nconcat - check the code
 * @
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *ptr;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
if (n <= strlen(s2))
{
ptr = malloc((strlen(s1) + n + 1) * sizeof(s1));
}
else
{
ptr = malloc((strlen(s1) + strlen(s2) + 1) * sizeof(char));
}
if (ptr == NULL)
{
return (NULL);
}
ptr = strncat(s1, s2, n);
return (ptr);
}
