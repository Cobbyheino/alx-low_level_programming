#include "lists.h"

/**
 * free_dlistint - frees list
 * @head: ptr to head of list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *new;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;
	while ((new = head) != NULL)
	{
		head = head->next;
		free(new);
	}
}
