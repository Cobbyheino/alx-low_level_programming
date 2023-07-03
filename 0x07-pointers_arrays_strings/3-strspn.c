#include "main.h"
/**
 * _strspn - Entry point length of a prefix substrig
 * @s: input to be searched
 *
 * @accept: input to be seen
 *
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int byts = 0;
	int ind;

	while (*s)
	{
		for (ind = 0; accept[ind]; ind++)
		{
			if (*s == accept[ind])
			{
				byts++;
				break;
			}
			else if (accept[ind + 1] == '\0')
				return (byts);
		}

		s++;
	}

	return (byts);
}


