#include "hash_tables.h"
/**
 * shash_table_create -  a function that creates a hash table.
 * @size: the size of the array.
 * Return: a pointer to the created array or NULL if somthing wrong happed
*/
shash_table_t *shash_table_create(unsigned long int size)
{

	shash_table_t *new_hash;
	unsigned long int i = 0;

	if (size <= 0)
		return (NULL);
	new_hash = (shash_table_t *)malloc(sizeof(shash_table_t));
	if (new_hash == NULL)
		return (NULL);
	new_hash->size = size;
	new_hash->array = (shash_node_t **)calloc(new_hash->size,
			sizeof(shash_node_t *));
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
	new_hash->shead = NULL;
	new_hash->stail = NULL;
	return (new_hash);
}
/**
 * create_node - create a node.
 * @key: the key.
 * @value: the value.
 * @ht: the hash table.
 * @idx: the index.
 * Return: NULL if somthing is wrong, ot the node if everything
 * work as expected.
*/
shash_node_t *create_node(const char *key, const char *value,
		shash_table_t *ht, unsigned long int idx)
{
	shash_node_t *new_node = malloc(sizeof(shash_node_t));

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
	new_node->next = ht->array[idx];
	new_node->snext = NULL;
	new_node->sprev = NULL;
	return (new_node);
}
/**
 * handle_collision - as the name says.
 * @ht: the hash table.
 * @nd: the node to add.
 * @current: hash table.
*/
void handle_collision(shash_table_t *ht, shash_node_t *nd,
		shash_node_t *current)
{
	if (ht->shead == NULL || strcmp(nd->key, ht->shead->key) < 0)
	{
		nd->snext = ht->shead;
		if (ht->shead != NULL)
			ht->shead->sprev = nd;
		ht->shead = nd;
	}
	else
	{
		current = ht->shead;
		while (current->snext != NULL && strcmp(nd->key,
					current->snext->key) > 0)
			current = current->snext;

		nd->snext = current->snext;
		if (current->snext != NULL)
			current->snext->sprev = nd;
		current->snext = nd;
		nd->sprev = current;
	}
	if (ht->stail == NULL || strcmp(nd->key, ht->stail->key) > 0)
		ht->stail = nd;
}
/**
 * shash_table_set - a function that adds an element to the hash table.
 * @ht: is the hash table you want to add or update the key/value to.
 * @key: is the key. key can not be an empty string.
 * @value: is the value associated with the key.
 * Return: 1 if it succeeded, 0 otherwise
*/
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new_node, *current;

	if (ht == NULL || key == NULL || value == NULL)
	return (0);

	index = key_index((unsigned char *)key, ht->size);
	current = ht->array[index];

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			return (1);
		}
		current = current->next;
	}
	new_node = create_node(key, value, ht, index);
	if (new_node == NULL)
		return (0);
	ht->array[index] = new_node;
	handle_collision(ht, new_node, current);
	return (1);
}
/**
 * shash_table_get - a function that retrieves a value associated with a key.
 * @ht: is the hash table you want to look into.
 * @key:  is the key you are looking for.
 * Return: the value associated with the element,
 * or NULL if key couldn’t be found.
*/
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int idx;
	shash_node_t *node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	idx = key_index((unsigned char *)key, ht->size);
	node = ht->array[idx];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
/**
 * shash_table_print - a function that prints a hash table.
 * @ht: the hash table.
 * print the hash table using the sorted linked list.
*/
void shash_table_print(const shash_table_t *ht)
{
	int print = 0;
	shash_node_t *node;

	if (ht != NULL)
	{
		printf("{");
			node = ht->shead;
			while (node != NULL)
			{
				if (print == 1)
					printf(", ");
				printf("'%s': '%s'", node->key, node->value);
				print = 1;
				node = node->snext;
			}
		printf("}\n");
	}
}
/**
 * shash_table_print_rev - a function that prints a hash table.
 * @ht: the hash table.
 * print the hash tables key/value pairs in reverse order
 * using the sorted linked list.
*/
void shash_table_print_rev(const shash_table_t *ht)
{
	int print = 0;
	shash_node_t *node;

	if (ht != NULL)
	{
		printf("{");
			node = ht->stail;
			while (node != NULL)
			{
				if (print == 1)
					printf(", ");
				printf("'%s': '%s'", node->key, node->value);
				print = 1;
				node = node->sprev;
			}
		printf("}\n");
	}
}
/**
 * shash_table_delete - a function that deletes a hash table.
 * @ht: the hash table.
*/
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int idx = 0;
	shash_node_t *node, *tmp = NULL;

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
		}
		free(ht->array);
		free(ht);
	}
}
