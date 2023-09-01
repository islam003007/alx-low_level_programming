#include "main.h"
/**
 * _isupper - checks if character is uppercase
 *
 * @c: reads input
 *
 * Return: 1 (uppercase), 0 (otherwise)
 **/
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	return (0);
}
