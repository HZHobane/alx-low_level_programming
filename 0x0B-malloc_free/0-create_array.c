#include "main.h"
#include <stdlib.h>
/**
 * create_array - A function that creates an array of char
 * and initializes it with a specific char
 * @size: Size of the array
 * @c: Character to assign
 * Return: Pointer to array, NULL if fail
 *
 */
char *create_array(unsigned int size, char c)
{
char *string;
unsigned int x;
string = malloc(sizeof(char) * size);
if (size == 0 || string == NULL)
return (NULL);
for (x = 0; x < size; x++)
string[x] = c;
return (string);
}
