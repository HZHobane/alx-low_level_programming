#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - Prints each array elements
 * @array: Array
 * @size: Number of elements
 * @action: Pointer to print in reg or hex
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int x;
if (array == NULL || action == NULL)
return;
for (x = 0; x < size; x++)
{
action(array[x]);
}
}
