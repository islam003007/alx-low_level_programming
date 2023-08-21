#include "main.h"
/**
 * print_rev - reverses a string and prints it to the console
 *
 * @s: provides input string
*/
void print_rev(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
	}
	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
