#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- function that reads a text file
 * and prints to STDOUT.
 * @filename: this is the file name
 * @letters: number of letters
 * Return: number of letters or 0 if function fails
 */

ssize_t read_textfile(const char *filename, size_t letters)

{

	char *buffer;
	ssize_t fd;
	ssize_t rite;
	ssize_t reed;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	reed = read(fd, buffer, letters);
	rite = write(STDOUT_FILENO, buffer, reed);

	free(buffer);
	close(fd);
	return (rite);
}
