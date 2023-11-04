#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_node_at_index - insert new node at given position
 * @head: pointer to first node
 * @idx: position to insert
 * @n: data of new node
 * Return: Adress of new node || NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new_el = malloc(sizeof(listint_t));
	listint_t *tmp;
		if (new_el == NULL)
			return (NULL);
		while (*head && i < idx)
			*head = (*head)->next;
		tmp = (*head)->next;
		(*head)->next = new_el;
		new_el->n = n;
		new_el->next = tmp;

		tmp = *head;
		return (new_el);

}

