#include "main.h"

/**
 * print_triangle - check the code
 *@size: size
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int i, j, k;
		for (k = 1; k <= size; k++)
		{
			for (j = size; j >= k; j--)
			{
				_putchar(' ');
			}
		for (i = 0; i <= j; i++)
		{
			_putchar('#');
		}
		_putchar('\n');
		}
}
