#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - gets a node
 * @head: head of the list
 * @index: index of the node
 * Return: Node adress or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (count < index)
	{
		head = head->next;
		count++;
	}

	if (!head)
		return (NULL);
	return (head);
}
