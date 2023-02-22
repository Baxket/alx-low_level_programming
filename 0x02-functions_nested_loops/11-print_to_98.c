#include "main.h"
/**
*print_to_98 - a function
*@n: an integer
*description: prints all natural numbers from input to 98
*Return: 0
*/
void print_to_98(int n)
{
int a;
for (a = n ; a <= 98 ; a++)
{
_putchar('0' + a);
if (a < 98)
{
_putchar(',');
_putchar(' ');
}
}
}
