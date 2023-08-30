#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number.
 *
 * @n: inputs number.
 *
 * Return: the natural square root of a numbber.
*/

int sqr_temp(int n, int a);
int _sqrt_recursion(int n)
{
	return (sqr_temp(n, 0));
}

/**
 * sqr_temp - secondry function used by _sqrt_recursion.
 *
 * @n: inputs number.
 * @a: inputs temporary value.
 *
 * Return: square root.
*/
int sqr_temp(int n, int a)
{
	if (a * a == n)
		return (a);
	else if (a * a < n)
		return (sqr_temp(n, n + 1));
	else
		return (-1);
}
