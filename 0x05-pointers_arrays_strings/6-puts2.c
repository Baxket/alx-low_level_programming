#include "main.h"
/**
*puts2 - a function
*@str: it is a pointer
*
*Description: prints the even numbers of a string
*Return: 0
*/
void puts2(char *str)
{
	for (; *str;)
	{
		if (*str % 2 == 0)
		{
		_putchar(*str);
		}
		str++;
	}
	_putchar('\n');
}
