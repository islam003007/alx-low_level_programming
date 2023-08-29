#include "main.h"
/**
 * _memset - fills memrory with constants byte
 *
 * @s: inputs pointer to memory
 * @b: inputs byte to be filled
 * @n: inputs number of bytes to be filled
 *
 * Return: pointer to memory
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
