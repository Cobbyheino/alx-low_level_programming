#include "lists.h"

/**
 * get_nodeint_at_index - this returns the a node
 * at particular index in linked list
 * @head: the first node in a linked list
 * @index: the index of the node to be returned.
 *
 * Return: points to the node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)

{

	unsigned int ind = 0;
	listint_t *temp = head;

	while (temp && ind < index)
	{
		temp = temp->next;
		ind++;
	}

	return (temp ? temp : NULL);
}
