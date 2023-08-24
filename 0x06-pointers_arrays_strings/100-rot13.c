#include "main.h"
/**
 * rot13 - encodes a string into rot13 code.
 *
 * @a: provides input.
 *
 * Return: pointer to result string.
*/
char *rot13(char *a)
{
	int string_counter = 0;
	char key;

	while (a[string_counter])
	{
		if (a[string_counter] <= 122 && a[string_counter] >= 97)
		{
			key = a[string_counter] - 97;
			key += 13;
			key %= 26;
			key += 97;
			a[string_counter] = key;
		}
		while (a[string_counter] <= 90 && a[string_counter] >= 65)
		{
			key = a[string_counter] - 65;
			key += 13;
			key %= 26;
			key += 65;
			a[string_counter] = key;
			break;
		}
		string_counter++;
	}
	return (a);
}
