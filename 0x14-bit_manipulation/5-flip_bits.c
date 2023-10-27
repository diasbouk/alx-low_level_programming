#include "main.h"
/**
 * flip_bits - function
 * @n: num
 * @m: num
 * Return: number of the deffirent bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 63, number = 0;

	while (i >= 0)
	{
		if (((n ^ m) >> i) & 1)
			number++;
		i--;
	}
	return (number);
}
