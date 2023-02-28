#include "main.h"
/**
*puts_half - a function
*@str: it is a pointer
*
*Description: prints half of a string
*Return: 0
*/
void puts_half(char *str)
{
int c = 0, n, j;

while (str[c] != '\0')
{
	c++;
}
if (c + 1 % 2 != 0)
{
	n = (c - 1) / 2;
}
else
{
	n = c / 2;
}
n++;
for (j = n ; str[j] != '\0' ; j++)
{
	_putchar(str[j]);
}
_putchar('\n');
}
