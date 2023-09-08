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
 * string_nconcat - concatenates 2 strings.
 *
 * @s1: inputs first string.
 * @s2: inputs second string.
 * @n: number of bytes to be concatenated.
 *
 * Return: pointer to concatenated string.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_length;
	unsigned int s2_length;
	unsigned int i;
	unsigned int j;

	char *str;

	s1_length = _strlen(s1);
	s2_length = _strlen(s2);

	if (n >= s2_length)
		n = s2_length;

	str = malloc(sizeof(char) * (s1_length + n + 1));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < s1_length; i++)
		str[i] = s1[i];
	for (j = 0; j < n ; j++)
		str[j + i] = s2[j];

	str[j + i] = '\0';

	return (str);
}
