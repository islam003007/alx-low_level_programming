#include "main.h"
/**
 * print_number - prints a number
 *
 * @n: reads input
*/
void print_number(int n)
{
	unsigned int x = n;

	if (x < 0)
	{
		x *= -1;
		_putchar('-');
	}
	if (x > 9)
		print_number(x / 10);
	_putchar(x % 10 + '0');
}
