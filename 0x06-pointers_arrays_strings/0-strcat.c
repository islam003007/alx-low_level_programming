#include "main.h"
/**
 * _strcat - concatenates two strings
 *
 * @dest: provides destination
 * @src: provides source
 *
 * Return: a pointer to destination
*/
char *_strcat(char *dest, char *src)
{
	int dest_index = 0;
	int src_index = 0;

	while (dest[dest_index])
		dest_index++;
	while (src[src_index])
	{
		dest[dest_index] = src[src_index];
		src_index++;
		dest_index++;
	}
	return (dest);
}
