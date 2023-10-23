#include "lists.h"

/**
 * print_listint_len - function to print && return number of nodes .
 *  @h: pointer to the first node of list .
 * Return: number of nodes .
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;
		while (h)
		{
			h = h->next;
			count++;
		}
		return (count);
}

