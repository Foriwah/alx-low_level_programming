#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "main.h"
/**
 * append_text_to_file - append to a file
 * @filename: name of file
 * @text_content: text
 * Return: something
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int len = 0;
	int length = 0;
	int myfile;

	if (filename == NULL)
		return (-1);
	myfile = open(filename, O_WRONLY | O_APPEND);
	if (myfile == -1)
		return (-1);
	len = 0;
	while (text_content[len] != '\0')
		len++;
	length = write(myfile, text_content, len);
	if (close(myfile) == -1 || len != length)
		return (-1);
	return (length);
}
