#include "main.h"
/**
 * print_to_98 - print all natural numbers leading to 98
 *
 * @n: reads input
*/
void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i > 98; i--)
		{
			if (i > 99)
			{
				_putchar(i / 100 + '0');
				_putchar((i / 10) % 10 + '0');
				_putchar(i % 10 + '0');
			}
			else
			{
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
			}
			_putchar(',');
			_putchar(' ');
		}
	}
	else
	{
		int flag;

		flag = 0;
		for (i = n; i < 98; i++)
		{
			if (i < 0)
			{
				i = i * -1;
				_putchar('-');
				flag = 1;
			}
			if (i < 10)
			{
				_putchar(i + '0');
			}
			else if (i < 100)
			{
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
			}
			else
			{
				_putchar(i / 100 + '0');
				_putchar((i / 10) % 10 + '0');
				_putchar(i % 10 + '0');
			}
			_putchar(',');
			_putchar(' ');
			if (flag)
			{
				i = i * -1;
				flag = 0;
			}
		}
	}
	 _putchar('9');
	 _putchar('8');
	 _putchar('\n');

}
