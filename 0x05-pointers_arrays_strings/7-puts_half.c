#include "main.h"
/**
 * puts_half - prints a the second half of a string followed by a new line
 *
 *
 * @str: provides input string
 *
*/
void puts_half(char *str)
{
	int i = 0;
	int j;

	while (str[i])
	{
		i++;
	}
	j = (i + 1) / 2;
	while (str[j])
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
