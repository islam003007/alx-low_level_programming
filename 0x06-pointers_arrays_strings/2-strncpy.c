#include "main.h"
/**
 * _strncpy - copies a string into another string
 *
 * @dest: provides destination.
 * @src: provides source.
 * @n: provides max charachters to be copied
 *
 * Return: a pointer to destination
*/
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0;

	while (src[index] && index < n)
	{
		dest[index] = src[index];
		index++;
	}
	if (!src[index])
	{
		dest[index] = '\0';
	}
	return (dest);
}
