#include <stdlib.h>
#include "dog.h"

/**
* new_dog - Creates a new dog
* @name: Name of dog
* @age: Age of dog
* @owner: Owner of dog
*
* Return: Pointer to new dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
unsigned int x, y, z;
dog_t *dog;
if (name == NULL || owner == NULL)
return (NULL);
dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);
for (x = 0; name[x]; x++)
;
x++;
dog->name = malloc(x *sizeof(char));
if (dog->name == NULL)
{
free(dog);
return (NULL);
}
for (z = 0; z < x; z++)
dog->name[z] = name[z];
dog->age = age;
for (y = 0; owner[y]; y++)
;
y++;
dog->owner = malloc(y *sizeof(char));
if (dog->owner == NULL)
{
free(dog->name);
free(dog);
return (NULL);
}
for (z = 0; z < y; z++)
dog->owner[z] = owner[z];
return (dog);
}
