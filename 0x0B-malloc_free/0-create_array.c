#include "main.h"
#include <stdlib.h>
/**
 * create_array - this creates array of size and assign the char c
 * @size: the size of array
 * @c: char to be assigned
 * Description: create array of size size and assign char c
 * Return: pointer to array, if failed then NULL
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int a;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
		str[a] = c;
	return (str);
}
