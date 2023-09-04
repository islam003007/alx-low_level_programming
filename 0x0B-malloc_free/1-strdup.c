#include "main.h"

/**
 * _strdup - allocates space in memory and copies string into it.
 *
 * @str: inputs string
 *
 * Return: pointer to the string.
*/

char *_strdup(char *str)
{
	char *s;
	int i = 0;
	int j;


	while (str[i++])
	;

	s = malloc(sizeof(char) * i);

	if (s == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
		s[j] = str[j];

	return (s);
}
