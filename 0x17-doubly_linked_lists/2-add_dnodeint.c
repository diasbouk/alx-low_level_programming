#include "lists.h"

/**
 * add_dnodeint - Adds a node as the head of a list
 * @head: The head of our list
 * @n: New node's data
 * Return : Pointer to the new Head
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
        return (NULL);
    if (head == NULL)
    {
        free(new_node);
        return (NULL);
    }
    new_node->n = n;
    (*head)->prev = new_node;
    new_node->next = *head;
    new_node->prev = NULL;
    *head = new_node;
    
    return (*head);

}