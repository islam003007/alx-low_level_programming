#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *concat;

	concat = string_nconcat("sdafadf", "adaffsa", __INT_MAX__);
	printf("%s\n", concat);
	free(concat);
	return (0);
}
