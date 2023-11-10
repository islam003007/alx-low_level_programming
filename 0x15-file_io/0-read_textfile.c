#include "main.h"

/**
 * read_textfile - reads a text file then prints it.
 *
 * @filename: inputs file pathname.
 * @letters: number of letters to read or write.
 *
 * Return: the actual read characters.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	ssize_t i;
	char *buffer;

	if (!filename || !letters)
		return (0);

	buffer = malloc(letters);

	if (!buffer)
		return (0);

	fp = open(filename, O_RDONLY);

	if (fp == -1)
	{
		free(buffer);
		return (0);
	}

	i = read(fp, buffer, letters);

	if (i == -1)
	{
		free(buffer);
		return (0);
	}

	i = write(1, buffer, letters);

	if (i == -1)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(fp);

	return (i);

}
