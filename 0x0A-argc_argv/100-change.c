#include <stdio.h>
#include <stdlib.h>

/**
 * change - prints the minimum number
 * of coins to make change for an amount of money.
 *
 * @cents: inputs amount of money
 *
 * Return: change.
*/
int change(int cents)
{
	int remain;
	int num = 0;

	if (cents / 25 > 0)
	{
		num = cents / 25;
		remain = cents % 25;
	}
	else if (cents / 10 > 0)
	{
		num = cents / 10;
		remain = cents % 10;
	}
	else if (cents / 5 > 0)
	{
		num = cents / 5;
		remain = cents % 5;
	}
	else if (cents / 2 > 0)
	{
		num = cents / 2;
		remain = cents % 2;
	}
	else
		return (cents);
	return (num + change(remain));
}

/**
 * main - entry point.
 * @argc: argc
 * @argv: argv
 * Return: always 0 (success).
*/

int main(int argc, char *argv[])
{
	int cents;

	if (argc != 2)
	{
		printf("error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	printf("%i\n", change(cents));
	return (0);
}
