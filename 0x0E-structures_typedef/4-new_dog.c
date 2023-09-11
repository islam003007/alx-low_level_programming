#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - strlen
 *
 * @str: inputs string.
 *
 * Return: string length.
*/

unsigned int _strlen(char *str)
{
	unsigned int i;

	if (str == NULL || str[0] == '\0')
		return (0);

	for (i = 0; str[i]; i++)
		;

	return (i);
}

/**
 * new_dog - instructer of the struct dog.
 *
 * @name: inputs name.
 * @age: inputs age.
 * @owner: inputs owner
 *
 * Return: pointer to the new instucted variable.
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int name_length = _strlen(name);
	unsigned int owner_length = _strlen(owner);
	unsigned int i;
	dog_t *new;


	if (name == NULL || owner == NULL)
		return (NULL);

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);

	new->name = malloc(sizeof(char) * (name_length + 1));
	if (new->name == NULL)
		return (NULL);

	for (i = 0; i <= name_length; i++)
		new->name[i] = name[i];

	new->age = age;

	new->owner = malloc(sizeof(char) * (owner_length + 1));
	if (new->owner == NULL)
		return (NULL);

	for (i = 0; i <= owner_length; i++)
		new->owner[i] = owner[i];

	return (new);







}
