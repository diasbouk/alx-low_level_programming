#include "main.h"

/**
 * print_to_98 - check the code
 * @n: parameter of function .
 * Return: Always 0.
 */
void print_to_98(int n)
{
	int i;
		if (n > 98)
		{
			for (i = n; i >= 98; i--)
			{
				printf("%d, ", i);
			}
			if (n == 98)
			{
				printf("\n");
			}
		}
		if (n < 98)
		{
			for (i = n; i <= 98; i++)
			{
				printf("%d, ", i);
			}
			if (n == 98)
			{
				printf("\n");
			}
		}
		if (n == 98)
		{
			printf("\n98\n");
		}
}
