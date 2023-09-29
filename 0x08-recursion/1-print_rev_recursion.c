#include "main.h"

/**
 * _print_rev_recursion - check the code
 * @s : str
 * Return: Always 0.
 */
void _print_rev_recursion(char *s)
{
int i;
i = 0;
while (s[i] != '\0')
{
i++;
}
while (i >= 0)
{
putchar(s[i]);
i--;
}
putchar(10);
}
