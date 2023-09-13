#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int count;
	int i;
		count = 0;
		for (i = 0; i <= 1024; i++)
		{
			if (i % 3 == 0 || i % 5 == 0)
			{
				count = count + i;
			}
		}
			printf("%d", count);
			return (0);
}
