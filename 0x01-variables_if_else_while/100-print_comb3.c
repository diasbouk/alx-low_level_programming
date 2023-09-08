#include <stdio.h>
/**
* main-The main function
* Description: THe description
 * void: no args
 * printf:Prints the string
 * Return: returns 0
 */
int main(void)
{
	int i, j;
		for (i = 48; i <= 56; i++)
		{
			for (j = 49; j <= 57; j++)
			{
				if (i != j)
				{
					putchar(i);
					putchar(j);
					putchar(44);
					putchar(32);
				}
			}
		}
			putchar(10);
			return (0);
}
