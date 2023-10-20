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
	if (head != NULL)
	{
		if (head->str)
			free(head->str);
		if (head->next)
			free(head->next);
		free(head);
	}
}
