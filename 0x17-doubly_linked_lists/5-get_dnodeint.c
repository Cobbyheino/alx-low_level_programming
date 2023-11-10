#include "lists.h"

/**
 * get_dnodeint_at_index - returns node
 * @head: headptr of list
 * @index: indexofnth to return
 * Return: node address
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int nth;

	while (head)
	{
		if (nth == index)
			return (head);
		head = head->next;
		nth++;
	}
	return (NULL);
}
