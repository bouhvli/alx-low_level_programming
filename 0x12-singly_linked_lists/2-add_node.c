#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - a function that adds a new node at the
 * beginning of a list_t list.
 * @head: the pointer to the list.
 * @str: the value of the new item
 *
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	temp = malloc(sizeof(list_t *));
	if  (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	temp->len = strlen(str);
	temp->next = *head;
	*head = temp;

	return (*head);
}
