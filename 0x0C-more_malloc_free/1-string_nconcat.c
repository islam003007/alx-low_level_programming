#include "main.h"

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

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (s1_length = 0; s1[s1_length]; s1_length++)
		;
	for (s2_length = 0; s2[s2_length]; s2_length++)
		;

	str = malloc(sizeof(char) * (s1_length + s2_length + 1));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < s1_length; i++)
		str[i] = s1[i];
	for (j = 0; j < s2_length && j < n ; j++)
		str[i++] = s2[j];

	str[i] = '\0';

	return (str);
}
