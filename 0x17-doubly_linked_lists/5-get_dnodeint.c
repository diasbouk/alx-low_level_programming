#include "lists.h"

/**
 * get_dnodeint_at_index - Gets a node at index
 * @head: Head of the list
 * @index: index of our node
 * Return: Adress of our node or NULL if it dosent exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
		while (head)
		{
			if (i == index)
				return (head);
			head = head->next;
			i++;
		}
		return (NULL);
}
