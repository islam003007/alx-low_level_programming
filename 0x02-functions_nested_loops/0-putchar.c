#include <stdio.h>

int _putchar(char c);

/**
 * main - entry point
 *
 * Description: prints "_putchar"
 *
 * Return: 0
 */
int main(void)
{
	char word[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(word[0]);
	}
	_putchar('\n');
	return (0);

}
