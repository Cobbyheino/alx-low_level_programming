#include "function_pointers.h"
/**
 * int_index - searches for an interger in an array and place if comparison
 * = true, else -1
 * @array: array of integers to searched
 * @size: length of elements in array
 * @cmp: a pointer to the function to be used for comparison
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int ind;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (ind = 0; ind < size; ind++)
	{
		if (cmp(array[ind]))
			return (ind);
	}
	return (-1);
}
