#include "main.h"

/**
 * read_textfile - read a text file
 * @filename: file name;
 * @letters: number of letters to print
 * Return: 0 or a value
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int myfile;
	char *buff;
	int len, w_chars;

	if (filename == NULL || letters == 0)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);
	myfile = open(filename, O_RDONLY);
	if (myfile == -1)
	{
		free(buff);
		return (0);
	}
	len = read(myfile, buff, letters);
	if (len == -1)
	{
		free(buff);
		close(myfile);
		return (0);
	}
	w_chars = write(STDOUT_FILENO, buff, len);
	free(buff);
	close(myfile);
	if (w_chars != len)
		return (0);
	return (len);
}
