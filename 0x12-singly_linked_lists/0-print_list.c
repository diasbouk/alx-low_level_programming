#include "lists.h"

/**
 * print_list - Prints elemets of linked list
 * @h: pointer to the first node
 * Return: number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	int count = 0;
		while (h)
		{
			if (h->str == NULL)
				printf("[%d] %s\n", 0, "(nil)");
			else
				printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
		}
	return (count);
}
