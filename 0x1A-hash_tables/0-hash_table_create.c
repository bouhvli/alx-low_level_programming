#include "hash_tables.h"
/**
 * hash_table_create -  a function that creates a hash table.
 * @size: the size of the array.
 * Return: a pointer to the created array or NULL if somthing wrong happed
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash;
	unsigned long int i = 0;

	if (size <= 0)
		return (NULL);
	new_hash = (hash_table_t*)malloc(sizeof(hash_table_t));
	if (new_hash == NULL)
		return (NULL);
	new_hash->size = size;
	new_hash->array = (hash_node_t**)calloc(new_hash->size,
			sizeof(hash_node_t*));
	if (new_hash->array == NULL)
	{
		free(new_hash);
		return (NULL);
	}
	while (i < new_hash->size)
	{
		new_hash->array[i] = NULL;
		i++;
	}
	return (new_hash);
}
