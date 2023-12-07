#include "lists.h"

/**
 * add_dnodeint_end - Adds a node as the end of a list
 * @head: The head of our list
 * @n: New node's data
 * Return: Pointer to the new element of list
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_mem, *last_dir;

	new_mem = malloc(sizeof(dlistint_t));

	if (new_mem == NULL)
		return (NULL);

	new_mem->n = n;
	new_mem->next = NULL;
	new_mem->prev = NULL;
	if (*head == NULL)
	{
		*head = new_mem;
		return (new_mem);
	}
	last_dir = *head;

	while (last_dir->next != NULL)
		last_dir = last_dir->next;
	last_dir->next = new_mem;
	new_mem->prev = last_dir;

	return (new_mem);
}
