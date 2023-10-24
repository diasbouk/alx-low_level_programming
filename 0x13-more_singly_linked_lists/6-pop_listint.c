#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - Delete head of list
 * @head: pointer to pointer to head
 * Return: n data of head || 0 if list is null
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *tmp;
		if (*head == NULL)
			return (0);
		data = (*head)->n;
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
		return (data);
}

