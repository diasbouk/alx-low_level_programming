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
	new_node->prev = NULL;
	new_node->next = (*head);

	if (*head != NULL)
		(*head)->prev = new_node;
	*head = new_node;


	new_node->n = n;

	return (new_node);
}
