#include "main.h"
/**
 * print_number - prints a number
 *
 * @n: reads input
*/
void print_number(int n)
{
	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}
	if (n > 9)
		print_number(n / 10);
	_putchar(n % 10 + '0');
}
