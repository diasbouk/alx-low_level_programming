#include "main.h"

/**
 * print_times_table - check the code
 *@n:size
 * Return: Always 0.
 */
void print_times_table(int n)
{
	int count, i, j;
		count = 0;
		if (n <= 15 && n > 0)
		{
			for (i = 0; i <= n; i++)
			{
				if (i >= 0)
				{
					printf("0,");
				}
				for (j = 0; j < n; j++)
				{
					count = count + i;
					if (count <= 9)
					{
						printf(" ");
					}
					if (count < 100)
					{
						putchar(' ');
					}
					printf(" %d", count);
					if (j < (n - 1))
					{
						printf(",");
					}
				}
				count = 0;
				printf("\n");
			}
		}
		if (n == 0)
		{
			printf("0\n");
		}
}

