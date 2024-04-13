#include "hash_tables.h"

/**
 * hash_table_create - Function that creates a hash_table
 * @size: The Hash table size
 * Return: A pointer to the new hash_table
 * or NULL if it failed
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = malloc(sizeof(hash_table_t));
		if (new_table == NULL)
			return (NULL);
		new_table->size = size;

		new_table->array = malloc(sizeof(char *) * new_table->size);

		return (new_table);
}
