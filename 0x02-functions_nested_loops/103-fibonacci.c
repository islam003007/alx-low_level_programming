#include "main.h"

/**
 * main - entry point
 *
 * Return: 0 (success)
*/
int main(void)
{
	unsigned long fib1, fib2, sum, sum2;

	fib1 = 1;
	fib2 = 2;
	sum2 = 0;
	printf("%lu", fib1);
	while (1)
	{
		sum = fib1 + fib2;
		fib1 = fib2;
		fib2 = sum;
		if (fib1 % 2 == 0)
			sum2 += fib1;
		if (fib1 >= 4000000)
			break;
		printf("%lu", fib2);
	}
	printf("\n");
	return (0);
}
