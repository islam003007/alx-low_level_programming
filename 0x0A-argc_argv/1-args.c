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
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
