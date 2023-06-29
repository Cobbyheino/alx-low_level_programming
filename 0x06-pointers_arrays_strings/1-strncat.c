#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: nput value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int length;
	int j;

	length = 0;
	while (dest[length] != '\0')
	{
		length++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
	dest[length] = src[j];
	length++;
	j++;
	}
	dest[length] = '\0';
	return (dest);
}

