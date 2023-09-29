#include "main.h"

/**
 *  is_prime_number- check the code
 * @n: number
 * Return: Always 0.
 */
int is_prime_number(int n)
{
if (n > 2 && n % is_prime_number(n - 1) != 0)
{
return (0);
}
else if (n == 1 || n == 2)
{
return (0);
}
else
return (1);
}