#include "main.h"
/**
*jack_bauer - a function
*description: prints every minute of the day of Jack Bauer
*Return: 0
*/
void jack_bauer(void)
{
int a, b, c, d;
for (a = 0 ; a <= 2 ; a++)
{
for (b = 0 ; b <= 9 ; b++)
{
if ((a <= 1 && b <= 90) || (a <= 2 && b <= 3))
{
for (c = 0 ; c <= 5 ; c++)
{
for (d = 0 ; d <= 9 ; d++)
{
_putchar('0' + a);
_putchar('0' + b);
_putchar(':');
_putchar('0' + c);
_putchar('0' + d);
_putchar('\n');
}
}
}
}
}
}
