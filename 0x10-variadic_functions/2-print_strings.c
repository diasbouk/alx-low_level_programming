#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers - Function to print numbers
 * @separator
 * @n: number of args to add .
 * Return: sum of all arguments
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list arg;
unsigned int i = 0;
va_start(arg, n);
if (separator != NULL)
{
while (i < n)
{
printf("%s", va_arg(arg, char *));
if (i < n - 1)
{
printf("%c ", *separator);
}
i++;
}
printf("\n");
}
va_end(arg);

}
