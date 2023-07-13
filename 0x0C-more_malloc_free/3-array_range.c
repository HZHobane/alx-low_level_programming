#include <stdlib.h>
#include "main.h"

/**
 * *array_range - A function that creates an array of integers
 * @min: Minimum range of stored values
 * @max: Maximum range of stored values
 *
 * Return: Pointer into the new array
 */
int *array_range(int min, int max)
{
int *pointer;
int x, value;
if (min > max)
return (NULL);
value = max - min + 1;
pointer = malloc(sizeof(int) * value);
if (pointer == NULL)
return (NULL);
for (x = 0; min <= max; x++)
pointer[x] = min++;
return (pointer);
}

