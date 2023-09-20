#include "main.h"
/**
 * reverse_array - check the code
 * @a: array
 * @n: number of elements
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{
	int i, count;
		count = 0;
		for (i = 0; i <= n / 2 ; i++)
		{
			count = a[i];
			a[i] = a[n - i - 1];
			a[n - i - 1] = count;
		}
}
