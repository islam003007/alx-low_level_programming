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
	int result = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	while (--argc)
	{
		if (!atoi(*(++argv)))
		{
			printf("Error\n");
			return (1);
		}
		result += atoi(*argv);
	}
	printf("%d\n", result);
	return (0);
}
