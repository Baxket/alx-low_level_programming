#include "main.h"
/**
* _puts_recursion - print a string
*@s:string
*Description: It prints a string, followed by a new line
*Return:void
*/
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		s++;
		i++;
		i += _strlen_recursion(s);

	}
	return (i);
}
