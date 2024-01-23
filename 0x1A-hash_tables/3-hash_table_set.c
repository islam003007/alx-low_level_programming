#include "hash_tables.h"


/**
 * hash_table_set - adds an element to a hash table.
 *
 * @ht: inputs hash table.
 * @key: inputs key string.
 * @value: inputs value string.
 *
 * Return: 1 if it succeeded, otherwise 0.
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node;
	hash_node_t *temp;

	if (ht == NULL || key == NULL || value == NULL || key[0] == '\0')
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	temp = ht->array[index];
	while (temp != NULL && temp->next != NULL)
	{
		if (!strcmp(temp->key, key))
		{
			temp->value = strdup(value);
			return (1);
		}
		temp = temp->next;
	}

	new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);

}
