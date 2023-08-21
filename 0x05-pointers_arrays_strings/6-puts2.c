#include "main.h"
/**
 * puts2 - prints a every other charachter from a string followed by a new line
 *
 *
 * @str: provides input string
 *
*/
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}
