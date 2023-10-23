#include "lists.h"

/**
 * print_listint - function to print nodes && return number of nodes .
 *  @h: pointer to the first node of list .
 * Return: number of nodes .
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;
		while (h)
		{
			printf("%d\n", h->n);
			h = h->next;
			count++;
		}
		return (count);
}
