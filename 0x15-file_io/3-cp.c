#include "main.h"

/**
 * make_buff - Creates a buffer and allocates space.
 *
 * @file: File to be copied to.
 *
 * Return: Pointer to allocated memory.
 */
char *make_buff(char *file)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);

	if (buf == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buf);
}

/**
 * close_fd - Closes file descriptors.
 *
 * @fd: File descriptor to be closed.
 */
void close_fd(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies contents of a file to another file.
 *
 * @argc: The number of arguments received by program.
 * @argv: Array of pointers to the arguments.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *buffy;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffy = make_buff(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, buffy, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffy);
			exit(98);
		}
		w = write(to, buffy, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffy);
			exit(99);
		}
		r = read(from, buffy, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buffy);
	close_fd(from);
	close_fd(to);

	return (0);
}

