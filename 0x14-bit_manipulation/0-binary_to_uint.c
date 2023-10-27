#include "main.h"

/**
 * binary_to_uint - function
 * @b: number in binary as string format
 * Return: decoded num
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num;
	int lent, base_2;
		if (!b)
			return (0);

		num = 0;
		for (lent = 0; b[lent] != '\0'; lent++)
			;
		for (lent--, base_2 = 1; lent >= 0; lent--, base_2 *= 2)
		{
			if (b[lent] != '0' && b[lent] != '1')
			{
				return (0);
			}
			if (b[lent] & 1)
			{
				num += base_2;
			}
		}
		return (num);
}
