#include "main.h"
/**
 * _strlen - returns the length of a string
 *
 * @s: provides input string
 *
 * Return: the length of a string
*/
int _strlen(char *s)
{
	int i;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
