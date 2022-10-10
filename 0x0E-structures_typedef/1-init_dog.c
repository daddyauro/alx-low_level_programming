#include "dog.h"

/**
 * init_dog - initializes a struct of type dog
 * @d: pointer to structure
 * @name: pointer to the name of the dog
 * @age: age of dog
 * @owner: pointer to dog owner
 *Return: 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d-> = name;
d-> = age;
d->owner = owner;
}
}
