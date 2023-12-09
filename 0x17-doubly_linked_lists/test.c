#include <stdlib.h>
#include <stdio.h>

/**
 * check_palind - checks if number is palindrome.
 *
 * @n:inputs number.
 *
 * Return: 1 if number is palindrome , 0 if not.
*/
int check_palind(int n)
{
	int temp = n;
	int rev = 0;
	int dig;

	while (temp > 0)
	{
		dig = temp % 10;
		rev = rev * 10 + dig;
		temp /= 10;
	}

	if (n == rev)
		return (1);

	return (0);
}

/**
 * main - entry point.
 *
 * Return: 0
*/
int main(void)
{
	int i, j, sum = 0;
	int temp;

	for (i = 100; i < 1000; i++)
	{
		for (j = 100; j < 1000; j++)
		{
			temp = i * j;
			if (check_palind(temp) == 1)
			{
				if (temp > sum)
					sum = temp;
			}
		}
	}

	printf("%i\n", sum);

	return (0);
}
