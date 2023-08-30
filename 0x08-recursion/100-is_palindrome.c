#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 *
 * @s: inputs string.
 *
 * Return: length of a string
*/

int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * palindrome - checks if string is palindrome .
 *
 * @s: inputs string.
 * @i: inputs string length.
 *
 * Return: 1 if string is palindrome , 0 if not.
*/

int palindrome(char *s, int i)
{
	if (i <= 0)
		return (1);
	if (s[0] != s[i])
		return (0);
	else
		return (palindrome(++s, i - 2));

}

/**
 * is_palindrome - checks if string is palindrome .
 *
 * @s: inputs string.
 *
 * Return: 1 if string is palindrome , 0 if not.
*/

int is_palindrome(char *s)
{
	return (palindrome(s, _strlen_recursion(s) - 1));
}
