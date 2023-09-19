#include "main.h"

/**
 * rev_string - check the code
 * @s: str
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int i, j, k;
	char str;
		i = 0;
		j = 0;
		while (s[i])
		{
			i++;
		}
		j = i - 1;

		for (k = 0; k < i / 2; k++)
		{
			str = s[k];
			s[k] = s[j];
			s[j--] = str;
		}
}

