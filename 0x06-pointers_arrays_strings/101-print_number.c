#include "main.h"
/**
*print_number - a function
*@n: it is a pointer
*
*Description: it prints an integer
*Return: 0
*/
void print_number(int n)
{
	unsigned int i;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	else
	{
		i = n;
		if (i / 10)
		{
			print_number('0' + i / 10);
		}
		_putchar('0' + i % 10);
	}
}
