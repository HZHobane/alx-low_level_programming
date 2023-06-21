#include <stdio.h>
#include "main.h"

/**
* print_to_98 - prints all numbers from the input to 98
* @a: The initial digit to begin printing from
*/
void print_to_98(int a)
{
if (a >= 98)
printf("%d, ", a--);
printf("%d\n", a);
}
else
{
while
(a < 98)
printf("%d, ", a++);
printf("%d\n", a);
}
