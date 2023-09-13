#include "main.h"

/**
 * main - check the code
 *@void: returns 0
 * Return: Always 0.
 */
int main(void)
{
	unsigned long fibonacci[50];
	 int i;
	 unsigned long count;
	 	count = 0;
	fibonacci[0] = 0;
		fibonacci[1] = 1;
		for (i = 2; i <= 50; i++)
		{
			fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
			if (fibonacci[i] % 2 == 0)
			{
				count = count + fibonacci[i];
			}
		}
		printf("%lu", count);
		printf("\n");
		return (0);
}
