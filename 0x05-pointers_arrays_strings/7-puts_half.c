#include "main.h"
/**
 * puts_half - Prints half of a string, if odd length
 * y = (length_of_the_string - 1) / 2
 * @str: Input
 * Return: Half of the input
 */
void puts_half(char *str)
{
int x, y, length;
length = 0;
for (x = 0; str[x] != '\0'; x++)
length++;
y = (length / 2);
if ((length % 2) == 1)
y = ((length + 1) / 2);
for (x = y; str[x] != '\0'; x++)
_putchar(str[x]);
_putchar('\n');
}
