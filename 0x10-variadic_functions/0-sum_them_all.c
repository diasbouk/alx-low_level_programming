#include "variadic_functions.h"
/**
 * sum_them_all - Function to add nums
 * @n: number of args to add .
 * Return: sum of all arguments
*/
int sum_them_all(const unsigned int n, ...)
{
if (n == 0)
{
retur (0);
}
unsigned int i;
int count = 0;
va_list nums;
va_start(nums, n);
for (i = 0; i < n; i++)
{
count = count + va_arg(nums, int);
}
return (count);
}
