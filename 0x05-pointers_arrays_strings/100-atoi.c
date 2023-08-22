#include "main.h"
/**
 * _atoi - converts a string to an integer
 *
 * @s: inputs a string
 *
 * Return: an integer
*/
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	unsigned int num = 0;

	while (s[i])
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] <= '9' && s[i] >= '0')
			num = num * 10 + (s[i] - '0');
		else if (num != 0)
			break;
		i++;
	}
	return (num * sign);
}
