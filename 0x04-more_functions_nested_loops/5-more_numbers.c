#include "main.h"

/**
 * more_numbers - check the code
 * lying again
 * Return: Always 0.
 */
void more_numbers(void)
{
	int i, j, k;
		for (i = 48; i <= 57; i++)
		{
			for (j = 48; j <= 57; j++)
			{
				putchar(j);
			}
			for (k = 48; k <= 52; k++)
			{
				putchar(49);
				putchar(k);
			}
			putchar(10);
		}
}
