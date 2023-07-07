#include <stdio.h>
#include "main.h"

/**
 * main - A program that prints the name
 * of a program
 * @argc: Input of arguments
 * @argv: Input array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
printf("%s\n", *argv);
return (0);
}
