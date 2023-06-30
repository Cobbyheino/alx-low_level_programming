#include "main.h"
#include <stdio.h>

/**
 * rot13 - encoder rot13
 * @s: pointer to string params
 *
 * Return: *s
 */

char *rot13(char *s)
{
	int rot;
	int j;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (rot = 0; s[rot] != '\0'; rot++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[rot] == data1[j])
			{
				s[rot] = datarot[j];
				break;
			}
		}
	}
	return (s);
}
