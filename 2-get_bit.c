#include "main.h"
/**
 * get_bit - gives the value of a bit at a given index.
 * @n: given integer
 * @index: index
 * Return: the bit or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index >= 64)
		return (-1);
	bit = (n >> index) & 1;
	return (bit);
}
