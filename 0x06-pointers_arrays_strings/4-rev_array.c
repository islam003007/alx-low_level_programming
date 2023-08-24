#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers.
 *
 * @a: provides input array.
 * @n: provides array size.
*/
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < (n - 1) / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
