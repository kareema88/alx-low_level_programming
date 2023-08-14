#include "dog.h"

/**
 * new_dog - create new dog
 * @name: new dog's name
 * @age: new dog's age
 * @owner: new dog's owner
 * @Return: 0 or pointer to n_dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
int n_n = 0, n_o = 0, k;
dog_t *n_dog;
while (name[n_n] != '\0')
n_n++;
while (owner[n_o] != '\0')
n_o++;
n_dog = malloc(sizeof(dog_t));
if (n_dog == NULL)
{
free(n_dog);
return (NULL);
}
n_dog->name = malloc(n_n *sizeof(n_dog->name));
if (n_dog->name == NULL)
{
free(n_dog->name);
free(n_dog);
return (NULL);
}
for (k = 0; k <= n_n; k++)
n_dog->name[k] = name[k];
n_dog->age = age;
n_dog->owner = malloc(n_o *sizeof(n_dog->owner));
if (n_dog->owner == NULL)
{
free(n_dog->owner);
free(n_dog->name);
free(n_dog);
return (NULL);
}
for (k = 0; k <= n_o; k++)
n_dog->owner[k] = owner[k];
return (n_dog);
}
