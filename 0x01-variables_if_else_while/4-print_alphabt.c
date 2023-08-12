#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Description: postive or negative number
 *
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		if (c != 'e' && c != 'q')
			putchar(c);
	putchar('\n');
	return (0);
}
