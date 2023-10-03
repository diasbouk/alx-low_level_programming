#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s;

    s = str_concat("Betty ", "Holberton");
    if (s == NULL)
    {
        printf("failed\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);
    return (0);
}







/*

if (s1 == NULL || s2 == NULL)
{
return (NULL);
}
else if (s2 == NULL && s2 != NULL)
{
return (s2);
}
else if (s1 == NULL && s1 != NULL)
{
return (s1);
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

*/