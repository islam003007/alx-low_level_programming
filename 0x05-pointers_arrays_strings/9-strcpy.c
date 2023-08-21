#include "main.h"
/**
 * _strcpy - copies a string into another string.
 *
 * @dest: destination of the copy
 * @src: provides input to be copied
 *
 * Return: pointer to the copied char
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
