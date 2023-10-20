#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newElement, *tmp;
       		newElement = malloc(sizeof(list_t));
		if (newElement == NULL)
			return (NULL);
		while (*head)
			*head = (*head)->next;
		newElement->str = strdup(str);
		newElement->len = strlen(str);
		newElement->next = NULL;
		tmp = *head;
		if (!tmp)
			*head = newElement;
		else
		{
			while(tmp->next)
				tmp = tmp->next;
		tmp->next = newElement;
		}
		return (*head);
}

