#include "main.h"
/**
 * print_diagsums - prints the sum of the 2 diagonals of a square matrix.
 *
 * @a: inputs matrix
 * @size: inputs matrix size
*/
void print_diagsums(int *a, int size)
{
	int dia1 = 0;
	int dia2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		dia1 += a[i * size + i];
		dia2 += a[i * size + (size - i - 1)];
	}
	printf("%d, %d\n", dia1, dia2);

}
