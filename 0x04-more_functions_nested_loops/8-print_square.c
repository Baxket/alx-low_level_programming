#include "main.h"
/**
*print_square - prints a square line
*@size: it is an intger
*
*Description: prints lots of # character to form a diagonal line
*Return: 0
*/
void print_square(int size)
{
int a, b;
for (a = 0; a < size; a++)
{
	for (b = 0; b < size; b++)
	{
		putchar('#');
	}
		putchar(' ');
}
if (size <= 0)
{
	putchar('\n');
}
}
