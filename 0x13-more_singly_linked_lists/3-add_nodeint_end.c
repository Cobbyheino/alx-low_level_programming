#include "lists.h"

/**
 * add_nodeint_end - this adds node at the end of the linked list
 * @head: points to the first element
 * @n: the data to input in new element
 *
 * Return: points to the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)

{
	listint_t *newnode;
	listint_t *temp = *head;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = newnode;

	return (newnode);
}
