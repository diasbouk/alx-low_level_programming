#include "main.h"

/**
 * leet - transforms into the leet string
 * @str: string to be leeted
 * Return: Always 0.
 */
char *leet(char *s)
{
	char a[] = "aeotlAEOTL";
	char n[] = "4307143071";
	int i;
	int j;
		i = 0;
	while (*(s + i) != '\0')
	{
		for (j = 0; j <= 9; j++)
		{
			if (*(s + i) == a[j])
			{
				*(s + i) = n[j];
			}
		}
		i++;
	}
	return (s);
}
