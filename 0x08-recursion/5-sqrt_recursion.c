#include "main.h"
/**
 * square_root - temp function for _sqrt_recursion
 *
 * @n: inputs number.
 * @a: integer temp value.
 *
 * Return: quare root of a number.
 */
int square_root(int n, int a)
{
	if (a * a == n)
		return (a);
	else if (a * a > n)
		return (-1);
	else
		return (square_root(n, a + 1));
}
/**
 * _sqrt_recursion - that returns the natural square root of a number.
 *
 * @n: inputs number.
 *
 * Return: quare root of a number.
 */
int _sqrt_recursion(int n)
{
	return (square_root(n, 1));
}
