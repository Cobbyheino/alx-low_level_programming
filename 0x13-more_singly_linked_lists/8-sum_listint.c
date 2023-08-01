#include "lists.h"

/**
 * sum_listint - finds the sum of all the data in listint_t
 * @head: the first node
 *
 * Return: sum
 */

int sum_listint(listint_t *head)

{

	int sumof = 0;
	listint_t *temp = head;

	while (temp)
	{
		sumof += temp->n;
		temp = temp->next;
	}

	return (sumof);
}
