#include "main.h"

/**
 * set_bit - sets bit at an index to value 1
 * @n: points to the no tobe changed
 * @index: index of bit(1)
 * Return: succes 1, failure -1
 *
 */
int set_bit(unsigned long int *n, unsigned int index)

{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
