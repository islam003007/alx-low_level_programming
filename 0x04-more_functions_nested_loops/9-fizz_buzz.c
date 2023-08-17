#include "main.h"
#include "stdio.h"
/**
 * main - entry point
 *
 * Discription: prints fizz buzz
 *
 * Return: always 1 (success)
*/
int main(void)
{
	int i;

	printf("1");
	for (i = 2; i <= 100; i++)
	{
		printf(" ");
		if (i % 5 == 0 && i % 3 == 0)
		{
			printf("FizzBuzz");
			continue;
		}
		if (i % 3 == 0)
		{
			printf("Fizz");
			continue;
		}
		if (i % 5 == 0)
		{
			printf("Buzz");
			continue;
		}
		printf("%i", i);
	}
	printf("\n");
	return (0);
}
