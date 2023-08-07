#include "main.h"

/**
 * create_file - Creates a file with passed text content.
 * @filename: name of the file to create.
 * @text_content: A  null string to write to file.
 *
 * Return: function fails - -1 Succes 1.
 */

int create_file(const char *filename, char *text_content)

{

	int file, rite, count = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (count = 0; text_content[count];)
			count++;
	}

	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	rite = write(file, text_content, count);

	if (file == -1 || rite == -1)
		return (-1);

	close(file);

	return (1);
}
