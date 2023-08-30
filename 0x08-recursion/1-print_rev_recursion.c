#include "main.h"

/**
 * _print_rev_recursion - prints a string reverced.
 *
 * @s: inputs string.
*/


void _print_rev_recursion(char *s)
{
	if (!*s)
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
