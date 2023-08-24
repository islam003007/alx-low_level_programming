#include "main.h"
/**
 * leet - encodes a string into 1337 code.
 *
 * @a: provides input.
 *
 * Return: pointer to result string.
*/
char *leet(char *a)
{
	int string_counter = 0;
	int key_counter;
	char key[] = "ALOTE";
	char encode[] = "41073";

	while (a[string_counter])
	{
		key_counter = 0;
		while (key[key_counter])
		{
			if (a[string_counter] == key[key_counter] ||
			(a[string_counter] - 32) == key[key_counter])
				a[string_counter] = encode[key_counter];
			key_counter++;
		}
		string_counter++;
	}
	return (a);
}
