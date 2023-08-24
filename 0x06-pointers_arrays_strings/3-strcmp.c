#include "main.h"
/**
 * _strcmp - compares between two strings.
 *
 * @s1: provides first input.
 * @s2: provides second input.
 *
 * Return: an integer less than, equal to, or greater than zero if s1 is found
 * , respectively, to be less than, to match, or be greater than s2.
*/
int _strcmp(char *s1, char *s2)
{
	int result = 0;

	while (*s1 != *s2)
	{
		result = *s1 - *s2;
		s1++;
		s2++;
	}
	return (result);
}
