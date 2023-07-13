#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: start of int and minimum range of values stored
 * @max: maximum range of values stored and number of elements
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *m;
	int i, length;

	if (min > max)
		return (NULL);

	length = max - min + 1;

	m = malloc(sizeof(int) * length);

	if (m == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		m[i] = min++;

	return (m);
}
