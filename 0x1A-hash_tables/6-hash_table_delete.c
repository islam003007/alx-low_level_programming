#include "hash_tables.h"


/**
 * hash_table_delete - deletes a hash table.
 *
 * @ht: inputs hash table.
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp;
	hash_node_t *temp_2;

	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			free(temp->key);
			free(temp->value);
			temp_2 = temp;
			temp = temp->next;
			free(temp_2);
		}
		free(ht->array[i]);
	}
	free(ht->array);
	free(ht);
}
