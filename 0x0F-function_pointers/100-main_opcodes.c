#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints opcodes by its own
 * @argc: number of arguments given
 * @argv: array of arguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int bytes, ind;
	char *ar;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ar = (char *)main;

	for (ind = 0; ind < bytes; ind++)
	{
		if (ind == bytes - 1)
		{
			printf("%02hhx\n", ar[ind]);
			break;
		}
		printf("%02hhx ", ar[ind]);
	}
	return (0);
}
