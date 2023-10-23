#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - Adds new node at the end of a list
 * @head: pointer to list head adress
 * @n: Number to add as new node data
 * Return: pointer to the new head of the list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_el = malloc(sizeof(listint_t));
	listint_t *tmp = NULL;
		if (new_el == NULL)
			return (NULL);
		new_el->n = n;
		new_wl->next = NULL;
		tmp = *head;
		if (tmp == NULL)
			*head = new_el;
		while (tmp)
			tmp = tmp->next;
		tmp->next = new_el;
		return (*head);
}
