#include "variadic_functions.h"

/**
 * sum_them_all - sums numbers.
 *
 * @n: inputs number of variable arguments.
 *
 * Return: sum of all numbers.
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list v;
	unsigned int i;
	int sum = 0;

	va_start(v, n);

	for (i = 0; i < n; i++)
		sum += va_arg(v, int);
	va_end(v);

	return (sum);
}
