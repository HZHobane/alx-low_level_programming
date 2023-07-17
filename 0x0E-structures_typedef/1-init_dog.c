#include "dog.h"

/**
* init_dog - initializes a variable of type struct dog
* @d: Pointer to structure
* @name: Pointer to dog
* @age: Age to initialize
* @owner: Pointer to owner
*
* Return: void
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
