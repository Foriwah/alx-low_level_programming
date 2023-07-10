#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>

/**
 * create_file - create a file
 * @filename: name fo file
 * @text_content: string
 * Return: -1 or 1
 */

int create_file(const char *filename, char *text_content)
{
	int length = 0;
	int len = 0;
	int myfile;

	if (filename == NULL)
		return (-1);
	myfile = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (myfile == -1)
		return (-1);
	if (text_content != NULL)
	{
		len = 0;
		while (text_content[len] != '\0')
			len++;
		length = write(myfile, text_content, len);
	}
	if (close(myfile) == -1 || len != length)
		return (-1);
	return (1);
}
