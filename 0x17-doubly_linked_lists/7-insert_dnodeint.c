#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - Inserts a node at index
 * @h: Adress of the head
 * @idx: index to insert node in
 * @n: Number to assign to new node inserted
 * Return: Adress of new node. NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_mem, *res_mem = *h;
	/* unsigned int counter = 0 */

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		if (res_mem == NULL)
			return (NULL);
		res_mem = res_mem->next;
	}

	if (res_mem->next == NULL)
		return (add_dnodeint_end(h, n));

	new_mem = malloc(sizeof(dlistint_t));

	if (new_mem == NULL)
		return (NULL);

	new_mem->n = n;
	new_mem->next = res_mem->next;
	new_mem->prev = res_mem;
	res_mem->next->prev = new_mem;
	res_mem->next = new_mem;

	return (new_mem);
}
