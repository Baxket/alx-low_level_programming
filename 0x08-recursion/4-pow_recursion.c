#include "main.h"
/**
* _pow_recursion - print a string
*@x:integer
*@y:integer 
*Description: it returns the value of x raised to the power of y
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
		return (x * _pow_recursion(x, y));
	}
	else
	{
		return (1);
	}
}

