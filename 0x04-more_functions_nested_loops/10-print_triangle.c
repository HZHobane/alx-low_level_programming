#include "main.h"

/**
 * print_triangle - Prints a triangle FD by a new line
 * @size: Triangle size
 */
void print_triangle(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int x, y;
for (x = 1; x <= size; x++)
{
for (y = x; y < size; y++)
{
_putchar(' ');
}
for (y = 1; y <= i; y++)			
{
_putchar('#');
}
_putchar('\n');
}
}
}
