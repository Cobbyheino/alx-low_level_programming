#include "lists.h"

/**
 * listint_len - returns elements in a linked lists
 * @h: traverses linked list of type listint_t
 *
 * Return: number of the nodes
 */

size_t listint_len(const listint_t *h)

{
	size_t numb = 0;


	while (h)
	{
		numb++;
		h = h->next;
	}

	return (numb);
}
