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
	int count = 0;
		while (h)
		{
			h = h->next;
			count++;
			}
		return (count);
}
