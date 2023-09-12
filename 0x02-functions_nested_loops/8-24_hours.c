#include "main.h"

/**
 * jack_bauer - check the code
 * Return: Always 0.
 */
void jack_bauer(void)
{
	int i, j;
		for (i = 0; i <= 23; i++)
		{
			for (j = 0; j <= 59; j++)
			{
				if (i < 10)
				{
					printf("0");
				}
					printf("%d:", i);
				if (j < 10)
				{
					printf("0");
				}
					printf("%d\n", j);
			}
		}
}
