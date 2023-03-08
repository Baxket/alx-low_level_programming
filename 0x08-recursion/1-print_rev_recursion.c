#include "main.h"
/**
* _print_rev_recursion - print a string
*@s:string
*Description: It prints a string in revers, followed by a new line
*Return:void
*/

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
