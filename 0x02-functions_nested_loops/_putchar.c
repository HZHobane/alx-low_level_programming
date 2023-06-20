#include "main.h"
#include <unistd.h>

/**
* _putchar - Program will write the character
* c to the stdout
* Return: Always 1 (Success)
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
