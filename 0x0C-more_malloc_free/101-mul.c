#include "main.h"

/**
 * main - entry point
 *
 * @argc: argc.
 * @argv: argv.
 *
 * Return: always 0 (success).
*/

int main(int argc, char *argv[])
{
	unsigned long int mul;
	int num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[2]);
	num2 = atoi(argv[3]);
	mul = num1 * num2;

	printf("%lu", mul);

	return (0);
}
