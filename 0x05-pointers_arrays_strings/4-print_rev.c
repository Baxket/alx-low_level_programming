#include "main.h"
/**
*print_rev - a function
*@s: it is a pointer
*
*Description: prints the reverse of a string
*Return: 0
*/
void print_rev(char *s)
{
	char temp[1000];
	int j, i = 0;

	for (; *s;)
	{
		temp[i] = *s;
		i++;
		s++;
	}
	for (j = i - 1 ; j >= 0; j--)
	{
		_putchar(temp[j]);
	}
	_putchar('\n');
}
