#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints the struct dog.
 *
 * @d: inputs data.
*/
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");

		if (d->age != 0)
			printf("age: %f\n", d->age);
		else
			printf("age: (nil)\n");

		if (d->owner != NULL)
			printf("owner: %s\n", d->owner);
		else
			printf("owner: (nil)\n");
	}
}
