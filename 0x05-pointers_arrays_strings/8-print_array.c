#include "main.h"
/**
 * print_array - prints n elements of an array
 *
 * @a: inputs an array
 * @n: inputs the number of elements to print
*/
void print_array(int *a, int n)
{
	int i;

	_putchar(a[0]);
	for (i = 1; i <= n; i++)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(a[i]);
	}
	_putchar('\n');
}
