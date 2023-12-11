#include "main.h"

/**
 * _strlen - check the code
 * @s: parameter string
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int length;
		length = 0;
		while (s[length])
		{
			length++;
		}
		return (length);
}
