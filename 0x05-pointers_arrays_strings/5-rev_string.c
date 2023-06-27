#include "main.h"

/**
 * rev_string - A program that reverses a string
 * @s: Intial string input
 * Return: String in reverse format
 */
void rev_string(char *s)
{
char backward = s[0];
int count = 0;
int x;
while (s[count] != '\0')
count++;
for (x = 0; x < count; x++)
{
count--;
backward = s[x];
s[x] = s[count];
s[count] = backward;
}
}
