#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - check the code
 * @head: pointer to the list
 */
void free_list(list_t *head)
{
	list_t *tmp;
		while ((tmp = head) != NULL)
		{
			head = head->next;
			free(tmp->str);
			free(tmp);
		}
}
