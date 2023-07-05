#include "main.h"
/**
 * factorial - returns factorial of a number
 * @n: num to find factorial
 *
 * Return: factorial of number
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	return (n * factorial(n - 1));
}
