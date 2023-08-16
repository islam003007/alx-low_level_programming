#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: checks value
 *
 * Return: last digit of a number
*/

int print_last_digit(int n)
{
	n = n % 10;
	if (n < 0)
		n = n * -1;
	_putchar(n + '0');
	return (n);
}
