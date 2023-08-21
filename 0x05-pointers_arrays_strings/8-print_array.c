#include "main.h"
/**
 * print_array - prints n elements of an array
 *
 * @a: inputs an array
 * @n: inputs the number of elements to print
*/
void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i <= n; i++)
	{
		_putchar(a[i]);
	}
}
