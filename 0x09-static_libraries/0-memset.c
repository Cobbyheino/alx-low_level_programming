#include "main.h"
/**
 * _memset - a single block of memory is filled with a specific value
 * @s: beginning of memory address to be filled
 * @b: expected value
 * @n: number to be changed
 *
 * Return: array to be changed for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int x = 0;

	for (; n > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}
