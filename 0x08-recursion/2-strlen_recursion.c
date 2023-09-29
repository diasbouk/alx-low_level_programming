#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
if (*s)
{
   return (1 + _strlen_recursion(s + 1));
}
return (0);
}
