#include "main.h"

/**
 * _strspn - returns the length of a prefix substring.
 *
 * @s: inputs string.
 * @accept: inputs substring to be exepted.
 *
 * Return: length of prefix substing.
*/

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int counter = 0;

	for (i = 0; s[i]; i++)
	{
		int j;
		int temp = counter;

		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				counter++;
		}
		if (temp == counter)
			return (counter);
	}
	return (counter);
}
