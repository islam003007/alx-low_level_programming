#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * @argc: argc.
 * @argv: argv.
 *
 * Return: 0.
*/

int main(int argc, char *argv[])
{
	int num = atoi(argv[1]);

	if (argc != 2)
	{
		prinft("Error\n");
		exit(1);
	}
	if (num < 0)
	{
		prinft("Error\n");
		exit(2);
	}
}
