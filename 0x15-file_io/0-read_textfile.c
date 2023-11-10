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
	int fp, i;
	char buffer[9999];

	fp = open(filename, O_RDONLY);

	if (fp == -1)
		return (0);

	i = read(fp, buffer, letters);

	if (i == -1)
		return (0);

	i = write(1, buffer, letters);

	if (i == -1)
		return (0);

	close(fp);

	return (i);

}
