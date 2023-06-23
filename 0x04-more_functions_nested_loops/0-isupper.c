#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks for uppercase character
 * @c: The character to be checked
 * Return: 1 for uppercase char or 0 for any else
 */
int main(void)
{
char c;
c = 'A';
printf("%c: %d\n", c, _isupper(c));
c = 'a';
printf("%c: %d\n", c, _isupper(c));
return (0);
}
