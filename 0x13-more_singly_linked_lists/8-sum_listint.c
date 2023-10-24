#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - Adds all data of nodes in list
 * @head: pointer to head of list
 * Return: sum of all data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
		while (head)
		{
			sum += head->n;
			head = head->next;
		}
		return (sum);
}
