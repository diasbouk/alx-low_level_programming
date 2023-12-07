#include "lists.h"

/**
 * add_dnodeint_end - Adds a node as the end of a list
 * @head: The head of our list
 * @n: New node's data
 * Return: Pointer to the new element of list
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *last_node = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *head;
		if (last_node == NULL)
			return (NULL);
		if (*head == NULL)
		{
			*head = last_node;
			return (last_node);
		}
		while (temp->next != NULL)
			temp = temp->next;
		last_node->n = n;
		temp->next = last_node;
		last_node->prev = temp;
		last_node->next = NULL;
		return (last_node);
}
