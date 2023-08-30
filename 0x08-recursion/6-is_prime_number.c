#include "main.h"
/**
 * prime - is_prime_number.
 *
 * @n: inputs number.
 * @val: inputs temp value.
 *
 * Return: 1 if number is prime else ruturns 0.
*/
int prime(int n, int val)
{
	if (val > n)
		return (0);
	if (val == n)
		return (1);
	else if (n % val == 0)
		return (0);
	return (prime(n, val + 1));
}
/**
 * is_prime_number - checks if number is prime.
 *
 * @n: inputs number.
 *
 * Return: 1 if number is prime else ruturns 0.
*/
int is_prime_number(int n)
{
	return (prime(n, 2));
}
