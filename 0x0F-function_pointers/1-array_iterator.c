#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints a function as a parameter on each array element.
 * @array: the array
 * @size: the length of element to print
 * @action: pointer to print in the function
 * Return: 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL || action == NULL)
		return;

	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}
