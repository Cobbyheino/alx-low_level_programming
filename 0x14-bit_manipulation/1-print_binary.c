#include "main.h"

/**
 * print_binary - this print equivalent binary of a decimal
 * @n: binary number to print
 *
 */

void print_binary(unsigned long int n)

{
	int x, numb = 0;
	unsigned long int curnt;

	for (x = 63; x >= 0; x--)
	{
		curnt = n >> x;

		if (curnt & 1)
		{
			_putchar('1');
			numb++;
		}
		else if (numb)
			_putchar('0');
	}
	if (!numb)
		_putchar('0');
}
