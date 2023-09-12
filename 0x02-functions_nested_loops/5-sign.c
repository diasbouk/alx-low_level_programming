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
			_putchar('-');
			return  (-1);
		}
		if (n > 0)
		{
			_putchar('+');
			return (1);
		}
		if (n == 0)
		{
			_putchar('0');
			return (0);
		}
		else
			return (0);
}
