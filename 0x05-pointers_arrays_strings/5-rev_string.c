#include "main.h"
/**
 * rev_string - reverses a string and and returns it
 *
 * @s: provides input string
*/
void rev_string(char *s)
{
	int i = 0;
	int j;
	char temp;

	while (s[i])
	{
		i++;
	}
	for (j = 0; j < i / 2; j++)
	{
		temp = s[j];
		s[j] = s[i - 1 - j];
		s[i - 1 - j] = temp;
	}


}
