#include "lists.h"

/**
 * pop_listint - removes the head node of the linked list
 * @head: points to first element in a linked list
 *
 * Return: data that was deleted,
 *
 */

int pop_listint(listint_t **head)

{
	listint_t *temp;
	int number;

	if (!head || !*head)
		return (0);

	number = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (number);
}
