#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Description: postive or negative number
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
		printf("%i is zero", n);
	else if (n < 0)
		puts("%i is negative", n);
	else
		puts("%i is positive", n);
	return (0);
}
