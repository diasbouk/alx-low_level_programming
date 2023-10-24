#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Finds Nth node of list
 * @head:: pointer to the first element
 * @index: index of Nth node
 * Return: Nth node's data
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
		if (head == NULL)
			return (NULL);
		while (i < index)
		{
			i++;
			head = head->next;
		}
		if (head == NULL)
			return (NULL);
		return (head);
}

