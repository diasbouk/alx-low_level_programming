#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - check the code
 * @head: poiner to pointer to head
 * Dosent return anything (void .)
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
		while ((temp = *head) != NULL)
		{
			*head = (*head)->next;
			free(temp);
		}
		*head = NULL;
}
