#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * is_digit - A function that checks if a string contains a non-digit.
 * @s: String to be checked
 *
 * Return: 0 if a non-digit is found, 1 otherwise.
 */
int is_digit(char *s)
{
int x = 0;
while (s[x])
{
if (s[x] < '0' || s[x] > '9')
return (0);
x++;
}
return (1);
}

/**
 * _strlen - A function that returns the length of a string.
 * @s: string to check
 *
 * Return: length of string
 */
int _strlen(char *s)
{
int x = 0;
while (s[x] != '\0')
{
x++;
}
return (x);
}

/**
 * errors - A function that detects errors for the main function
 */
void errors(void)
{
printf("Error\n");
exit(98);
}

/**
 * main - A function that multiplies two positive numbers
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
char *s1, *s2;
int length1, length2, length, x, carry, num1, num2, *total, y = 0;
s1 = argv[1], s2 = argv[2];
if (argc != 3 || !is_digit(s1) || !is_digit(s2))
errors();
length1 = _strlen(s1);
length2 = _strlen(s2);
length = length1 + length2 + 1;
total = malloc(sizeof(int) * length);
if (!total)
return (1);
for (x = 0; x <= length1 + length2; x++)
total[x] = 0;
for (length1 = length1 - 1; length1 >= 0; length1--)
{
num1 = s1[length1] - '0';
carry = 0;
for (length2 = _strlen(s2) - 1; length2 >= 0; length2--)
{
num2 = s2[length2] - '0';
carry += total[length1 + length2 + 1] + (num1 *num2);
total[length1 + length2 + 1] = carry % 10;
carry /= 10;
}
if (carry > 0)
total[length1 + length2 + 1] += carry;
}
for (x = 0; x < length - 1; x++)
{
if (total[x])
y = 1;
if (y)
_putchar(total[x] + '0');
}
if (!y)
_putchar('0');
_putchar('\n');
free(total);
return (0);
}
