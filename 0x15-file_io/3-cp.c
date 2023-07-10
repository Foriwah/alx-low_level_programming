#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>

#define USAGE "Usage: cp file_from file_to\n"
#define ERR_NR "Error: Can't read from file %s\n"
#define ERR_NW "Error: Can't write to %s\n"
#define ERR_CL "Error: Can't close fd %d\n"
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

/**
 * _close - close file
 * @fd: file descriptor
 * Return: something
 */

int _close(int fd)
{
	int err;

	err = close(fd);
	if (err == -1)
	{
		dprintf(STDERR_FILENO, ERR_CL, fd);
		exit(100);
	}
	return (0);
}

/**
 * main - the main file
 * @ac: argument counter
 * @av: arguments
 * Return: return something
 */

int main(int ac, char **av)
{
	int f_fd = 0, t_fd = 0, err = 0;
	char buf[1024];
	ssize_t b;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, USAGE);
		exit(97);
	}
	f_fd = open(av[1], O_RDONLY);
	if (f_fd == -1)
	{
		dprintf(STDERR_FILENO, ERR_NR, av[1]);
		exit(98);
	}
	t_fd = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
	if (t_fd == -1)
	{
		dprintf(STDERR_FILENO, ERR_NW, av[2]);
		exit(99);
	}
	while ((b = read(f_fd, buf, 1024)) > 0)
	{
		if (write(t_fd, buf, b) != b)
		{
			dprintf(STDERR_FILENO, ERR_NW, av[2]);
			exit(99);
		}
	}
	if (b == -1)
	{
		dprintf(STDERR_FILENO, ERR_NR, av[1]);
		exit(98);
	}
	err = _close(f_fd);
	err += _close(t_fd);
	if (err != 0)
		return (100);
	return (0);
}
