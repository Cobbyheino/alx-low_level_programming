#include "main.h"
/**
 * _strcmp - compare string values
 * @s1: input value
 * @s2: input value
 *
 * Return: s1[i] - s2[i]
 */
int _strcmp(char *s1, char *s2)
{
	int c, cv;

	c = 0;
	while (s1[c] == s2[c] && s1[c] != '\0')
	{
		c++;
	}

	cv = s1[c] - s2[c];
	return (cv);
}
