#include "3-calc.h"

/**
 * get_op_func - selects the right function to perform operation on 2 ints.
 *
 * @s: inputs operation sympol.
 *
 * Return: pointer the function that performs the operation.
*/

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;

	while (i < 5)
	{
		if (!strcmp(s, ops[i].op))
			return (ops[i].f);

		i++;
	}

	return (NULL);
}
