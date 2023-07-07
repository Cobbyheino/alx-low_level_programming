#include <stdio.h>
#include "main.h"

/**
 * main - this prints the number of arguments gotten
 * @argc: nos of arguments
 * @argv: the array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}

	return (0);
}
