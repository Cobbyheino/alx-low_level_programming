#include "main.h"

/**
 * clear_bit - sets bit to 0
 * @n: points to the no to be changed
 * @index: index of bit to be cleared
 *
 * Return: success 1,failure -1
 */

int clear_bit(unsigned long int *n, unsigned int index)

{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
