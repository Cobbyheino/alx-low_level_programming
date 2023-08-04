#include "main.h"

/**
 * get_bit - returns the value of a bit at an index in a decimal number
 * @n: search for numb
 * @index: the index of bit
 *
 * Return: the value of bit
 *
 */

int get_bit(unsigned long int n, unsigned int index)

{
	int bitValue;

	if (index > 63)
		return (-1);

	bitValue = (n >> index) & 1;

	return (bitValue);
}
