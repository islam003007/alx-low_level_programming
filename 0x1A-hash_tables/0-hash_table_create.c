#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table.
 *
 * @size: inputs hash table size.
 *
 * Return: pointer to table. NULL in case of failure.
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = malloc(sizeof(hash_node_t) * size);

	if (table->array == NULL)
		return (NULL);

	return (table);
}
