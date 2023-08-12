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
			int num3;

			for (num3 = num2 + 1; num3 < 10; num3++)
			{
				putchar('0' + num);
				putchar('0' + num2);
				putchar('0' + num3);
				if (num * 100 + num2 * 10 + num3 != 789)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);

}
