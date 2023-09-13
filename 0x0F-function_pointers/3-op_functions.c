#include "3-calc.h"

/**
 * op_add - sums 2 ints.
 *
 * @a: inputs int.
 * @b: inputs int.
 *
 * Return: sum of 2 ints.
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substracts 2 ints.
 *
 * @a: inputs int.
 * @b: inputs int.
 *
 * Return: substraction of 2 ints.
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies 2 ints.
 *
 * @a: inputs int.
 * @b: inputs int.
 *
 * Return: mutliplication of 2 ints.
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divices 2 ints.
 *
 * @a: inputs int.
 * @b: inputs int.
 *
 * Return: divison of 2 ints.
*/

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - divices 2 ints and returns the reminder.
 *
 * @a: inputs int.
 * @b: inputs int.
 *
 * Return: modulas of 2 ints.
*/

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
