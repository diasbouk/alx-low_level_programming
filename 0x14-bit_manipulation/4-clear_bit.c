#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: the num
 * @index: the bit ot clear
 * Return: 1 on Success
 * on error -1 returned
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);
	*n = ~((1UL << index) | ~*n);
	return (1);
}
