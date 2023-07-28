#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node to a linked list
 * @head: double pointer to list_t list
 * @str: string to add to node
 *
 * Return: the address of the new element, or NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)

{
	list_t *new;
	unsigned int length = 0;

	while (str[length])
		length++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->length = length;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
