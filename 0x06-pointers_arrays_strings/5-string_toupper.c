#include "main.h"
/**
 * string_toupper - changes all lower case litters of a string to upper case.
 *
 * @a: provides input string.
 *
 * Return: char pointer of result.
*/
char *string_toupper(char *a)
{
	int i = 0;

	while (a[i])
	{
		if (a[i] >= 97 && a[i] <= 122)
		{
			a[i] -= 32;
		}
		i++;
	}
	return (a);
}
