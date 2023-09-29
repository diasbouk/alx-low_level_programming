#include "main.h"

/**
 * _puts_recursion - check the code
 * @s : Parameter
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
if (*s != '\0')
{
putchar(*s);
s++;
_puts_recursion(s);
}
else
putchar(10);
}
