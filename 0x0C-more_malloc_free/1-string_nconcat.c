#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
		if ((sizeof(*s2) / sizeof(char)) >= n )
		{
			ptr = malloc(sizeof(*s1) + (n * sizeof(char)));
		}
		else
		{
			ptr = malloc(sizeof(*s1) + (sizeof(char) * n));
		}
		if (ptr == NULL)
		{
			return (NULL);
		}
		if (s1 == NULL || s2 == NULL)
		{
			return (NULL);
		}
		strncat(s1, s2, n);
		*ptr = *s1;
		return (ptr);
		free(ptr);
		free(ptr);
}
