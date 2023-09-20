#include "main.h"

/**
 * print_rev - check the code
 *@s: par
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int i, m, ken;
		i = 0;
		while (s[i])
		{
			i++;
		}
		ken = i;

		for (m = ken - 1; m >= 0; m--)
		{
			_putchar(s[m]);
		}
			_putchar('\n');
}
