#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *str)
{
int capital = 0;
while (str[capital])
{
while (!(str[capital] >= 'a' && str[capital] <= 'z'))
capital++;
if (str[capital - 1] == ' ' ||
str[capital - 1] == '\t' ||
str[capital - 1] == '\n' ||
str[capital - 1] == ',' ||
str[capital - 1] == ';' ||
str[capital - 1] == '.' ||
str[capital - 1] == '!' ||
str[capital - 1] == '?' ||
str[capital - 1] == '"' ||
str[capital - 1] == '(' ||
str[capital - 1] == ')' ||
str[capital - 1] == '{' ||
str[capital - 1] == '}' ||
capital == 0)
str[capital] -= 32;
capital++;
}
return (str);
}
