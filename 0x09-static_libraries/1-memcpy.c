#include "main.h"
/**
 * _memcpy - copies memory area into another memory area.
 *
 * @dest: inputs pointer to memory destination
 * @src: inputs pointer to memory source
 * @n: inputs number of bytes to be copied.
 *
 * Return: pointer to memory destination.
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
