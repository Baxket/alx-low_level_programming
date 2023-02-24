#include "main.h"
/**
*print_triangle - prints a triangle line
*@size: it is an intger
*
*Description: prints lots of # character to form a triangle
*Return: 0
*/
void print_triangle(int size)
{
int a, b, c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 1; a <= size; a++)
		{
			for (b = size - a; b >= 1; b--)
			{
				_putchar(' ');
			}
			for (c = 1; c <= a; c++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
