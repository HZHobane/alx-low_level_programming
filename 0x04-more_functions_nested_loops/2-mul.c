#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: The character to be checked
 *
 * Return: 0 if otherwise or 1 if c is a digit
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
