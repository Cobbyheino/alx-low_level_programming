#include "main.h"

/**
 * append_text_to_file - Appends the text to a file.
 * @filename: name of the file.
 * @text_content: text to add to the file.
 *
 * Return: success- 1 failure- -1.
 */

int append_text_to_file(const char *filename, char *text_content)

{

	int opn, rite, count = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (count = 0; text_content[count];)
			count++;
	}

	opn = open(filename, O_WRONLY | O_APPEND);
	rite = write(opn, text_content, count);

	if (opn == -1 || rite == -1)
		return (-1);

	close(opn);

	return (1);
}
