#include "main.h"

/**
 * flip_bits - number of bits to change is counted
 * from 1
 * @n: 1st number
 * @m: 2nd number
 *
 * Return:bits to chnge
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, numb = 0;
	unsigned long int current;
	unsigned long int xclusive = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		current = xclusive >> x;
		if (current & 1)
			numb++;
	}

	return (numb);
}
