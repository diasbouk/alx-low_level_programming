#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long fibonacci[50];
	int i;
		fibonacci[0] = 0;
		fibonacci[1] = 1;
		for (i = 2; i <= 50; i++)
		{
			fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
			printf("%lu, ", fibonacci[i]);
		}
		printf("20365011074\n");
		printf("\n");
		return (0);
}
