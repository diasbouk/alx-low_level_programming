#include "lists.h"

/**
 * print_dlistint - function to print a doubly ll
 * @h: head of the list
 * Return: The number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
    int count = 0
    if (h == NULL)
        return (NULL);
    while (h)
    {
        print("%d\n", h->n);
        count++;
    }
    
    return (count);
}