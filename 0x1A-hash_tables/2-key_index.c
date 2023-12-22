#include "hash_tables.h"

/**
 * key_index - Finds the index of a key
 * @key: Key of index we're looking for
 * @size: size of array of our hash_tables
 * Return:Returns the index at which the key/value
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = hash_djb2(key) % size;
		return (index);
}
