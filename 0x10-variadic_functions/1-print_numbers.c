#include "variadic_functions.h"
/**
 * print_numbers - Function to print numbers
 * @separator
 * @n: number of args to add .
 * Return: sum of all arguments
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list arg;
unsigned int i = 0;
va_start(arg, n);
if (separator != NULL)
{
while (i < n)
{
printf("%d", va_arg(arg, int));
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
