#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
		ptr = malloc(nmemb * size);
		return (ptr);
		free(ptr);
}
