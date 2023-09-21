#include "main.h"

/**
 * *cap_string - Function to cpitalize strings .
 * @str: string to be cspitalized
 * Return: returns the strign capitalized .
 */
char *cap_string(char *str)
{
int i;
		i = 0;
		while (str[i])
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				if (str[i - 1] >= 0 && str[i - 1] <= '/' && str[i - 1] != '-')
				{
				str[i] = (int)str[i] - 32;
				}
			}
			i++;
		}
			return (str);
}
