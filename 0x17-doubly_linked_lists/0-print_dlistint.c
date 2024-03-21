#include "lists.h"

/**
 * print_dlistint - prints elements of linked list
 * @h: head of the list
 * Return: number of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

		if (!h)
			return (0);
		while (h)
		{
			printf("%\n", h->n);
			h = h->next;
			count++;
			}

	return (count);

}
