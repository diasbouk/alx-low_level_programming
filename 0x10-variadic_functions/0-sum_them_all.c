#include "variadic_functions.h"
/**
 * sum_them_all - Function to add nums
 * @n: number of args to add .
 * Return: sum of all arguments
*/
int sum_them_all(const unsigned int n, ...)
{
    unsigned int i;
unsigned int count = 0;
va_list arg;
va_start(arg, n);
if (n == 0)
{
return (0);
}
for (i = 0; i < n; i++)
{
count += va_arg(arg, int);
}
va_end(arg);
return (count);
}
