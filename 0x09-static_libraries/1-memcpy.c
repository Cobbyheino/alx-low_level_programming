#include "main.h"
/**
 *_memcpy - this is a function that copies memory area
 *@dest: to store memory
 *@src: copied memory
 *@n: bytes in numbers
 *
 *Return: copied memory with byte changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = n;

	for (; a < b; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
