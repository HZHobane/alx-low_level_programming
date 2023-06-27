#include "main.h"
/**
 * _puts - Prints a string to the standard i/o
 * @str: String to print
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str++);
}
_putchar('\n');
}
