#include "variadic_functions.h"

/**
 * print_all - prints anything.
 *
 * @format: string list of types of arguments passed.
*/
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	va_list v;
	char *str;

	va_start(v, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
					printf("%c", va_arg(v, int));
					break;
			case 'i':
					printf("%i", va_arg(v, int));
					break;
			case 'f':
					printf("%f", va_arg(v, double));
					break;
			case 's':
					str = va_arg(v, char *);
					if (str == NULL)
						str = "(nil)";
					printf("%s", str);
					break;
			default:
					i++;
					continue;
		}

		if (format[i + 1])
			printf(", ");

		i++;
	}

	printf("\n");
	va_end(v);
}
