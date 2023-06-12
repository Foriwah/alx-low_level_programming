#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

#define USAGE "Usage: cp file_from file_to\n"
#define ERR_NR "Error: Can't read from file %s\n"
#define ERR_NW "Error: Can't write to %s\n"
#define ERR_CL "Error: Can't close fd %d\n"
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)
/**
 * main - the main file
 * @ac: argument counter
 * @av: arguments
 */

int main (int ac, char **av)
{
	int f_fd = 0;
	int t_fd = 0;
	char buf[1024];
	ssize_t b;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, USAGE);
		exit(98);
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
		if(write(t_fd, buf, b) != b)
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
	f_fd = close(f_fd);
	t_fd = close(t_fd);
	if (f_fd)
	{
		dprintf(STDERR_FILENO, ERR_CL, f_fd);
		exit(100);
	}
	if (t_fd)
	{
		dprintf(STDERR_FILENO, ERR_CL, t_fd);
		exit(100);
	}
	return (1);
}
