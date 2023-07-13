#include <stdlib.h>
#include "main.h"

/**
 * *_memset - occupies memory with a constant byte
 * @s: pointer to place constant
 * @b: constant to copy
 * @n: maximum bytes to used to copy b
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}

/**
 * *_calloc - allocates the memory for an array using malloc
 * @nmemb: length of the array
 * @size: size of each element
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *m;

	if (nmemb == 0 || size == 0)
		return (NULL);

	m = malloc(size * nmemb);

	if (m == NULL)
		return (NULL);

	_memset(m, 0, nmemb * size);

	return (m);
}
