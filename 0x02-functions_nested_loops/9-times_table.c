#include "main.h"

/**
 * times_table - check the code
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int count, i, j;
		count = 0;
		for (i = 0; i <= 9; i++)
		{
			if (i >= 0)
			{
				printf("0,");
			}
			for (j = 0; j < 9; j++)
			{
				count = count + i;
					if (count <= 9)
					{
						printf(" ");
					}
					printf(" %d", count);
					if (j < 8)
					{
						printf(",");
					}
			}
			count = 0;
			printf("\n");
		}
}
