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
int c = 0, n;

while (str[c] != '\0')
{
	c++;
}
if (c + 1 % 2 == 0)
{
	n = (c - 1) / 2;

}
else
{
	n = c / 2;
}

for (c = 0 ;c < n ; c++)
{
	_putchar(str[c]);
}
_putchar('\n');
}
