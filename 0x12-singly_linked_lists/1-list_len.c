#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - counts list length
 * @h: pointer to first node
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	unsigned int count = 0;
		if (h->str == NULL)
		{
			count++;
		}
		else if (h->str != NULL)
		{
			count++;
		}
		if (h->next != NULL)
		{
			count++;
			list_len(h->next);
		}
		return (count);
}
