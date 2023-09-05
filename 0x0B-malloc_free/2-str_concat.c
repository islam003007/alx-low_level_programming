#include "main.h"

/**
 * str_concat - concatenates 2 strings.
 *
 * @s1: inputs string.
 * @s2: inputs string.
 *
 * Return: pointer to concatenated string.
*/

char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int counter;
	char *str;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i++])
		;

	while (s2[j++])
		;

	str = malloc(sizeof(char) * (i + j - 1));

	if (str == NULL)
		return (NULL);

	for (counter = 0; counter < i; counter++)
		str[counter] = s1[counter];

	for (counter = 0; counter < j; counter++)
		str[counter + i - 1] = s2[counter];

	return (str);

}
