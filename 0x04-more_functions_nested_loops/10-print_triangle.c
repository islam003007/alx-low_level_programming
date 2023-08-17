#include "main.h"
/**
 * print_triangle - prints a triangle
 *
 * @size: inputs the size of the triangle
 *
*/
void print_triangle(int size)
{
	int i;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= size; i++)
		{
			int j;

			for (j = size; j > i; j--)
				_putchar(' ');
			for (j = 0; j < i; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
