#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * postive_or_negative - checks if number is postive or negative
 *
 * @i: reads input
 *
 * Return: 0
 */
void positive_or_negative(int i)
{
	if (i == 0)
		printf("%i is zero\n", i);
	else if (i < 0)
		printf("%i is negative\n", i);
	else
		printf("%i is positive\n", i);
}
