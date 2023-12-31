#include "main.h"
int actual_prime(int n, int i);
/**
 * is_prime_number - if an integer is a prime num
 * @n: number to lookinto
 *
 * Return: 1 if n is prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - sees if number is prime recursive
 * @n:number to evaluate
 *
 * Return
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
