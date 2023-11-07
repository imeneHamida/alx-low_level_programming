#include "dog.h"

/**
 * init_dog - Initializes a struct
 * dog with the provided values.
 * @d: Pointer to the struct dog to be initialized.
 * @name: Name of the dog (char *).
 * @age: Age of the dog (float).
 * @owner: Owner's name (char *).
 */
void init_dog(struct dog *d, char *name,
float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
