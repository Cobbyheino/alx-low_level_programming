#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocates the required memory using malloc
 * @b: size of bytes to allocate in memory
 *
 * Return: returns pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *m;

	m = malloc(b);

	if (m == NULL)
		exit(98);

	return (m);
}
