#include "main.h"
/**
* _sqrt_recursion - a function
*@n:string
*Description: It prints a string, followed by a new line
*Return:void
*/
int _sqrt_recursion(int n)
{
	int i ;
	if (n == 0)
		return (0);
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	i++;
	return (_sqrt_recursion(n));
}
