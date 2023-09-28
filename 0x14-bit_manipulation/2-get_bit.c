#include "main.h"

/**
 * get_bit - returns the value of a bit @ an indx ina deci num
 * @n: search numb
 * @index: the indx of bit
 *
 * Return: the value of bit
 *
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bitVALUE;

	if (index > 63)
		return (-1);

	bitVALUE = (n >> index) & 1;

	return (bitVALUE);
}
