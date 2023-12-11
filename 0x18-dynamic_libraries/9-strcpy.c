#include "main.h"

/**
 * *_strcpy - cp
 * @dest: dest
 * @src: string
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int rtg, n;
		rtg = 0;
		while (src[rtg] != '\0')
		{
			rtg++;
		}

		for (n = 0; n < rtg; n++)
		{
			dest[n] = src[n];
		}
		dest[n] = '\0';

			return (dest);
}
