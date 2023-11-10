#include "main.h"

/**
 * _strlen - strlen
 *
 * @str: inputs string.
 *
 * Return: string length.
*/

unsigned int _strlen(char *str)
{
	unsigned int i;

	if (str == NULL || str[0] == '\0')
		return (0);

	for (i = 0; str[i]; i++)
		;

	return (i);
}

/**
 * append_text_to_file - appends text at the end of the file.
 *
 * @filename: inputs file pathname.
 * @text_content: inputs strings to append.
 *
 * Return: 1 on success or -1 on failure.
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len;

	if (!filename)
		return (-1);

	o = open(filename, O_WRONLY | O_APPEND);

	len = _strlen(text_content);

	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	return (1);
}
