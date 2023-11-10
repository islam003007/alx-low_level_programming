#include "main.h"

/**
 * main - entry point.
 *
 * @argc: argc.
 * @argv: argv.
 *
 * Return: 0.
*/

int main(int argc, char **argv)
{
	int file_from, file_to, r, w;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	if (file_from < 0)
	{
		exit(98);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", argv[1]);
	}

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to < 0)
	{
		exit(99);
		dprintf(STDERR_FILENO, "Error: Can't write to %s", argv[2]);
	}

	while ((r = read(file_from, buffer, 1024)) > 0)
	{
	
		if ((w = write(file_to, buffer, r)) < 0)
		{
			exit(99);
			dprintf(STDERR_FILENO, "Error: Can't write to %s", argv[2]);
		}
	
	}
	if (close(file_from) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i", file_from);
		exit(100);
	}
	if (close(file_to) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i", file_to);
		exit(100);
	}

	return (0);
}
