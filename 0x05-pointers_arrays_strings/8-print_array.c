#include "main.h"
/**
 * print_array - prints n elements of an array
 *
 * @a: inputs an array
 * @n: inputs the number of elements to print
*/
void print_array(int *a, int n)
{
	int i = 0;

	if (n < 1)
	{
		printf("\n");
		return;
	}
	for (i = 0; i < n - 1; i++)
	{
		printf("%i, ", a[i]);
	}
	printf("%i", a[n - 1]);
	printf("\n");
}
