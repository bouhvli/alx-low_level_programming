#include "hash_tables.h"
/**
 * create_node - create a node.
 * @key: the key.
 * @value: the value.
 * Return: NULL if somthing is wrong, ot the node if everything
 * work as expected.
*/
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
		return (NULL);
	new_node->key = malloc(strlen(key) + 3);
	new_node->value = malloc(strlen(value) + 3);
	if (new_node->key == NULL || new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (NULL);
	}
	strcpy(new_node->key, key);
	strcpy(new_node->value, value);
	new_node->next = NULL;
	return (new_node);
}

/**
 * handle_collision - as the name says.
 * @ht: the hash table.
 * @nd: the node to add.
 * @idx: the index.
*/
void handle_collision(hash_table_t *ht, hash_node_t *nd, unsigned long int idx)
{
	if (ht->array[idx] == NULL)
		ht->array[idx] = nd;
	else
	{
		nd->next = ht->array[idx];
		ht->array[idx] = nd;
	}
}
/**
 * hash_table_set - a function that adds an element to the hash table.
 * @ht: is the hash table you want to add or update the key/value to.
 * @key: is the key. key can not be an empty string.
 * @value: is the value associated with the key.
 * Return: 1 if it succeeded, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	unsigned long int idx;
	hash_node_t *current_node;

	if (value == NULL|| key == NULL || ht == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	current_node = ht->array[idx];

    while (current_node)
    {
        if (strcmp(current_node->key, key) == 0)
		{
            free(current_node->value);
            current_node->value = strdup(value);
            return (1);
        }
        current_node = current_node->next;
    }
    node = create_node(key, value);
    if (node == NULL)
        return (0);
    handle_collision(ht, node, idx);
    return (1);
}
