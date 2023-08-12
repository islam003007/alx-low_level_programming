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

	for (num = 0; num < 10; num++)
	{
		int num2;

		for (num2 = num + 1; num2 < 10; num2++)
		{
			putchar('0' + num);
			putchar('0' + num2);
			if (num * 10 + num2 != 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);

}
