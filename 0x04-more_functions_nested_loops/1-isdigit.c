#include "main.h"
/**
 * _isdigit - checks if character is uppercase
 *
 * @c: reads input
 *
 * Return: 1 (digit), 0 (otherwise)
 **/
int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	return (0);
}
