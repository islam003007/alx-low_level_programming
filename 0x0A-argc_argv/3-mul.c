#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * @argc: number of arguments
 * @argv: argument.
 * Return: always 0 (success).
*/

int main(int argc, char *argv[])
{
	int result = 1;

	if (argc > 2)
	{
		while (--argc)
		{
			result *= atoi(*(++argv));
		}
		printf("%d\n", result);
		return (0);
	}
	printf("Error\n");
	return (1);
}
