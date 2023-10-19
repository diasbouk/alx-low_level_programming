#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - function to add a new node
 * @head: Pointer to the first element
 * @str: pointer to element to add
 * Return: pointer to new element or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{

