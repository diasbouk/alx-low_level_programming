#include "main.h"

/**
 * sqrtTwo - sqrt of 2
 * @c: c
 * @d: d
 *
 * Return: 1
 */
int sqrtTwo(int c, int d)
{
if (d * d == c)
return (d);
else if (d * d > c)
return (-1);
return (sqrtTwo(c, d + 1));
}
/**
 * _sqrt_recursion - returns n square
 * @n: num prmtr
 *
 * Return: On success 1.
 */
int _sqrt_recursion(int n)
{
return (sqrtTwo(n, 1));
}
