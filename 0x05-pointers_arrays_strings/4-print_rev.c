#include "main.h"

/**
 * print_rev - check the code
 *@s: par
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int i;
		i = 0;
		while (s[i])
		{
			i++;
		}
		while (i >= 0)
		{
			i--;
			_putchar(s[i]);
		}
			_putchar('\n');
}
