#include "main.h"
/**
 * cap_string - capitalizes all lower case words of a string to upper case.
 *
 * @a: provides input string.
 *
 * Return: char pointer of result.
*/
char *cap_string(char *a)
{
	int i = 0;

	while (a[i])
	{
		if (a[i] >= 97 && a[i] <= 122 && ((i == 0) || (a[i - 1] == ',') ||
		(a[i - 1] == ';') || (a[i - 1] == '.') || (a[i - 1] == '!') ||
		(a[i - 1] == '?') || (a[i - 1] == '"') || (a[i - 1] == '(') ||
		(a[i - 1] == ')') || (a[i - 1] == '{') || (a[i - 1] == '}') ||
		(a[i - 1] == ' ') || (a[i - 1] == '\n') || (a[i - 1] == '\t')))
		{
			a[i] -= 32;
		}
		i++;
	}
	return (a);
}
