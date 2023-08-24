#include "main.h"
/**
 * _strncat - concatenates two strings with a maximum of n charachters.
 *
 * @dest: provides destination.
 * @src: provides source.
 * @n: provides max charachters to be copied
 *
 * Return: a pointer to destination
*/
char *_strncat(char *dest, char *src, int n)
{
	int dest_index = 0;
	int src_index = 0;

	while (dest[dest_index])
		dest_index++;
	while (src[src_index] && src_index < n)
	{
		dest[dest_index] = src[src_index];
		src_index++;
		dest_index++;
	}
	dest[dest_index] = '\0';
	return (dest);
}
