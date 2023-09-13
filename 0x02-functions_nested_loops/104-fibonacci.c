#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long fibonacci[98];
	int i;
		fibonacci[0] = 0;
		fibonacci[1] = 1;
		for (i = 2; i <= 98; i++)
		{
			fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
			if (i < 98)
			{
			printf("%lu, ", fibonacci[i]);
			}
			if (i == 98)
			{
				printf("%lu", fibonacci[i]);
			}
		}
		printf("\n");
		return (0);
}
