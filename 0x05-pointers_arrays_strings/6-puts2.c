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
	int i = 0;

	while (str[i])
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
