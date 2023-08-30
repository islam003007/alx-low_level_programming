#include "main.h"
/**
 * wildcmp - compares 2 strings
 *
 * @s1: inputs first string.
 * @s2: inputs second string.
 *
 * Return: 1 if identical, 0 if not.
*/
int wildcmp(char *s1, char *s2)
{
	if (s1[0] == 0 && s2[0] == 0)
		return (1);
	if (s2[0] == '*')
	{
		if (s1[1] == s2[1])
			return (wildcmp(++s1, ++s2));
	}
	if (s1[0] != s2[0])
		return (0);
	else
		return (wildcmp(++s1, ++s2));
}
