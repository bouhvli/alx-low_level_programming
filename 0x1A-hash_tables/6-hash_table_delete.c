#include "hash_tables.h"
/**
 * hash_table_delete - a function that deletes a hash table.
 * @ht: the hash table.
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int idx = 0;
	hash_node_t *node, *tmp;

	if (ht != NULL)
	{
		for (idx = 0; idx < ht->size; idx++)
		{
			node = ht->array[idx];
			while (node != NULL)
			{
				tmp = node;
				node = node->next;
				free(tmp->key);
				free(tmp->value);
				free(tmp);

			}
			free(ht->array);
			free(ht);
		}
	}
}
