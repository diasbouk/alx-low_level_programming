#include "main.h"

/**
 * _calloc - prints buffer in hexa
 * @nmemb: number of elemnts in array
 * @size: the size of the memory foreach
 *
 * Return: Nothing.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *ptr;
	int i;
		if (nmemb == 0 || size == 0)
		{
			return (NULL);
		}
		ptr = malloc((nmemb * size));
		if (ptr == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < (nmemb * size); i++)
			ptr[i] = 0;
		return (ptr);
		free(ptr);
}
