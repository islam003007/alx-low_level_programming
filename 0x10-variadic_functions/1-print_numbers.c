#include "variadic_functions.h"

/**
 * print_numbers - prints numbers.
 *
 * @separator: string to prints between numbers.
 * @n: number of variable arguments to pass.
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list v;
	unsigned int i;

	va_start(v, n);
	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(v, int));
		if (i != n - 1)
			printf("%s", separator);
	}

	printf("\n");

	va_end(v);
}
