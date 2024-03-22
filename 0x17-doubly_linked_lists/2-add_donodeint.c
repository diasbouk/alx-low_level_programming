#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - Adds a node at the end
 * @head: head of the new node
 * @n: data of new node
 * Return: A pointer to the new node
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t) * 1);

	if (new_node == NULL)
		return (NULL);

	if (head == NULL)
	{
		*head = malloc(sizeof(dlistint_t));
		(*head)->n = n;
		(*head)->next = NULL;
		(*head)->prev = NULL;
	}

	while ((*head)->next)
		*head = (*head)->next;

	(*head)->next = new_node;
	new_node->prev = (*head);
	new_node->n = n;
	new_node->next = NULL;

	return (new_node);
}
