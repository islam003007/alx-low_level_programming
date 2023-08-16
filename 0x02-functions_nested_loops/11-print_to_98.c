#include "main.h"
/**
 * print_to_98 - print all natural numbers leading to 98
 *
 * @n: reads input
*/
void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i > 98; i--)
        {
            printf("%d, ", i);
        }
	}
	else
	{
        for (i = n; i < 98; i++)
        {
            printf("%d, ", i);
        }
	}
	printf("98\n");

}
