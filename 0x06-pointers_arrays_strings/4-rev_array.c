#include "main.h"
/**
 * reverse_array - check the code
 * @a: array
 * @n: number of elements
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{
	int swap, begin, end;

	begin = 0;
	end = n - 1;
	while (begin < end)
	{
		swap = *(a + begin);
		*(a + begin) = *(a + end);
		*(a + end) = swap;
		begin++;
		end--;
	}
}
