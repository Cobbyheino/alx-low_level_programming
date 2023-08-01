#include "lists.h"

/**
 * delete_nodeint_at_index - removes a node at a particular
 * indx in a linked list
 * @head: points to the first element in the list
 * @index: indx of node to remove
 *
 * Return: 1 (Success), or -1 (Fail)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)

{

	listint_t *temp = *head;
	listint_t *current = NULL;
	unsigned int ind = 0;

	if (*head == NULL)
		return (-1);


	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}


	while (ind < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		ind++;
	}


	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}
