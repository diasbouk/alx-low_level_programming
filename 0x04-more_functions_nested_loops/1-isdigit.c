#include "main.h"
#include <stdio.h>

/**
 * _isdigit - check the code
 *@c: para
 * Return: Always 0.
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
		return (0);
}
