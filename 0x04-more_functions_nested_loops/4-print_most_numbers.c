#include "main.h"
/**
*print_most_numbers - prints from 0 to 9 excluding 2 and 4
*
*Description: list natural numbers from 0 to 9 excluding 2 and 4
*Return: 0
*/
void print_most_numbers(void)
{
int a;
for (a = 0; a <= 9; a++)
{
	if (a == 2 || a == 4)
	{
		continue;
	}
	_putchar(48 + a);
}
_putchar('\n');
}
