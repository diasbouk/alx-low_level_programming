#include "main.h"
/**
 * set_bit - check function
 * @n: number
 * @index: index
 * Return: 1 if Success
 * on error -1 returned
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);
	*n = ~(~*n & ~(1UL << index));
	return (1);
}
