#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main-The main function
* Description: THe description
* void: no args
* printf:Prints the result we need
* str: string
* Return: returns 0
 */
int main(void)
{
	int n;
	int last_digit;
	char str[1000] = "and is less than 6 and not 0\n";
		srand(time(0));

	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
		if (last_digit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
		if (last_digit == 0)
		printf("Last digit of %d is %d and is 0\n", n, last_digit);
		if (last_digit < 6 && last_digit != 0)
		printf("Last digit of %d is %d %s", n, last_digit, str);
		return (0);
}
