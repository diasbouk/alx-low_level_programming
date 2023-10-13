#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
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
for (i = 0; i < n; i++)
{
count += va_arg(arg, int);
}
va_end(arg);
return (count);
}
