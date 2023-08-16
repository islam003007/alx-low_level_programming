#include "main.h"
/**
 * times_table - prints the 9 times table
*/
void times_table(void)
{
	int i;

	for (i = 0 ; i < 10; i++)
	{
		int j;

		for (j = 0 ; j < 9; j++)
		{
			if (i * j < 10)
			{
				_putchar(i * j + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(i * j / 10 + '0');
				_putchar(i * j % 10 + '0');
				_putchar(',');
				_putchar(' ');
			}
			if (i * (j + 1) < 10)
				_putchar(' ');
		}
		if (i * j < 10)
		{
			_putchar(i * j + '0');
		}
		else
		{
			_putchar(i * j / 10 + '0');
			_putchar(i * j % 10 + '0');
		}
		_putchar('\n');
	}
}
