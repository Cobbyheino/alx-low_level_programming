#include "main.h"
/**
 * _strncat - two strings are concaneted
 * not mor than n bytes from src
 * @dest: start input value
 * @src: start input value
 * @n: enteredinput value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (a < n && src[b] != '\0')
	{
	dest[a] = src[b];
	a++;
	b++;
	}
	dest[a] = '\0';
	return (dest);
}
