#include "dog.h"
#include <stdio.h>

/**
 * new_dog - create new dog
 * @name: new dog's name
 * @age: new dog's age
 * @owner: new dog's owner
 * Return: 0 or pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;
	int k, n_name, n_owner;

	n_dog = malloc(sizeof(dog_t));
	if (!(name) || !(owner) || !(n_dog))
	{
		return (NULL);
		free(n_dog);
	}
	for (n_name = 0; name[n_name] != '\0'; n_name++)
		;
		n_name++;
	n_dog->name = malloc(sizeof(char) * n_name);
	if (n_dog->name == NULL)
	{
		free(n_dog->name);
		return (NULL);
	}
	for (k = 0; k < n_name; k++)
		n_dog->name[k] = name[k];
	n_dog->age = age;
	for (n_owner = 0; owner[n_owner] != '\0'; n_owner++)
		;
		n_owner++;
		n_dog->owner = malloc(sizeof(char) * n_owner);
	if (n_dog->owner == NULL)
	{
		free(n_dog->owner);
		free(n_dog);
		return (NULL);
	}
	for (k = 0; k < n_owner; k++)
		n_dog->owner[k] = owner[k];
	return (n_dog);
}
