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
	char num;

	for (num = 0; num < 10; num++)
	{
		putchar('0' + num);
	}
	putchar('\n');
	return (0);

}
