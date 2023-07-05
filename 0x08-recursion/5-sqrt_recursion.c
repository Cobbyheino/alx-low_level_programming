#include "main.h"
/**
 * helper the function - check if sqrt of no exists
 * @num: number
 * @pSqrt: possible sqrt of number.
 *
 * Return: sqrt of num -1 for error.
 */
int helpertheFunction(int num, int pSqrt)
{
	if ((pSqrt * pSqrt) == num)
	{
		return (pSqrt);
	}
	else
	{
		if ((pSqrt * pSqrt) > num)
			return (-1);
		else
			return (helpertheFunction(num, pSqrt + 1));
	}
}

/**
 * _sqrt_recursion - recurses to find the natural
 * square root of a number
 * @n: number to calculate the sqaure root of
 * -1 if n does not have a natural sqrt
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (helpertheFunction(n, 0));
}
