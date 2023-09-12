#include "main.h"
/**
 * print_last_digit - check the code
 * @num: number .
 * j: number
 * Return: Always 0.
 */
int print_last_digit(int num)
{
	int j;
		j = num % 10;
		if (j < 0)
		{
			j = j * (-1);
		}
		_putchar(j + '0');
		return (j);
}
