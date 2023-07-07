#include <stdio.h>
#include "main.h"

/**
 * main - this prints the number of arguments entered to the program
 * @argc: nos of arguments
 * @argv: the array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
