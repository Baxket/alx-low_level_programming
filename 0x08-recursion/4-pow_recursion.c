#include "main.h"
/**
* _puts_recursion - print a string
*@s:string
*Description: It prints a string, followed by a new line
*Return: 1
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y != 0)
	{
		y--;
		return (x * _pow_recursion(x, y ));
	}
	else
	{
		return (1);
	}
}

