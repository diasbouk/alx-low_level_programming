#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - print formated argument
 * @format: formated arguments passed to the function
 * Description: using switch statement.
 */
void print_all(const char * const format, ...)
{
int i = 0;
char *s, *str = "";
va_list list;
va_start(list, format);
if (format)
{
while (format[i])
{
switch (format[i])
{
case 'c':
printf("%s%c", str, va_arg(list, int));
break;
case 'i':
printf("%s%d", str, va_arg(list, int));
break;
case 'f':
printf("%s%f", str, va_arg(list, double));
break;
case 's':
s = va_arg(list, char *);
if (!s)
s = "(nil)";
printf("%s%s", str, s);
break;
default:
i++;
continue;
}
str = ", ";
i++;
}
}
printf("\n");
va_end(list);
}
