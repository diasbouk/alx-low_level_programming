#include "lists.h"

/**
 * int sum_dlistint - Adds all numbers of nodes
 * @head: Head of the list
 * Return: Sum of list integers
 */
int sum_dlistint(dlistint_t *head)
{
	int count = 0;
		while (head)
		{
			count += head->n;
			head = head->next;
		}
		return (count);
}
