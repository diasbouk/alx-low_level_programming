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
	int i;
		for (i = 97; i <= 122; i++)
	{
		if (i != 101 && i != 113)
		putchar(i);
	}
		putchar(10);
	return (0);
}
