#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 *
 *
*/

void jack_bauer(void)
{
	int i;

	for (i = 0; i < 24; i++)
	{
		int k;

		for (k = 0; k < 6; k++)
		{
			int l;

			for (l = 0; l < 10; l++)
			{
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
				_putchar(':');
				_putchar(k + '0');
				_putchar(l + '0');
				_putchar('\n');
			}
		}
	}
}
