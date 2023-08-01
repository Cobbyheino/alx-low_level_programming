#include "lists.h"

/**
 * add_nodeint - it adds a new node at the start of a linked list
 * @head: points to the first node (linked list)
 * @n: to be inserted in the new node
 *
 * Return: points to the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)

{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
