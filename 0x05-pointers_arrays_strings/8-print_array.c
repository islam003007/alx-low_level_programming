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
		return;
	printf("%i", a[0]);
	for (i = 1; i < n; i++)
	{
		printf(", %i", a[i]);
	}
	printf("\n");
}
