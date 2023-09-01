#include <stdio.h>

/**
 * main - entry point
 *
 * @argc: number of arguments
 * @argv: argument.
 * Return: always 0 (success).
*/

int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
