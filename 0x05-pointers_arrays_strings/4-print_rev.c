#include "main.h"
/**
 * print_rev - prints string in reverse
 * @s: used string
 * return: 0
 */
void print_rev(char *s)
{
	int start = 0;

	while (s[start])
		start++;
	while (start--)
		_putchar(s[start]);
	_putchar('\n');
}

