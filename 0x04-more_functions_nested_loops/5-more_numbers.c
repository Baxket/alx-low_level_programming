#include "main.h"
/**
*print_numbers - prints from 0 to 9
*
*Description: list natural numbers from 0 to 9
*Return: 0
*/
void print_numbers(void)
{
int a, b;
for (a = 1; a <= 10; a++)
{
	for (b = 0; b <= 14; b++)
	{
		_putchar(48 + b);
	}
	_putchar(48 + a);
}
_putchar('\n');
}
