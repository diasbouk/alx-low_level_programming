#include "lists.h"
/**
 * print_list - Prints elemets of linked list
 * @h: pointer to the first node
 * Return: number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	int count = 0;
		if (h)
		{
			if (h->str == NULL)
			{
				printf("[0] (nil)\n");
			}
			else if (h->str != NULL)
			{
				printf("[%d] %s\n", h->len, h->str);
			}
			count++;
		}
			if (h->next != NULL)
			{
				print_list(h->next);
				count++;
			}
			return (count);
}
