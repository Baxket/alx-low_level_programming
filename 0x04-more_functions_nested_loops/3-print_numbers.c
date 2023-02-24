#include "main.h"
/**
*print_numbers - prints from 0 to 9
*
*Description: list natural numbers from 0 to 9
*Return: 0
*/
void print_numbers(void)
{
int a;
for (a = 0; a <= 9; a++)
{
_putchar(48 + a);
}
_putchar('\n');
}
