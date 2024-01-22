#include "hash_tables.h"



/**
 * key_index - gives the index of key to a hash table.
 *
 * @key: inputs key string.
 * @size: inputs hash table size.
 *
 * Return: index to hash table.
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);

	return (hash % size);
}
