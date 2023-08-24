#include "main.h"
/**
 * print_number - prints an integer from a string.
 *
 * @n: provides input
*/
void print_number(int n)
{
	unsigned int temp;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	temp = n;
	if (temp / 10)
		print_number(temp / 10);

	_putchar(temp % 10 + '0');
}
