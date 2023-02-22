#include "main.h"
/**
*times_table - a custom function
*description:  prints the 9 times table, starting with 0
*Return: 0
*/
void times_table(void)
{
int a, b;
for (a = 0 ; a < 10 ; a++)
{
for (b = 0 ; b <= 9 ; b++)
{
int ans = a * b;
if (ans / 10)
{
_putchar('0' + ans / 10);
_putchar('0' + ans % 10);
}
else
{
_putchar('0' + ans);
}
if (b < 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
