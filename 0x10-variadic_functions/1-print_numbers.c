#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers given as parameters.
 * @separator: The string to be printed between numbers.
 * @n: no of integers given to the function.
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)

{
	va_list list;
	unsigned int ind;

	va_start(list, n);

	for (ind = 0; ind < n; ind++)
	{
		printf("%d", va_arg(list, int));

		if (ind != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(list);
}
