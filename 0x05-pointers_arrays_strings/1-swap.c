#include "main.h"

/**
 * swap_int - check the code
 *@a: num a
 *@b: num b
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int c;
		c = *b;
		*b = *a;
		*a = c;
}
