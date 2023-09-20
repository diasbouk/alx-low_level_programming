#include "main."
/**
 * reverse_array - check the code
 * @a: array
 * @: number of elements
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{
	int i, j;
		i = 0;
		j = 0;
		while (i <= n)
		{
			i++;
		}
		for (j = 0; j <= n; j++)
		{
			a[j] = a[i];
			i--;
			j++;
		}
