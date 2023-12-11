#include "main.h"

/**
 * _puts - check the code
 *@str: string parameter
 * Return: Always 0.
 */
void _puts(char *str)
{
	int i;
		i = 0;
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');

}
