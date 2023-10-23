#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - Adds new node t=at the first of a list
 * @head: pointer to list head adress
 * @n: Number to add as new node data
 * Return: pointer to the new head of the list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_el = malloc(sizeof(listint_t));
		if (new_el == NULL)
			return (NULL);
		new_el->n = n;
		new_el->next = *head;
		*head = new_el;
		return (*head);
}
