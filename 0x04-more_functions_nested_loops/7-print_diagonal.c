#include "main.h"
/**
*print_diagonal - prints a diagonal line
*@n: it is an intger
*
*Description: prints n number of back slash to form a diagonal line
*Return: 0
*/
void print_diagonal(int n)
{
int a, b;
for (a = 0; a < n; a++)
{
	_putchar('\\');
	_putchar('\n');
	if (a < n - 1)
	{
	for (b = 0; b <= a; b++)
	{
	_putchar(' ');
	}
	}
}
if (n <= 0)
_putchar('\n');
}
