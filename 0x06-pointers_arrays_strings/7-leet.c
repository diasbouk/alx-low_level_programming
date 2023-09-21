#include "main.h"

/**
 * leet - transforms into the leet string
 * @str: string to be leeted
 * Return: Always 0.
 */
char *leet(char *str)
{
	int i;
		i = 0;
		char s[] = { 'a', 'e', 'o', 't', 'l' };
		char l[] = { 4, 3, 0, 7, 1 };
		while (str[i])
		{
			for (i = 0; i < 5; i++)
			{
				if (str[i] == s[i])
				{
					str[i] = l[i];
				}
			}
			i++;
		}
		return (str);
}
