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
			for (j = i++; j <= 57; j++)
			{
					putchar(i);	
					putchar(j);
						if (i != 56 || j != 57)
						{
							putchar(44);
							putchar(32);
						}
			}
		}
			putchar(10);
			return (0);
}
