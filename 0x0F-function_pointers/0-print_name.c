#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - This prints a name using pointer to function
 * @name: the string to be printed
 * @f: pointer to a function that prints a name.
 * Return: 0
 **/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
