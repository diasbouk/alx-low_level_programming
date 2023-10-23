#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - Adds new node t=at the first of a list
 * @head: pointer to list head adress
 */
void free_listint(listint_t *head)
{
	listint_t *fr;
	while ((head = fr) != NULL)
	{
		head = head->next;
		free(fr->n);
		free(fr);
	}
}
