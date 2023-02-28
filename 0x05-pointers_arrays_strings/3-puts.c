#include "main.h"
/**
*_puts - a function
*@str: it is a pointer
*
*Description: prints a string
*Return: 0
*/
void _puts(char *str)
{
	for (; *str;)
	{
	_putchar(*str);
	str++;
	}
	_putchar('\n');
}
