#include "main.h"
/**
 * _strlen - returns the length of a string
 * @b: the string
 * Return: the length
 */
int _strlen(char *b)
{
	int longi = 0;

	while (*b != '\0')
	{
		longi++;
		b++;
	}

	return (longi);
}
