#include "function_pointers.h"
/**
 * int_index - Returns index place if comparison = true, else -1
 * @array: Array
 * @size: Size of elements
 * @cmp: Pointer to function
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int x;
if (array == NULL || size <= 0 || cmp == NULL)
return (-1);
for (x = 0; x < size; x++)
{
if (cmp(array[x]))
return (x);
}
return (-1);
}
