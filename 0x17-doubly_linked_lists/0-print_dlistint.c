#include "lists.h"

/**
 * print_dlistint - function to print a doubly ll
 * @h: head of the list
 * Return: The number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
    int count = 0;
    if (h == NULL)
        return (0);
    while (h)
    {
        printf("%d\n", h->n);
        h = h->next;
        count++;
    }
    
    return (count);
}
