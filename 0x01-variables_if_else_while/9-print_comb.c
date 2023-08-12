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

	for (num = 1; num < 10; num++)
	{
		putchar('0' + num);
		if (num != 9)
		{
		putchar(',');
		putchar(' ');
		}
	}
	return (0);

}
