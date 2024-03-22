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
