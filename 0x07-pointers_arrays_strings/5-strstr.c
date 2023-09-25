#include "main.h"

/**
 * _strstr - check the code
 * @haystack: String that contains substring
 * @needle: Subrstring to be located .
 * Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
{
while (*haystack != '\0')
{
while (*haystack == *needle)
{
return (haystack);
haystack++;
needle++;
}
haystack++;
}
if (*needle == '\0')
return (haystack);
return (NULL);
}
