#include "main.h"
/**
 * reverse_array - A function that reverses the content of an array of integers
 * @a: Array
 * @n: Quantity of elements in the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
int x;
int y;
for (x = 0; x < n--; x++)
{
y = a[x];
a[x] = a[n];
a[n] = y;
}
}
