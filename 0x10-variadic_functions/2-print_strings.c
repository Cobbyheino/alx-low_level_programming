#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - Prints strings.
 * @separator: The string to separate strings.
 * @n: The number of parameters passed to the function.
 * Description: If separator == NULL,not printed.
 */

void print_strings(const char *separator, const unsigned int n, ...)

{
	va_list list;
	char *str;
	unsigned int ind;

	va_start(list, n);

	for (ind = 0; ind < n; ind++)
	{
		str = va_arg(list, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (ind != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(list);
}
