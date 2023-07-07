#include "main.h"
/**
 * _strcat - two strings
 * @dest: start input value
 * @src: input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int x;
	int r;

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	r = 0;
	while (src[r] != '\0')
	{
		dest[x] = src[r];
		x++;
		r++;
	}

	dest[x] = '\0';
	return (dest);
}
