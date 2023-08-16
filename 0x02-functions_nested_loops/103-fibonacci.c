#include "main.h"

/**
 * main - entry point
 *
 * Return: 0 (success)
*/
int main(void)
{
	unsigned long i, fib1, fib2, sum, sum2;

	fib1 = 1;
	fib2 = 2;
    sum2 = 0;
	printf("%lu", fib1);
	for (i = 0; i < 300; i++)
	{
		sum = fib1 + fib2;
		fib1 = fib2;
		fib2 = sum;
        sum2 += fib1;
		if (fib1 >= 4000000)
            break;
	}
	printf("\n");
	return (0);
}
