#include "main.h"
#include <stdio.h>
/**
*print_to_98 - a function
*@n: an integer
*description: prints all natural numbers from input to 98
*Return: 0
*/
void print_to_98(int n)
{
int a;
if (n == 98)
{
printf("%d", n);
}
else if (n > 98)
{
for (a = n ; a >= 98 ; a--)
{
printf("%d", a);

if (a > 98)
{
printf(", ");
}
}
}
else
{
for (a = n ; a <= 98 ; a++)
{
printf("%d", a);
if (a < 98)
{
printf(", ");
}
}
}
printf("\n");
}
