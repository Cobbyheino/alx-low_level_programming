#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * close_file - Closes the file.
 * @fd: file to be closed.
 *
 */

void close_file(int fd)

{
	int cls;

	cls = close(fd);

	if (cls == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - puts 1024 bytes to the buffer.
 * @file: name of file buffer to store chars.
 *
 * Return: points to new buffer.
 *
 */

char *create_buffer(char *file)

{

	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * main - Copies  to another file.
 * @argc: The number of arguments of program.
 * @argv: pointer points to the arguments.
 *
 * Return: 0 for success.
 */

int main(int argc, char *argv[])

{
	int f0, f1, reed, wrte;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	f0 = open(argv[1], O_RDONLY);
	reed = read(f0, buffer, 1024);
	f1 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (f0 == -1 || reed == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		wrte = write(f1, buffer, reed);
		if (f1 == -1 || wrte == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		reed = read(f0, buffer, 1024);
		f1 = open(argv[2], O_WRONLY | O_APPEND);

	} while (reed > 0);

	free(buffer);
	close_file(f0);
	close_file(f1);

	return (0);

}
