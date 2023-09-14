#include "variadic_functions.h"

/**
 * print_strings - prints strings.
 *
 * @separator: inputs string to print between strings.
 * @n: inputs number of variable arguments.
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list v;
	unsigned int i;

	va_start(v, n);
	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		char *s = va_arg(v, char*);

		if (s == NULL)
			s = "(nil)";
		printf("%s", s);
		if (i != n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(v);
}
