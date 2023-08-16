#include "main.h"
/**
 * print_times_table - prints times table based on input
 *
 * @n: reads input
*/
void print_times_table(int n)
{
	int i;

	if (n < 0 || n > 15)
		return;
	for (i = 0; i <= n; i++)
	{
		int j;

		_putchar('0');
		for (j = 1; j <= n; j++)
		{
			int num;

			num = i * j;
			_putchar(',');
			_putchar(' ');
			if (num > 99)
			{
				_putchar(num / 100 + '0');
				_putchar(num / 10 % 10 + '0');
				_putchar(num % 10 + '0');
			}
			else if (num > 9)
			{
				_putchar(' ');
				_putchar(num / 10 + '0');
				_putchar(num % 10 + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(num + '0');
			}
		}
	_putchar('\n');
	}
}
