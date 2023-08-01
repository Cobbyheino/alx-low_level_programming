#include "lists.h"

/**
 * reverse_listint - this reverses a linked list
 * @head: points to the first node
 *
 * Return: points to the first node
 */

listint_t *reverse_listint(listint_t **head)

{

	listint_t *next = NULL;
	listint_t *prev = NULL;

	while (*head)
	{

		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
