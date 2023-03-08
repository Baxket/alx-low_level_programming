#include "main.h"
/**
* factorial - print a string
*@n: integer
*Description: It prints a string, followed by a new line
*Return:void
*/
int factorial(int n)
{
	int i;

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		n--;
		i = n * factorial(n);
	}
	return (i);
}
