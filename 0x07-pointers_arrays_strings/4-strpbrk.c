#include "main.h"
/**
 * _strpbrk - Entry point searches a string
 * @s: input string to be searched
 *
 * @accept: input set of bytes to be searched
 *
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int ind;

	while (*s)
	{
		for (ind = 0; accept[ind]; ind++)
		{
			if (*s == accept[ind])
				return (s);
		}

		s++;
	}
	return ('\0');
}
