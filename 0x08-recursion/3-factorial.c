#include "main.h"

/**
 * factorial - check the code
 * @n: number
 * Return: Always 0.
 */
int factorial(int n)
{
if (n > 0)
{
return (n * factorial(n - 1));
}
else
return (-1);
}
