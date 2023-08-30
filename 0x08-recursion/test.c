#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number.
 *
 * @n: inputs number.
 *
 * Return: the natural square root of a numbber.
*/

int quare_root(int n, int a);
int _sqrt_recursion(int n)
{
	return (quare_root(n, 0));
}

/**
 * quare_root - _sqrt_recursion
 * @n: integer paramtr
 * @a: integer parameter
 * Return: sqrt
 */
int quare_root(int n, int a)
{
	if (a * a == n)
		return (a);
	else if (a * a < n)
		return (quare_root(n, n + 1));
	else
		return (-1);
}
