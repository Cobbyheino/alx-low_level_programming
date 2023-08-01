#include "lists.h"

/**
 * print_listint - prints all elements in a linked list
 * @h: prints linked list of type listint_t
 *
 * Return: the number nodes
 */

size_t print_listint(const listint_t *h)

{
	size_t numb = 0;


	while (h)
	{
		printf("%d\n", h->n);
		numb++;
		h = h->next;
	}

	return (numb);
}
