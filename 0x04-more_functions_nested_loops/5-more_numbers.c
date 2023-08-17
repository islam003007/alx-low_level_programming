#include "main.h"
/**
 * more_numbers - prints numbers from 0 to 14 followed by a new line
 * 10 times
 *
*/
void more_numbers(void)
{
	int i, counter;

	for (counter = 0; counter < 10; counter++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i > 9)
				_putchar('0' + i / 10);
			_putchar('0' + i % 10);
		}
		_putchar('\n');
	}
}
