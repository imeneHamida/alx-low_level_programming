#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog with
 * copied name and owner.
 * @name: Name of the dog (char *).
 * @age: Age of the dog (float).
 * @owner: Owner's name (char *).
 * Return: A pointer to the newly created dog_t
 * or NULL if the function fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *newDog;
if (name == NULL || owner == NULL)
return NULL;
newDog = (dog_t *)malloc(sizeof(dog_t));

if (newDog == NULL)
return (NULL);

newDog->name = strdup(name);
newDog->owner = strdup(owner);

if (newDog->name == NULL || newDog->owner == NULL)
{
free(newDog->name);
free(newDog->owner);
free(newDog);
return (NULL);
}

newDog->age = age;

return (newDog);
}
