#include "main.h"

/**
 * fib_nums-funct
 * @num: numebr
 * Return: Always 0.
 */
void fib_nums(int num)
{
	fib_nums(0) = 0;
	fib_nums(1) = 1;
	printf("%d ,",fib_nums(num - 1) + fib_nums(num - 2));
		num++;
	if (num <= 50)
	{
	fib_nums(num);
	}
}
