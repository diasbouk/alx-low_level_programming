#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
		if (n <= sizeof(*s2))
			ptr = malloc(sizeof(*(strncat(s1, s2, n))));
		else
			ptr = malloc(sizeof(*s1) + sizeof(*s2));
		if (ptr == NULL)
			return (NULL);
		ptr = strncat(s1, s2, n);
		return (ptr);
		free(ptr);
}
