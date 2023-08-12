#include <stdio.h>

/**
 * main - entry point
 *
 * Description: program
 *
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 100; num++)
	{
		int num2;

		for (num2 = num + 1; num2 < 100; num2++)
		{
			putchar('0' + num / 10);
			putchar('0' + num % 10);
			putchar(' ');
			putchar('0' + num2 / 10);
			putchar('0' + num2 % 10);
			if (num2 != 99 && num != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);

}
