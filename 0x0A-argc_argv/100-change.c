#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
int input, x, total;
int coin[] = {25, 10, 5, 2, 1};
if (argc != 2)
{
printf("Error\n");
return (1);
}
input = atoi(argv[1]);
total = 0;
if (input < 0)
{
printf("0\n");
return (0);
}
for (x = 0; x < 5 && input >= 0; x++)
{
while (input >= coin[x])
{
total++;
input -= coin[x];
}
}
printf("%d\n", total);
return (0);
}
