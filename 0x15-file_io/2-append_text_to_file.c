#include "main.h"

/**
 * append_text_to_file - append to a file
 * @filename: name of file
 * @text_content: text
 * Return: something
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int letters;
	int rwr;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		for (letters = 0; text_content[letters]; letters++)
			;
		rwr = write(fd, text_content, letters);
		if (rwr == -1)
			return (-1);
	}
	close(fd);
	return (1);
}

