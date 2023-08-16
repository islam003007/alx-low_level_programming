#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 *
 *
*/

void jack_bauer(void)
{
	int i;

	for (i = 0; i < 3; i++)
	{
		int j;

		for (j = 0; j < 4; j++)
		{
			int k;

			for (k = 0; k < 6; k++)
			{
				int l;

				for (l = 0; l < 10; l++)
				{
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(k);
					_putchar(l);
					_putchar('\n');
				}
			}
		}
	}
}
