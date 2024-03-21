#include "lists.h"

/**
 * dlistint_len - prints elements of linked list
 * @h: head of the list
 * Return: number of nodes
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

		if (!h)
			return (0);
		while (h)
		{
			h = h->next;
			count++;
			}

	return (count);

}
