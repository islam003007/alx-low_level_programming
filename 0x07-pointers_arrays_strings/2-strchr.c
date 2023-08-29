#include "main.h"
/**
 * _strchr - locates a character in a string
 *
 * @s: inputs string.
 * @c: inputs character
 *
 * Return: pointer to the first occurrence of the character
 * or NULL if character is not found.
*/
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (s);
}
