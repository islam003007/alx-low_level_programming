#include "main.h"
/**
 * swap_int - swaps between 2 ints
 *
 * @a: first input
 * @b: second input
*/
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
