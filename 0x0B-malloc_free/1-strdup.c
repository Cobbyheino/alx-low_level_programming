#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - this duplicates to the new memory space location
 * @str: for char
 * Return: 0
 *
 */
char *_strdup(char *str)
{
	char *aaa;
	int a, r = 0;

	if (str == NULL)
		return (NULL);
	a = 0;
	while (str[a] != '\0')
		a++;

	aaa = malloc(sizeof(char) * (a + 1));

	if (aaa == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		aaa[r] = str[r];

	return (aaa);
}
