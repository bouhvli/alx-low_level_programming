#include "hash_tables.h"
/**
 * hash_table_print - a function that prints a hash table.
 * @ht: the hash table.
 * print the key/value in the order that they appear in the array of hash table
 * Order: array, list
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	int print = 0;
	hash_node_t *node;

	if (ht != NULL)
	{
		printf("{");
		while (i < ht->size)
		{
			node = ht->array[i];
			while (node != NULL)
			{
				if (print == 1)
					printf(", ");
				printf("'%s': '%s'", node->key, node->value);
				print = 1;
				node = node->next;
			}
			i++;
		}
		printf("}\n");
	}
}
