#include "lists.h"

/**
 * insert_nodeint_at_index - inputs a new node at a given position
 *
 * @head: points to the first node in the linked list
 * @idx: index to add new node
 * @n: the data to be placed in the new node
 *
 * Return: points to the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)

{

	unsigned int ind;
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (ind = 0; temp && ind < idx; ind++)
	{
		if (ind == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}
