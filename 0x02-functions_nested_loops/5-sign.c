#include "main.h"

/**
 * print_sign - the function of code .
 * @n: the parameter as always .
 * Return: returns the value and exits
 */
int print_sign(int n)
{
		if (n < 0)
		{
			return  (-1);
			printf("-");
		}
		if (n > 0)
		{
			return (1);
			puts("+");
		}
		if (n == 0)
		{
			return (0);
			puts("0");
		}
		else
			return (0);
}
