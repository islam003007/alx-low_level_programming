#include "hash_tables.h"


/**
 * hash_table_get - retrieves a value associated with a key.
 *
 * @ht: inputs hash table.
 * @key: inputs key string.
 *
 * Return: value associated with a key
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((unsigned char *) key, ht->size);

	temp = ht->array[index];

	while (temp != NULL)
	{
		if (!strcmp(temp->key, key))
			return (temp->value);
		temp = temp->next;
	}

	return (NULL);
}
