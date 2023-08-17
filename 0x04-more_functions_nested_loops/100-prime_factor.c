#include "main.h"
#include "stdio.h"
/**
 * main - entry point
 *
 * Discription: prints max prime factor
 *
 * Return: always 1 (success)
*/
int main(void)
{
	long int n, div;

	div = 2;
	n = 612852475143;
	while (1)
	{
		if (n % div != 0)
		{
			div = div + 1;
			continue;
		}
	}
	return (0);
}
