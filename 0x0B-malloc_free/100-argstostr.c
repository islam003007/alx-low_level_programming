#include "main.h"

/**
 * argstostr - concatenates all arguments of a program
 *
 * @ac: argc
 * @av: argv
 *
 * Return: pointer to string.
*/

char *argstostr(int ac, char **av)
{
	int i, j;
	int count = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			count++;
		count++;
	}

	str = malloc(sizeof(char) * count + 1);

	if (str == NULL)
		return (NULL);

	count = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			str[count++] = av[i][j];
		str[count++] = '\n';
	}

	str[count] = '\0';

	return (str);
}
