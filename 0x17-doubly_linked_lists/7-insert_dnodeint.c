#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a node at index
 * @h: Adress of the head
 * @idx: index to insert node in
 * @n: Number to assign to new node inserted
 * Return: Adress of new node. NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = calloc(1, sizeof(dlistint_t));
	dlistint_t *temp;
	int i = 0;

		temp = *h;
		if (idx = 0)
			add_dnodeint(h, n);
		while (temp && i < idx)
		{
			temp = temp->next;
			i++;
		}
		if (temp->next == NULL)
			new_node = add_dnodeint_end(h, n);
		else
		{
			new_node->prev = temp->prev;
			new_node->n = n;
			new_node->next = temp;
			temp->prev = new_node;
		}
		return (new_node)
