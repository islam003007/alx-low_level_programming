#include "main.h"

/**
 * main - entry point
 *
 * Return: 0 (success)
*/
int main(void)
{
	unsigned long i, fib1, fib2, sum;

	fib1 = 0;
	fib2 = 1;
	printf("%lu ,", fib2);
	for (i = 0; i < 49; i++)
	{
		sum = fib1 + fib2;
		fib1 = fib2;
		fib2 = sum;
		printf(", %lu", fib2);
	}
	printf("\n");
	return (0);
}
