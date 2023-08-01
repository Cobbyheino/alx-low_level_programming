#include "lists.h"

/**
 * free_listint_safe - empties a linked list
 * @h: points to first node
 *
 * Return: no of elements in the empties list
 */

size_t free_listint_safe(listint_t **h)

{

	size_t length = 0;
	int difference;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		difference = *h - (*h)->next;
		if (difference > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			length++;
		}
		else
		{
			free(*h);
			*h = NULL;
			length++;
			break;
		}
	}

	*h = NULL;

	return (length);
}
