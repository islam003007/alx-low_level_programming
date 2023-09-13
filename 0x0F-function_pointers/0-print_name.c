/**
 * print_name - prints a name.
 *
 * @name: string of a name.
 * @f: pointer to the fucntion the prints the name.
*/

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
	{
		f(name);
	}
}
