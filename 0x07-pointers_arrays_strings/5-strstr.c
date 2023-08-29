#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring
 *  needle in the string haystack.
 *
 * @haystack: inputs string.
 * @needle: inputs substring to be searched for.
 *
 * Return: Returns a pointer to the beginning of the located substring,
 * or NULL if the substring is not found
*/

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j = 0;

	for (i = 0; haystack[i]; i++)
	{
		if (haystack[i] == needle[j])
		{
			j++;
			if (!needle[j])
				return (haystack + i - j + 1);
		}
		else
		{
			j = 0;
		}
	}
	return (0);
}
