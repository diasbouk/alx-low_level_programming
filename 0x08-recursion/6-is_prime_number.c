#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int is_prime_number(int n)
{
if (n > 2 && n % is_prime_number(n - 1) != 0)
{
return (1);
}
else if (n == 1 || n == 2)
{
return (1);
}
else
return (0);
}