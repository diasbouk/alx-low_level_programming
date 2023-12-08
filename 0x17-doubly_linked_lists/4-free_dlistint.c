#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - Frees a doubly linkde list
 * @head: pointer to head
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *fr;
		while ((fr = head) != NULL)
		{
			head = head->next;
			free(fr);
		}
}
