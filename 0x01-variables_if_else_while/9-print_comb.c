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

	putchar('0');
	for (num = 1; num < 10; num++)
	{
		putchar(',');
		putchar(' ');
		putchar('0' + num);
	}
	return (0);

}
