#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int i, j;
		if (n > 0)
		{
			for (i = 1; i <= n; i++)
			{
				for (j = 1; j < i; j++)
				{
				_putchar(' ');
				}
				_putchar('\\');
				_putchar('\n');
			}
				_putchar('\n');
		}
}
