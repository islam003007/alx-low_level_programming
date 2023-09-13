#include "3-calc.h"

/**
 * main - entry point.
 *
 * @argc: argc.
 * @argv: argv.
 *
 * Return: 0 on success.
*/

int main(int argc, char *argv[])
{
	int num1, num2, calc;
	int (*op_fun)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	op_fun = get_op_func(argv[2]);
	if (!op_fun)
	{
		printf("Error\n");
		exit(99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	calc = op_fun(num1, num2);
	printf("%i\n", calc);

	return (0);
}
