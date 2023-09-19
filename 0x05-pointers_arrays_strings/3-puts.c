#include "main.h"

/**
 * _puts - check the code
 *@str: string parameter
 * Return: Always 0.
 */
void _puts(char *str)
{
	write(1,str,(sizeof(*str) / sizeof(char)));
}
