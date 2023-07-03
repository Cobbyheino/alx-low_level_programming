#include "main.h"
/**
 * _strchr - Entry point locates character
 * @s: input string to be searched
 * @c: input character to be located
 *
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int ind;

	for (ind = 0; s[ind] >= '\0'; ind++)
	{
		if (s[ind] == c)
			return (s + ind);
	}
	return (0);
}

