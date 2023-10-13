#include "variadic_functions.h"
/**
 * sum_them_all - Function to add nums
 * @n: number of args to add .
 * Return: sum of all arguments
*/
int sum_them_all(const unsigned int n, ...)
{
va_list arg;
unsigned int i = 0;
unsigned int count = 0;
va_start(arg, n);
while (i < n)
{
count += va_arg(arg, int);
i++;
}
va_end(arg);
return (count);
}
