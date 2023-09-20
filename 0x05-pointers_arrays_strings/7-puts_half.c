#include "main.h"

/**
 * puts_half - check the code
 * @str:par
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int i, j, n;
		i = 0;
		while (str[i])
		{
			i++;
		}
		j = (i + 1) / 2;
		if ((i + 1) % 2 == 0)
		{
			while (str[j])
			{
				_putchar(str[j]);
				j++;
			}
		}
		n = (i - 1) / 2;
		if ((i + 1) % 2 != 0)
		{
			while (str[n + 1])
			{
				n++;
				_putchar(str[n]);
			}
		}
		_putchar('\n');
}
