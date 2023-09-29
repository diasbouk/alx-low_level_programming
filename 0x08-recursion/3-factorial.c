#include "main.h"

/**
 * factorial - check the code
 * @n: number
 * Return: Always 0.
 */
int factorial(int n)
{
if (n != 0 && n != 1)
{
    return ((n - 1) *factorial(n - 1)); 
}
return (1);
}
