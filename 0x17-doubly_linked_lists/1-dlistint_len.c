#include "lists.h"
/**
 * dlistint_len - returns number of elements in list
 * @h: Pointer to the head of the list
 * Return: number of elemnts
 */
size_t dlistint_len(const dlistint_t *h)
{
int count = 0;
if (h == 0)
return (0);
while (h)
{
count++;
h = h->next;
}
return (count);
}
