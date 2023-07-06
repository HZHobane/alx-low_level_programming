#include "main.h"
/**
 * _strlen_recursion - A function that returns the length of a string.
 * @s: String input.
 *
 * Return: The string length.
 */
int _strlen_recursion(char *s)
{
int stringlength = 0;
if (*s)
{
stringlength++;
stringlength += _strlen_recursion(s + 1);
}
return (stringlength);
}
