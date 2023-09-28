#include "main.h"

/**
 * binary_to_uint - changes binary num to unsigned int
 * @b: string containg the binary number
 *
 * Return: changed unsigned int number
 */

unsigned int binary_to_uint(const char *b)

{
	int x;
	unsigned int dec_VAL = 0;

	if (!b)
		return (0);
	for (x = 0; b[x]; x++)
	{
		if (b[x] < '0' || b[x] > '1')
			return (0);
		dec_VAL = 2 * dec_VAL + (b[x] - '0');
	}

	return (dec_VAL);
}
